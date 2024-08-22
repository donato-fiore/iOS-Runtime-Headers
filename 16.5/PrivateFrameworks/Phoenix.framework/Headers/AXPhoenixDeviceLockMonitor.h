// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPHOENIXDEVICELOCKMONITOR_H
#define AXPHOENIXDEVICELOCKMONITOR_H



#import "AXPhoenixEventMonitor.h"

@interface AXPhoenixDeviceLockMonitor : AXPhoenixEventMonitor

@property (nonatomic, getter=isDeviceLocked) BOOL deviceLocked; // ivar: _deviceLocked


+(id)sharedInstance;
-(BOOL)_queryIsDeviceLocked;
-(id)init;
-(void)_notifyObserver:(id)arg0 isDeviceLocked:(BOOL)arg1 timestamp:(CGFloat)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)deviceLockStateChanged:(CGFloat)arg0 ;


@end


#endif