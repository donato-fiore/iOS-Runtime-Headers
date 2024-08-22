// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPANGESTURERECOGNIZER_H
#define UIPANGESTURERECOGNIZER_H

@class NSMutableArray, NSArray, NSString;
@protocol _UIScrollEventRespondable;


#import "UIGestureRecognizer.h"
#import "UIPanGestureVelocitySample.h"

@interface UIPanGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

 {
    CGPoint _firstSceneReferenceLocation;
    CGPoint _lastSceneReferenceLocation;
    CGFloat _lastTouchTime;
    NSMutableArray *_touches;
    NSUInteger _lastTouchCount;
    CGFloat _hysteresis;
    CGFloat _allowableSeparation;
    CGPoint _lastUnadjustedSceneReferenceLocation;
    CGFloat _allowableTouchTimeSeparation;
    BOOL _delegateImplementsShouldTryToBeginHorizontally;
    BOOL _delegateImplementsShouldTryToBeginVertically;
    BOOL _failsPastMaxTouches;
    BOOL _failsPastHysteresisWithoutMinTouches;
    BOOL _canPanHorizontally;
    BOOL _canPanVertically;
    BOOL _delegateAllowsPanHorizontally;
    BOOL _delegateAllowsPanVertically;
    BOOL _queriedDelegateAllowsPanHorizontally;
    BOOL _queriedDelegateAllowsPanVertically;
    BOOL _ignoresStationaryTouches;
    BOOL _multitouchTimerOn;
    BOOL _requiresImmediateMultipleTouches;
    BOOL _sawNonzeroStifledDeltaX;
    BOOL _sawNonzeroStifledDeltaY;
    NSMutableArray *_movingTouches;
    CGPoint _digitizerLocation;
    UIPanGestureVelocitySample *_velocitySample;
    UIPanGestureVelocitySample *_previousVelocitySample;
}


@property (copy, nonatomic, getter=_allowedScrollTypes, setter=_setAllowedScrollTypes:) NSArray *allowedScrollTypes;
@property (nonatomic) NSInteger allowedScrollTypesMask; // ivar: _allowedScrollTypesMask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL failsPastMaxTouches;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_iOSMacIgnoreScrollDirectionUserPreference, setter=_setiOSMacIgnoreScrollDirectionUserPreference:) BOOL iOSMacIgnoreScrollDirectionUserPreference; // ivar: _iOSMacIgnoreScrollDirectionUserPreference
@property (nonatomic, getter=_iOSMacScrollingEnabled, setter=_setiOSMacScrollingEnabled:) BOOL iOSMacScrollingEnabled; // ivar: _iOSMacScrollingEnabled
@property (nonatomic, getter=_iOSMacUseNonacceleratedDelta, setter=_setiOSMacUseNonacceleratedDelta:) BOOL iOSMacUseNonacceleratedDelta; // ivar: _iOSMacUseNonacceleratedDelta
@property (nonatomic) NSUInteger maximumNumberOfTouches; // ivar: _maximumNumberOfTouches
@property (nonatomic) NSUInteger minimumNumberOfTouches; // ivar: _minimumNumberOfTouches
@property (readonly) Class superclass;


+(BOOL)_shouldDefaultToTouches;
+(BOOL)supportsSecureCoding;
+(CGFloat)_defaultHysteresis;
+(void)_setPanGestureRecognizersEnabled:(BOOL)arg0 ;
-(BOOL)_canPanHorizontally;
-(BOOL)_canPanVertically;
-(BOOL)_failsPastHysteresisWithoutMinTouches;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_requiresImmediateMultipleTouches;
-(BOOL)_shouldBeginHorizontally:(BOOL)arg0 vertically:(BOOL)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg0 ;
-(BOOL)_touchesExceedAllowableSeparation;
-(BOOL)_updateMovingTouchesArraySavingOldArray:(*id)arg0 ;
-(BOOL)isIOSMacScrollingEnabled;
-(BOOL)shouldReceiveEvent:(id)arg0 ;
-(CGFloat)_allowableSeparation;
-(CGFloat)_allowableTouchTimeSeparation;
-(CGFloat)_hysteresis;
-(NSUInteger)numberOfTouches;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_adjustSceneReferenceLocation:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 toSceneReferenceCoordinatesFromView:(id)arg1 ;
-(struct CGPoint )_convertVelocitySample:(id)arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )locationOfTouch:(NSUInteger)arg0 inView:(id)arg1 ;
-(struct CGPoint )translationInView:(id)arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)_centroidMovedTo:(struct CGPoint )arg0 atTime:(CGFloat)arg1 affectingTranslation:(BOOL)arg2 ;
-(void)_handleEndedTouches:(id)arg0 withFinalStateAdjustments:(id)arg1 ;
-(void)_ignoreTouchForTouchIdentifier:(unsigned int)arg0 ;
-(void)_processScrollPhaseChanged:(id)arg0 ;
-(void)_removeHysteresisFromTranslation;
-(void)_resetGestureRecognizer;
-(void)_scrollingChangedWithEvent:(id)arg0 ;
-(void)_setAllowableSeparation:(CGFloat)arg0 ;
-(void)_setAllowableTouchTimeSeparation:(CGFloat)arg0 ;
-(void)_setCanPanHorizontally:(BOOL)arg0 ;
-(void)_setCanPanVertically:(BOOL)arg0 ;
-(void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg0 ;
-(void)_setHysteresis:(CGFloat)arg0 ;
-(void)_setRequiresImmediateMultipleTouches:(BOOL)arg0 ;
-(void)_touchesListChangedFrom:(id)arg0 to:(id)arg1 ;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(void)clearMultitouchTimer;
-(void)encodeWithCoder:(id)arg0 ;
-(void)multitouchExpired:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setTranslation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)startMultitouchTimer:(CGFloat)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif