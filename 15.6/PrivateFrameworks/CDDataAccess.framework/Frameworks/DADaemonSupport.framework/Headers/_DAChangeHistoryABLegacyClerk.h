// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DACHANGEHISTORYABLEGACYCLERK_H
#define _DACHANGEHISTORYABLEGACYCLERK_H



#import "DAChangeHistoryClerk.h"

@interface _DAChangeHistoryABLegacyClerk : DAChangeHistoryClerk

@property (readonly, nonatomic) *void addressBook; // ivar: _addressBook


-(id)identifiersOfAllRegisterdClients;
-(id)initWithAddressBook:(*void)arg0 ;
-(void)dealloc;
-(void)registerClientWithIdentifier:(id)arg0 forContainer:(id)arg1 ;
-(void)unregisterClientWithIdentifier:(id)arg0 forContainer:(id)arg1 ;


@end


#endif