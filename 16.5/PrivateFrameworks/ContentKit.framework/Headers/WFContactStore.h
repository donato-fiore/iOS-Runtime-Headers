// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTACTSTORE_H
#define WFCONTACTSTORE_H


#import <Foundation/Foundation.h>


@interface WFContactStore : NSObject



+(Class)preferredConcreteSubclass;
+(id)new;
-(BOOL)addContact:(id)arg0 error:(*id)arg1 ;
-(id)allContactsWithSortOrder:(NSInteger)arg0 ;
-(id)allContactsWithSortOrder:(NSInteger)arg0 passingTest:(id)arg1 ;
-(id)contactWithIdentifier:(id)arg0 ;
-(id)contactsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)contactsWithName:(id)arg0 ;
-(id)firstContactWithEmailAddress:(id)arg0 ;
-(id)firstContactWithPhoneNumber:(id)arg0 ;
-(id)init;


@end


#endif