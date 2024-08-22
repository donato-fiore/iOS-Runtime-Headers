// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPHOENIXMITIGATOR_H
#define AXPHOENIXMITIGATOR_H

@class NSMutableArray, AXEventProcessor, NSString;
@protocol AXPhoenixEventMonitorObserver, AXPhoenixDeviceLockMonitorObserver, AXPhoenixWakeGestureMonitorObserver, AXPhoenixDisplayStatusMonitorObserver, AXPhoenixMitigatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXPhoenixMitigatorConfiguration.h"

@interface AXPhoenixMitigator : NSObject <AXPhoenixEventMonitorObserver, AXPhoenixDeviceLockMonitorObserver, AXPhoenixWakeGestureMonitorObserver, AXPhoenixDisplayStatusMonitorObserver>

 {
    id<AXPhoenixMitigatorDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_monitors;
    AXPhoenixMitigatorConfiguration *_configuration;
    BOOL _isRunning;
    AXEventProcessor *_eventProcessor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceLocked; // ivar: _deviceLocked
@property (nonatomic) BOOL displayOn; // ivar: _displayOn
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHandHeld; // ivar: _isHandHeld
@property (nonatomic) CGFloat lastDeviceLockedTimestamp; // ivar: _lastDeviceLockedTimestamp
@property (nonatomic) CGFloat lastDeviceUnlockedTimestamp; // ivar: _lastDeviceUnlockedTimestamp
@property (nonatomic) CGFloat lastDismissalTimestamp; // ivar: _lastDismissalTimestamp
@property (nonatomic) CGFloat lastDisplayOffTimestamp; // ivar: _lastDisplayOffTimestamp
@property (nonatomic) CGFloat lastDisplayOnTimestamp; // ivar: _lastDisplayOnTimestamp
@property (nonatomic) CGFloat lastTouchInteractionGainTimestamp; // ivar: _lastTouchInteractionGainTimestamp
@property (nonatomic) CGFloat lastTouchInteractionLossTimestamp; // ivar: _lastTouchInteractionLossTimestamp
@property (nonatomic) CGFloat lastWakeGestureTimestamp; // ivar: _lastWakeGestureTimestamp
@property (nonatomic) int policyOption; // ivar: _policyOption
@property (readonly) Class superclass;
@property (nonatomic) BOOL touchOn; // ivar: _touchOn


-(BOOL)isRunning;
-(id)_contextInfo:(BOOL)arg0 ;
-(id)configuration;
-(id)initWithDelegate:(id)arg0 configuration:(id)arg1 ;
-(void)_shouldTriggerEventWithTapData:(struct ? )arg0 isDoubleTap:(BOOL)arg1 completion:(id)arg2 ;
-(void)_subscribeEventMonitor:(id)arg0 ;
-(void)_subscribeEventMonitors;
-(void)_unsubscribeEventMonitors;
-(void)dealloc;
-(void)gestureMonitorDidReceiveSleepGesture:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)gestureMonitorDidReceiveWakeGesture:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)phoenixDeviceLockMonitor:(id)arg0 didReceiveDeviceLockStateChanged:(BOOL)arg1 timestamp:(CGFloat)arg2 ;
-(void)phoenixDisplayStatusMonitor:(id)arg0 didReceiveDisplayStateChanged:(BOOL)arg1 timestamp:(CGFloat)arg2 ;
-(void)phoenixEventMonitorDidReceiveEvent:(id)arg0 ;
-(void)shouldTriggerDoubleTapEventWithTapData:(struct ? )arg0 completion:(id)arg1 ;
-(void)shouldTriggerTripleTapEventWithTapData:(struct ? )arg0 completion:(id)arg1 ;
-(void)startWithCompletion:(id)arg0 ;
-(void)stop;


@end


#endif