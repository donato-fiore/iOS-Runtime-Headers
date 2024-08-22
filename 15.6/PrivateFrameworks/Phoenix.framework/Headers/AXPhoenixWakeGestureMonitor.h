// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPHOENIXWAKEGESTUREMONITOR_H
#define AXPHOENIXWAKEGESTUREMONITOR_H

@class NSString, CMWakeGestureManager;
@protocol CMWakeGestureDelegate;


#import "AXPhoenixEventMonitor.h"

@interface AXPhoenixWakeGestureMonitor : AXPhoenixEventMonitor <CMWakeGestureDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dismissalTimestamp; // ivar: _dismissalTimestamp
@property (retain, nonatomic) CMWakeGestureManager *gestureManager; // ivar: _gestureManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat wakeGestureTimestamp; // ivar: _wakeGestureTimestamp


+(id)sharedInstance;
-(BOOL)isDeviceHandheld;
-(id)init;
-(void)_didReceiveSleepGesture;
-(void)_didReceiveWakeGesture;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;


@end


#endif