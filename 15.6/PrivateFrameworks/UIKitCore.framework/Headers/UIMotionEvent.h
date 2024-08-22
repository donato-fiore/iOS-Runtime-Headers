// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMOTIONEVENT_H
#define UIMOTIONEVENT_H

@class BKSAccelerometer, NSTimer;


#import "UIEvent.h"

@interface UIMotionEvent : UIEvent {
    BKSAccelerometer *_motionAccelerometer;
    NSInteger _subtype;
    NSInteger _stateMachineState;
    CGFloat _shakeStartTime;
    CGFloat _lastMovementTime;
    CGFloat _highLevelTime;
    CGFloat _lowEndTimeout;
    NSTimer *_idleTimer;
    BOOL _sentMotionBegan;
    float _lowPassState;
    NSUInteger _lowPassStateIndex;
    NSUInteger _highPassStateIndex;
    float _highPassState;
    int notifyToken;
}


@property (nonatomic) int shakeState; // ivar: _shakeState


-(BOOL)_detectWhenNotActive;
-(BOOL)_isDetectingMotionEvents;
-(NSInteger)_feedStateMachine:(float)arg0 currentState:(NSInteger)arg1 timestamp:(CGFloat)arg2 ;
-(NSInteger)subtype;
-(NSInteger)type;
-(float)_determineShakeLevelX:(float)arg0 y:(float)arg1 z:(float)arg2 currentState:(NSInteger)arg3 ;
-(float)_highPass:(float)arg0 ;
-(float)_lowPass:(float)arg0 ;
-(id)_init;
-(id)_windows;
-(id)description;
-(void)_accelerometerDidDetectMovementWithTimestamp:(CGFloat)arg0 ;
-(void)_enablePeakDetectionForScreenBlanked:(id)arg0 ;
-(void)_enablePeakDetectionIfNecessary;
-(void)_idleTimerFired;
-(void)_resetLowPassState;
-(void)_sendEventToResponder:(id)arg0 ;
-(void)_setSubtype:(NSInteger)arg0 ;
-(void)_updateAccelerometerEnabled;
-(void)_willResume;
-(void)_willSuspend;
-(void)accelerometer:(id)arg0 didAccelerateWithTimeStamp:(CGFloat)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5 ;
-(void)dealloc;


@end


#endif