// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSMOTIONTRACKER_H
#define AXSSMOTIONTRACKER_H

@class NSXPCConnection, NSValue;
@protocol AXSSMotionTrackingDaemonDelegateProtocol, AXSSMotionTrackingDaemonProtocol, AXSSMotionTrackerDelegate;

#import <Foundation/Foundation.h>

#import "AXSSRateLimitingLogger.h"
#import "AXSSMotionTrackingExpressionConfiguration.h"
#import "AXSSMotionTrackingInputConfiguration.h"
#import "AXSSMotionTrackingState.h"

@interface AXSSMotionTracker : NSObject <AXSSMotionTrackingDaemonDelegateProtocol>



@property (nonatomic) BOOL _hasBeenStarted; // ivar: __hasBeenStarted
@property (retain, nonatomic) AXSSRateLimitingLogger *_loggingRateLimiter; // ivar: __loggingRateLimiter
@property (readonly, nonatomic) NSObject<AXSSMotionTrackingDaemonProtocol> *_motionTrackingDaemon;
@property (retain, nonatomic) NSXPCConnection *_motionTrackingDaemonConnection; // ivar: __motionTrackingDaemonConnection
@property (nonatomic) BOOL _tracking; // ivar: __tracking
@property (nonatomic) BOOL debugOverlayEnabled; // ivar: _debugOverlayEnabled
@property (weak, nonatomic) NSObject<AXSSMotionTrackerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) AXSSMotionTrackingExpressionConfiguration *expressionConfiguration; // ivar: _expressionConfiguration
@property (copy, nonatomic) AXSSMotionTrackingInputConfiguration *inputConfiguration; // ivar: _inputConfiguration
@property (nonatomic) CGFloat joystickModeMovementThreshold; // ivar: _joystickModeMovementThreshold
@property (retain, nonatomic) NSValue *lookAtPoint;
@property (nonatomic) NSUInteger motionTrackingMode; // ivar: _motionTrackingMode
@property (nonatomic) CGFloat sensitivity; // ivar: _sensitivity
@property (copy, nonatomic) AXSSMotionTrackingState *state; // ivar: _state
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;


+(id)supportedExpressionSensitivitiesAscending;
+(id)supportedExpressions;
-(id)init;
-(void)_changeState:(id)arg0 ;
-(void)_updateState:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)motionTrackingDaemonUpdatedState:(id)arg0 ;
-(void)recalibrateFace;
-(void)start;
-(void)stop;


@end


#endif