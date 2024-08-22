// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIROTARYGESTURERECOGNIZER_H
#define _UIROTARYGESTURERECOGNIZER_H

@class NSMutableArray, NSNumber, NSTimer;
@protocol _UIRotaryGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"

@interface _UIRotaryGestureRecognizer : UIGestureRecognizer {
    ? _rotaryGestureRecognizerFlags;
    BOOL _hasNotifiedDelegateBeganClassifyingMovement;
    CGFloat _startWheelPosition;
    CGFloat _currentWheelPosition;
    CGFloat _rotaryDeadBand;
    NSInteger _movementClassification;
    CGPoint _touchBeganPoint;
    CGPoint _digitizerLocation;
    NSMutableArray *_recentRotaryEvents;
    NSNumber *_delegateMustBeginFromRestValue;
    NSTimer *_restingTouchBeginTimer;
    NSTimer *_restingTouchRecoveryTimer;
}


@property (nonatomic) CGFloat accumulatedDistance; // ivar: _accumulatedDistance
@property (nonatomic) NSInteger beganMode; // ivar: _beganMode
@property (weak, nonatomic) NSObject<_UIRotaryGestureRecognizerDelegate> *delegate;
@property (nonatomic) CGFloat delta; // ivar: _delta
@property (nonatomic) BOOL isActivelyTouching; // ivar: _isActivelyTouching
@property (readonly, nonatomic) CGFloat position;
@property (nonatomic) NSInteger startRegion; // ivar: _startRegion
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(BOOL)_effectiveCanBeginFromRest;
-(BOOL)_effectiveMustBeginFromRest;
-(BOOL)_invalidateRestingTouchBeginTimerIfNecessary;
-(BOOL)_isPoint:(struct CGPoint )arg0 inRangeOfCenter:(CGFloat)arg1 ;
-(BOOL)_isTouchFarEnoughFromCenterToActivateRestingTouch:(struct CGPoint )arg0 ;
-(BOOL)_isTouchInRangeOfInitialTouchForRestingTouchActivation:(struct CGPoint )arg0 ;
-(CGFloat)_applyDeadbandToValue:(CGFloat)arg0 ;
-(CGFloat)_applyDistanceWeightToValue:(CGFloat)arg0 ;
-(CGFloat)_applyScaleFactor:(CGFloat)arg0 toValue:(CGFloat)arg1 fromAngle:(CGFloat)arg2 toAngle:(CGFloat)arg3 ;
-(CGFloat)_calculateAngleForTouchLocation:(struct CGPoint )arg0 ;
-(CGFloat)_calculateCurrentWheelPosition;
-(CGFloat)_calculateRadialDistance:(struct CGPoint )arg0 ;
-(CGFloat)_deadzoneRangeForCurrentTouchLocation;
-(CGFloat)_deltaForEventInfos:(id)arg0 ;
-(CGFloat)_movementClassificationAngleThresholdNumerator;
-(CGFloat)_movementClassificationDistance;
-(CGFloat)_restingTouchRangeForCurrentTouchLocation;
-(CGFloat)_velocityForEventInfos:(id)arg0 ;
-(NSInteger)_startRegionForWheelLocation:(CGFloat)arg0 ;
-(void)_activateRestingTouchRecoveryTimer;
-(void)_attemptToClassifyWithPreviousLocation:(struct CGPoint )arg0 newLocation:(struct CGPoint )arg1 ;
-(void)_attemptToStartFromRestingTouch:(id)arg0 ;
-(void)_endGestureFromRestingTouchRecovery:(id)arg0 ;
-(void)_enterRecoveryWindowOrEndGestureWithState:(NSInteger)arg0 ;
-(void)_invalidateRestingTouchRecoveryTimerIfNecessary;
-(void)_notifyDelegateBeganClassifyingMovementIfNecessary;
-(void)_notifyDelegateFailedClassifyingMovement;
-(void)_notifyDelegateRestTimerCancelledIfNecessary:(BOOL)arg0 ;
-(void)_notifyDelegateUpdatedClassifyingMovement;
-(void)_processEvent:(id)arg0 ;
-(void)_resetDeadband;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif