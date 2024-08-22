// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DACHANGEHISTORYCONTACTSCLERK_H
#define _DACHANGEHISTORYCONTACTSCLERK_H

@class CNContactStore;


#import "DAChangeHistoryClerk.h"

@interface _DAChangeHistoryContactsClerk : DAChangeHistoryClerk

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)os_log;
-(id)identifiersOfAllRegisterdClients;
-(id)initWithContactStore:(id)arg0 ;
-(void)registerClientWithIdentifier:(id)arg0 forContainer:(id)arg1 ;
-(void)unregisterClientWithIdentifier:(id)arg0 forContainer:(id)arg1 ;


@end


#endif