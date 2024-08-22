// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSEVENTRECOGNIZER_H
#define _UIFOCUSEVENTRECOGNIZER_H

@class CADisplayLink, NSArray, NSSet, NSTimer, CARInputDeviceTouchpad, NSString;
@protocol UIGestureRecognizerDelegate, _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusFastScrollingRecognizerDelegate, _UIFocusEventRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "_UIFocusEnginePanGestureRecognizer.h"
#import "UITapGestureRecognizer.h"
#import "_UIFocusPressGestureRecognizer.h"
#import "_UIFocusSelectObserverGestureRecognizer.h"
#import "_UIFocusLinearMovementDebugGestureRecognizer.h"
#import "_UIFocusLinearMovementDebugView.h"
#import "_UIFocusFastScrollingRecognizer.h"
#import "_UIRepeatingPressGestureRecognizer.h"
#import "_UIFocusEngineJoystickGestureRecognizer.h"
#import "_UIFocusMovementInfo.h"
#import "UIScrollView.h"
#import "_UIFocusEffectsController.h"
#import "UIMoveEvent.h"
#import "UIView.h"

@interface _UIFocusEventRecognizer : NSObject <UIGestureRecognizerDelegate, _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusFastScrollingRecognizerDelegate>

 {
    _UIFocusEnginePanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _UIFocusPressGestureRecognizer *_selectGestureRecognizer;
    _UIFocusSelectObserverGestureRecognizer *_selectObserverGestureRecognizer;
    _UIFocusLinearMovementDebugGestureRecognizer *_linearDebugGestureRecognizer;
    _UIFocusLinearMovementDebugView *_linearDebugView;
    CGPoint _touchBeganPoint;
    CGPoint _lastKnownTouchPoint;
    CGPoint _previousPoints;
    int _numFrames;
    CGVector _progressAccumulator;
    CGVector _unlockedAccumulator;
    CGFloat _lastButtonPressTime;
    NSUInteger _failedContinuousMovementHeading;
    _UIFocusFastScrollingRecognizer *_fastScrollingRecognizer;
    CGPoint _firstMomentumTouchPoint;
    CGPoint _lastMomentumTouchPoint;
    CGPoint _momentumVelocity;
    CGFloat _momentumFriction;
    NSUInteger _focusUpdateCountSinceLastContinuousMovementBegan;
    CADisplayLink *_momentumDisplayLink;
    NSArray *_arrowButtonGestures;
    _UIRepeatingPressGestureRecognizer *_tabulatorGesture;
    NSSet *_gesturesForFailureRequirements;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGestureRecognizer;
    NSTimer *_joystickModeExitTimer;
    NSTimer *_joystickModeRepeatTimer;
    CGFloat _previousJoystickFocusMovementTime;
    CGFloat _previousJoystickRegionEntryTime;
    NSUInteger _joystickRepeatingHeading;
    CADisplayLink *_joystickFocusDirectionDisplayLink;
    _UIFocusMovementInfo *_previousJoystickFocusMovementInfo;
    NSInteger _joystickRepeatCount;
    UIScrollView *_lastScrolledScroll;
    CGFloat _lastEdgeScrollEdgeValue;
    NSUInteger _inputType;
    CARInputDeviceTouchpad *_currentCarTouchpad;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIFocusEventRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSSet *gesturesForFailureRequirements;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keyCommands; // ivar: _keyCommands
@property (readonly, nonatomic, getter=_motionEffectsController) _UIFocusEffectsController *motionEffectsController; // ivar: _motionEffectsController
@property (retain, nonatomic, getter=_moveEvent, setter=_setMoveEvent:) UIMoveEvent *moveEvent; // ivar: _moveEvent
@property (readonly, weak, nonatomic) UIView *owningView; // ivar: _owningView
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsFastScrolling; // ivar: _supportsFastScrolling


+(BOOL)_canSupportFastScrolling;
-(BOOL)_attemptPanFocusMovementWithHeading:(NSUInteger)arg0 request:(id)arg1 acceleratedVelocity:(struct CGPoint )arg2 studyLogData:(id)arg3 ;
-(BOOL)_attemptToRecognizeContinuousMovementRequest:(id)arg0 ;
-(BOOL)_buttonMaskTimeHasExpired;
-(BOOL)_didRecognizeFocusMovementRequest:(id)arg0 ;
-(BOOL)_hideLinearDebugOverlayIfNecessary:(BOOL)arg0 ;
-(BOOL)_joystickAttemptFocusMovementWithRequest:(id)arg0 ;
-(BOOL)_joystickFocusMovement:(id)arg0 shouldBeConsideredEqualToFocusMovement:(id)arg1 ;
-(BOOL)_moveInDirection:(NSUInteger)arg0 groupFilter:(NSInteger)arg1 ;
-(BOOL)_moveInDirection:(NSUInteger)arg0 groupFilter:(NSInteger)arg1 withEvaluator:(id)arg2 ;
-(BOOL)_moveInDirection:(NSUInteger)arg0 groupFilter:(NSInteger)arg1 withSearchInfo:(id)arg2 ;
-(BOOL)_moveWithEvent:(id)arg0 ;
-(BOOL)_shouldAcceptInputType:(NSUInteger)arg0 ;
-(BOOL)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
-(BOOL)focusEnginePanGestureRecognizerShouldRecognizeImmediately:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_joystickRepeatDurationForTimeInMovementZone:(CGFloat)arg0 ;
-(NSUInteger)_calculateDirectionalHeadingForAccumulator:(struct CGVector )arg0 studyLogData:(id)arg1 ;
-(NSUInteger)_headingForJoystickPosition:(struct CGPoint )arg0 usingMinimumRadius:(CGFloat)arg1 ;
-(NSUInteger)_momentumFocusHeadingForAccumulator:(struct CGVector )arg0 ;
-(id)_createMovementInfoForHeading:(NSUInteger)arg0 groupFilter:(NSInteger)arg1 acceleratedVelocity:(struct CGPoint )arg2 ;
-(id)_createPanMovementRequestWithFocusSystem:(id)arg0 ;
-(id)_createStudyLogDataForPanNormalizedPoint:(struct CGPoint )arg0 reportedVelocity:(struct CGPoint )arg1 ;
-(id)_focusMovementForJoystickPosition:(struct CGPoint )arg0 usingMinimumRadius:(CGFloat)arg1 focusMovementStyle:(NSInteger)arg2 ;
-(id)_focusMovementSystem;
-(id)_focusSystemSceneComponent;
-(id)_globalCoordinateSpace;
-(id)_momentumMovementRequestWithHeading:(NSUInteger)arg0 ;
-(id)_uiktest_panGestureRecognizer;
-(id)currentFocusBehavior;
-(id)init;
-(id)initWithOwningView:(id)arg0 ;
-(int)_touchRegionForDigitizerLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )_applyAxisLockingForNormalizedPoint:(struct CGPoint )arg0 toDelta:(struct CGPoint )arg1 ;
-(struct CGPoint )_applyButtonMaskTimeToValue:(struct CGPoint )arg0 ;
-(struct CGPoint )_applyHorizontalFlipForFocusItemInfo:(id)arg0 toDelta:(struct CGPoint )arg1 ;
-(struct CGPoint )_applyPanDeadbandToValue:(struct CGPoint )arg0 startPoint:(struct CGPoint )arg1 currentPoint:(struct CGPoint )arg2 ;
-(struct CGPoint )_calculateDeltaForNormalizedPoint:(struct CGPoint )arg0 studyLogData:(id)arg1 ;
-(struct CGSize )_momentumReferenceSize;
-(struct CGSize )_touchSensitivityForItem:(id)arg0 ;
-(struct CGVector )_accelerationFactorForCurrentVelocity:(struct CGPoint )arg0 ;
-(struct CGVector )_joystickVelocityForHeading:(NSUInteger)arg0 ;
-(void)_addGestureRecognizers;
-(void)_beginMomentumImmediatelyWithVelocity:(struct CGPoint )arg0 friction:(CGFloat)arg1 ;
-(void)_cleanupPanMomentumWithAccumulator:(struct CGVector )arg0 movementSuccess:(BOOL)arg1 ;
-(void)_continueTouchWithMomentum;
-(void)_continuousMovementFailedWithPrimaryHeading:(NSUInteger)arg0 ;
-(void)_continuousMovementSucceededWithDirectionalHeading:(NSUInteger)arg0 ;
-(void)_createFastScrollingRecognizerIfNeeded;
-(void)_exitJoystickModeForReal:(id)arg0 ;
-(void)_fastScrollingBeganInScrollView:(id)arg0 ;
-(void)_fastScrollingEnded;
-(void)_focusBehaviorDidChange:(id)arg0 ;
-(void)_focusSystemEnabledStateDidChange:(id)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleArrowButtonGesture:(id)arg0 ;
-(void)_handleJoystickGesture:(id)arg0 ;
-(void)_handleJoystickRepeatMode:(id)arg0 ;
-(void)_handleJoystickTiltMode:(id)arg0 ;
-(void)_handleLinearDebugOverlayGesture:(id)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_handleSelectGesture:(id)arg0 ;
-(void)_handleSelectObserverGesture:(id)arg0 ;
-(void)_handleTabulatorGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_joystickDisplayLinkHeartbeat:(id)arg0 ;
-(void)_joystickGestureBegan:(id)arg0 ;
-(void)_joystickGestureEnded:(id)arg0 ;
-(void)_joystickGestureUpdated:(id)arg0 ;
-(void)_joystickPerformRepeat:(id)arg0 ;
-(void)_momentumHeartbeat:(id)arg0 ;
-(void)_panGestureCancelled:(id)arg0 ;
-(void)_panGestureEnd:(id)arg0 ;
-(void)_panGestureStart:(id)arg0 ;
-(void)_recordMomentumForPoint:(struct CGPoint )arg0 reportedVelocity:(struct CGPoint )arg1 ;
-(void)_removeAllGestureRecognizers;
-(void)_removeGestureRecognizersOnlyIfUnsupported:(BOOL)arg0 ;
-(void)_resetContinuousMovementState;
-(void)_resetFailedMovementHeading;
-(void)_resetJoystick;
-(void)_resetMomentum;
-(void)_resetMotionEffects;
-(void)_resetProgressAccumulator;
-(void)_resetProgressAccumulatorWithHeading:(NSUInteger)arg0 ;
-(void)_sendGestureBeginNotification;
-(void)_sendMomentumEndNotificationsAndAnimateRollback:(BOOL)arg0 ;
-(void)_showLinearDebugOverlay:(BOOL)arg0 ;
-(void)_stopMomentumAndPerformRollback;
-(void)_uiktest_handlePanGesture:(id)arg0 ;
-(void)_uiktest_setPanGestureRecognizer:(id)arg0 ;
-(void)_updateAccumulatorsWithScaledDelta:(struct CGPoint )arg0 unlockedDelta:(struct CGPoint )arg1 studyLogData:(id)arg2 ;
-(void)_updateMotionEffectsControllerWithProgressAccumulator:(struct CGVector )arg0 unlockedAccumulator:(struct CGVector )arg1 ;
-(void)_updatePanLocation:(struct CGPoint )arg0 reportedVelocity:(struct CGPoint )arg1 ;
-(void)dealloc;
-(void)fastScrollingRecognizer:(id)arg0 didRecognizeFastScrollingRequest:(id)arg1 ;
-(void)reset;


@end


#endif