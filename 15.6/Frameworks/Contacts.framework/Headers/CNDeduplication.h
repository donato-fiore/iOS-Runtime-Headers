// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDEDUPLICATION_H
#define CNDEDUPLICATION_H


#import <Foundation/Foundation.h>


@interface CNDeduplication : NSObject



+(id)os_log;
-(id)contactsForGroup:(id)arg0 store:(id)arg1 ;
-(id)identifierSetFromContacts:(id)arg0 ;
-(void)addContactsForIds:(id)arg0 toGroup:(id)arg1 usingRequest:(id)arg2 store:(id)arg3 ;
-(void)deduplicateAllContainers:(id)arg0 ;
-(void)deduplicateContainer:(id)arg0 store:(id)arg1 ;
-(void)deduplicateKeeping:(id)arg0 deleting:(id)arg1 store:(id)arg2 ;


@end


#endif