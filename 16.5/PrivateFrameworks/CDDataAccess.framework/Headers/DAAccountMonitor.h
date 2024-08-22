// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAACCOUNTMONITOR_H
#define DAACCOUNTMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAAccountMonitor : NSObject

@property (retain, nonatomic) NSHashTable *accounts; // ivar: _accounts
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountsQueue; // ivar: _accountsQueue


+(id)sharedMonitor;
-(id)init;
-(id)monitoredAccounts;
-(void)monitorAccount:(id)arg0 ;
-(void)unmonitorAccount:(id)arg0 ;


@end


#endif