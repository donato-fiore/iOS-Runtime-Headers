// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTVCARDSERIALIZATION_H
#define CNCONTACTVCARDSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface CNContactVCardSerialization : NSObject



+(id)contactsWithData:(id)arg0 error:(*id)arg1 ;
+(id)contactsWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)contactsWithMECARDString:(id)arg0 error:(*id)arg1 ;
+(id)dataWithContacts:(id)arg0 error:(*id)arg1 ;
+(id)dataWithContacts:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)dataWithContacts:(id)arg0 options:(id)arg1 error:(*id)arg2 environment:(id)arg3 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithOptions:(id)arg0 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg0 description:(id)arg1 ;
+(id)summaryOfLocationVCard:(id)arg0 error:(*id)arg1 ;
+(id)summaryOfVCard:(id)arg0 error:(*id)arg1 ;
+(void)contactsWithData:(id)arg0 completionHandler:(id)arg1 ;
+(void)contactsWithData:(id)arg0 scheduler:(id)arg1 completionHandler:(id)arg2 ;
+(void)dataWithContacts:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
+(void)dataWithContacts:(id)arg0 options:(id)arg1 scheduler:(id)arg2 completionHandler:(id)arg3 ;
+(void)logWritingContactsToVCard:(id)arg0 options:(id)arg1 logger:(id)arg2 ;


@end


#endif