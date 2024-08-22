// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSHOSTPOWERSTATEMONITOR_H
#define CSHOSTPOWERSTATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSHostPowerStateMonitor : CSEventMonitor



+(id)sharedInstance;
-(NSInteger)currentDarwinHostState;
-(NSInteger)currentPowerState;
-(NSInteger)currentRawPowerState;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif