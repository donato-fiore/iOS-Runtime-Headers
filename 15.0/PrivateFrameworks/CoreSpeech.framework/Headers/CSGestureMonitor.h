// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSGESTUREMONITOR_H
#define CSGESTUREMONITOR_H



#import "CSEventMonitor.h"

@interface CSGestureMonitor : CSEventMonitor

@property (nonatomic) NSUInteger dismissalTimestamp; // ivar: _dismissalTimestamp
@property (nonatomic) NSUInteger wakeGestureTimestamp; // ivar: _wakeGestureTimestamp


+(id)sharedInstance;
-(BOOL)isTriggerHandheld;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif