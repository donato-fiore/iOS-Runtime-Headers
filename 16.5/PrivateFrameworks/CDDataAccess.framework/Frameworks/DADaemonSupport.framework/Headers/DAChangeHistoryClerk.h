// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACHANGEHISTORYCLERK_H
#define DACHANGEHISTORYCLERK_H


#import <Foundation/Foundation.h>


@interface DAChangeHistoryClerk : NSObject



+(id)clerkWithAddressBook:(*void)arg0 ;
+(id)clerkWithContactStore:(id)arg0 ;
-(id)identifiersOfAllRegisterdClients;
-(void)registerClientWithIdentifier:(id)arg0 forContainer:(id)arg1 ;
-(void)unregisterClientWithIdentifier:(id)arg0 forContainer:(id)arg1 ;


@end


#endif