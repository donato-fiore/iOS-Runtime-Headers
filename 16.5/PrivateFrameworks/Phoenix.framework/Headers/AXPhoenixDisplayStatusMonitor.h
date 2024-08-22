// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPHOENIXDISPLAYSTATUSMONITOR_H
#define AXPHOENIXDISPLAYSTATUSMONITOR_H

@protocol OS_dispatch_queue;


#import "AXPhoenixEventMonitor.h"

@interface AXPhoenixDisplayStatusMonitor : AXPhoenixEventMonitor

@property (nonatomic, getter=isDisplayOn) BOOL displayOn; // ivar: _displayOn
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(BOOL)_queryIsDisplayOn;
-(id)init;
-(void)_displayStateChanged:(CGFloat)arg0 ;
-(void)_notifyObserver:(id)arg0 isDisplayOn:(BOOL)arg1 timestamp:(CGFloat)arg2 ;
-(void)_registerForSpringboardNotificationsWithQueue:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)_unregisterForSpringboardNotifications;


@end


#endif