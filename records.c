/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.
 * Author @Zongo Justin Maqutu                          *
 **********************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include "dogs.h"
#define NAME_LEN 30

int main(void)
{
  char code;

  struct dog *dog_list = NULL;
  printf("Operation Code: \na : appending to the list, \n s: for finding a dog"
          ", \np: for printing the list; \nq: for quit.\n");
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': dog_list = append(dog_list);
                break;
      case 's': search(dog_list);
                break;
      case 'p': print(dog_list);
                break;
      case 'q': clear(dog_list);
                return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

