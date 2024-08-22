// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABSASSISTANTMANAGER_H
#define ABSASSISTANTMANAGER_H


#import <Foundation/Foundation.h>

#import "ABSAddressBook.h"

@interface ABSAssistantManager : NSObject

@property (readonly, nonatomic) ABSAddressBook *addressBook; // ivar: _addressBook


-(id)init;
-(id)initWithAddressBook:(id)arg0 ;
-(id)newSAPersonFromABPerson:(*void)arg0 ;


@end


#endif