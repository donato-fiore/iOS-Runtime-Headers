// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCNCONTACTSTORE_H
#define WFCNCONTACTSTORE_H

@class CNContactStore;


#import "WFContactStore.h"

@interface WFCNContactStore : WFContactStore

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(BOOL)addContact:(id)arg0 error:(*id)arg1 ;
-(id)allContactsWithSortOrder:(NSInteger)arg0 ;
-(id)allContactsWithSortOrder:(NSInteger)arg0 passingTest:(id)arg1 ;
-(id)contactWithIdentifier:(id)arg0 ;
-(id)contactsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)contactsWithName:(id)arg0 ;
-(id)contactsWithName:(id)arg0 keysToFetch:(id)arg1 ;
-(id)firstContactWithEmailAddress:(id)arg0 ;
-(id)firstContactWithPhoneNumber:(id)arg0 ;
-(id)firstContactWithPredicate:(id)arg0 propertyID:(int)arg1 valueEqualityBlock:(id)arg2 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif