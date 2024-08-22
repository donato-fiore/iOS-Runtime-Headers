// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKCPUUSAGEMONITOR_H
#define _DKCPUUSAGEMONITOR_H

@class DKMonitor;
@protocol OS_dispatch_source;



@interface _DKCPUUsageMonitor : DKMonitor

@property (nonatomic) NSUInteger lastCPUUsageLevel; // ivar: _lastCPUUsageLevel
@property (nonatomic) NSUInteger lastIdleTick; // ivar: _lastIdleTick
@property (nonatomic) NSUInteger lastSysTick; // ivar: _lastSysTick
@property (nonatomic) NSUInteger lastUserTick; // ivar: _lastUserTick
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)entitlements;
+(id)eventStream;
-(BOOL)updateCPUUsagePercentage:(*NSUInteger)arg0 ;
-(NSUInteger)getCPUUsageLevelFromPercentage:(NSUInteger)arg0 ;
-(NSUInteger)getCurrentCPUUsageLevel;
-(id)loadState;
-(void)getCPUTicksForUser:(*NSUInteger)arg0 system:(*NSUInteger)arg1 idle:(*NSUInteger)arg2 ;
-(void)saveState;
-(void)setCurrentCPUUsageLevel:(NSUInteger)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif