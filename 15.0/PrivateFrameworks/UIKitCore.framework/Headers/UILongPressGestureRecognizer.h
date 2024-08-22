// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UILONGPRESSGESTURERECOGNIZER_H
#define UILONGPRESSGESTURERECOGNIZER_H

@class NSMutableSet, NSObservation, NSString, NSArray;
@protocol UITapRecognizerDelegate;


#import "UIGestureRecognizer.h"
#import "UIHeldAction.h"
#import "UIDelayedAction.h"
#import "UITapRecognizer.h"
#import "UILongPressGestureVelocitySample.h"

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>

 {
    NSMutableSet *_activeTouches;
    CGPoint _startPointScreen;
    CGPoint _lastCentroidScreen;
    UIHeldAction *_enoughTimeElapsed;
    UIDelayedAction *_tooMuchTimeElapsed;
    UIDelayedAction *_multitouchTimer;
    UITapRecognizer *_imp;
    UILongPressGestureVelocitySample *_velocitySample;
    UILongPressGestureVelocitySample *_previousVelocitySample;
    NSObservation *_touchForceObservation;
    NSInteger _impulseObservations;
    CGFloat _currentImpulse;
    CGFloat _lastForce;
    CGFloat _lastForceTimestamp;
    BOOL _gotTouchEnd;
    BOOL _gotTooMany;
    BOOL _gotEnoughTaps;
    BOOL _cancelPastAllowableMovement;
    BOOL _allowsDynamicTouchesList;
    BOOL _requiresQuietImpulseForCurrentTouchSequence;
}


@property (nonatomic, setter=_setAllowableElapsedTimeForAllRequiredTouches:) CGFloat _allowableElapsedTimeForAllRequiredTouches; // ivar: _allowableElapsedTimeForAllRequiredTouches
@property (nonatomic, setter=_setButtonType:) NSInteger _buttonType; // ivar: _buttonType
@property (readonly, nonatomic) CGPoint _centroidScreen;
@property (nonatomic) BOOL _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers; // ivar: __prefersToBeExclusiveWithCompetingLongPressGestureRecognizers
@property (nonatomic, setter=_setRequiresQuietImpulse:) BOOL _requiresQuietImpulse; // ivar: _requiresQuietImpulse
@property (nonatomic, setter=_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:) BOOL _shouldAlwaysEnableMultitouchTimerAtTouchesBegin; // ivar: __shouldAlwaysEnableMultitouchTimerAtTouchesBegin
@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (nonatomic) BOOL cancelPastAllowableMovement;
@property (readonly, nonatomic) CGPoint centroid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _minimumPressDuration
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint lastSceneReferenceLocation; // ivar: _lastSceneReferenceLocation
@property (nonatomic) CGFloat lastTouchTime; // ivar: _lastTouchTime
@property (nonatomic) CGPoint lastUnadjustedSceneReferenceLocation; // ivar: _lastUnadjustedSceneReferenceLocation
@property (nonatomic) CGFloat minimumPressDuration;
@property (nonatomic) NSUInteger numberOfTapsRequired;
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly, nonatomic) CGPoint startPoint;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *touches; // ivar: _touches


+(BOOL)supportsSecureCoding;
-(BOOL)_allowsDynamicTouchesList;
-(BOOL)_impulseQuietEnough;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_shouldFailInResponseToPresses:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg0 ;
-(BOOL)activeTouchesExceedAllowableSeparation;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg0 ;
-(CGFloat)_allowableSeparation;
-(CGFloat)_allowableTouchTimeSeparation;
-(CGFloat)_touchSloppinessFactor;
-(NSInteger)_finalStateForRecognition;
-(NSInteger)buttonMaskRequired;
-(NSUInteger)numberOfTouches;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_adjustSceneReferenceLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )_centroidInView:(id)arg0 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toSceneReferenceCoordinatesFromView:(id)arg1 ;
-(struct CGPoint )_convertVelocitySample:(id)arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_locationOfTouches:(id)arg0 ;
-(struct CGPoint )_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )_startPointInView:(id)arg0 ;
-(struct CGPoint )_translationInView:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )locationOfTouch:(NSUInteger)arg0 inView:(id)arg1 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(struct UIOffset )_offsetInViewFromSceneReferenceLocation:(struct CGPoint )arg0 toSceneReferenceLocation:(struct CGPoint )arg1 ;
-(void)_appendSubclassDescription:(id)arg0 ;
-(void)_centroidMovedTo:(struct CGPoint )arg0 atTime:(CGFloat)arg1 physicalTouch:(id)arg2 ;
-(void)_changeTouchesListTo:(id)arg0 ;
-(void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg0 ;
-(void)_interactionsEndedWithValidTouches:(BOOL)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_resetImpulseQuietness;
-(void)_resetVelocitySamples;
-(void)_setAllowableSeparation:(CGFloat)arg0 ;
-(void)_setAllowableTouchTimeSeparation:(CGFloat)arg0 ;
-(void)_setAllowsDynamicTouchesList:(BOOL)arg0 ;
-(void)_setTranslation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)_startMultitouchTimer;
-(void)_startTapFinishedTimer;
-(void)clearTimer;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enoughTimeElapsed:(id)arg0 ;
-(void)invalidate;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setButtonMaskRequired:(NSInteger)arg0 ;
-(void)setView:(id)arg0 ;
-(void)startTimer;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg0 ;
-(void)tapRecognizerRecognizedTap:(id)arg0 ;
-(void)tooMuchElapsed:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif