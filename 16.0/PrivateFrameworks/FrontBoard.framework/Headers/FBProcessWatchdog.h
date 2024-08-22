// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBPROCESSWATCHDOG_H
#define FBPROCESSWATCHDOG_H

@class FBSProcessWatchdog, RBSProcessHandle;


#import "FBProcessCPUStatistics.h"
#import "FBProcessWatchdogEventContext.h"

@interface FBProcessWatchdog : FBSProcessWatchdog {
    RBSProcessHandle *_handle;
}


@property (readonly, retain, nonatomic) FBProcessCPUStatistics *cpuStatistics; // ivar: _cpuStatistics
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly, retain, nonatomic) FBProcessWatchdogEventContext *eventContext; // ivar: _eventContext


-(id)_policyDesc;
-(id)initWithProcess:(id)arg0 context:(id)arg1 policy:(id)arg2 ;
-(void)activate;


@end


#endif