// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWPROPERTYANIMATOR_H
#define UIVIEWPROPERTYANIMATOR_H

@class NSString, CAMediaTimingFunction, NSMutableDictionary, NSArray, NSMutableArray, NSUUID;
@protocol _UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying, UITimingCurveProvider;

#import <Foundation/Foundation.h>

#import "UIViewPropertyAnimatorTrackingState.h"
#import "UIViewPropertyAnimator.h"
#import "_UICompoundObjectMap.h"
#import "_UIAppCACommitFuture.h"
#import "UIViewAnimationState.h"

@interface UIViewPropertyAnimator : NSObject <_UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying>

 {
    UIViewPropertyAnimatorTrackingState *_trackingState;
    NSString *_trackingDescription;
    CGFloat _fractionComplete;
    CGFloat _fractionCompleteWhenContinued;
    CGFloat _drag;
    BOOL _pausedAsSpring;
    BOOL _optionsAreExplicit;
    BOOL _addedPacingAnimation;
    BOOL _hasFinalized;
    CGFloat _baseDuration;
    CGFloat _delay;
    UIViewPropertyAnimator *_outerAnimator;
    NSString *_pacingAnimationKey;
    CAMediaTimingFunction *_timingFunctionPriorToPause;
    CAMediaTimingFunction *_timingFunctionWhenPaused;
    id<UITimingCurveProvider> *_timingProviderWhenContinued;
    _UICompoundObjectMap *_originalToValueMap;
    _UICompoundObjectMap *_originalFromValueMap;
    _UICompoundObjectMap *_additiveOffsetsForAnimationKeysMap;
    _UICompoundObjectMap *_continuedWithSpringForAnimationKeyMap;
    _UIAppCACommitFuture *_caContinuationCommitFuture;
}


@property (retain, nonatomic, getter=_animationDescriptionMap, setter=setAnimationDescriptionMap:) NSMutableDictionary *animationDescriptionMap; // ivar: _animationDescriptionMap
@property (readonly, nonatomic) NSArray *animationDescriptions;
@property (nonatomic, getter=_animationState, setter=_setAnimationState:) NSInteger animationState; // ivar: _animationState
@property (retain, nonatomic, getter=_animations, setter=_setAnimations:) NSMutableArray *animations; // ivar: _animations
@property (retain, nonatomic, getter=_completions, setter=_setCompletions:) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic, getter=_finishingPosition, setter=_setFinishingPosition:) NSInteger finishingPosition; // ivar: _finishingPosition
@property (nonatomic) CGFloat fractionComplete;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat internalDuration; // ivar: _internalDuration
@property (nonatomic, getter=isInterruptible) BOOL interruptible; // ivar: _interruptible
@property (nonatomic, getter=isIntrospectable) BOOL introspectable; // ivar: _introspectable
@property (nonatomic, getter=isManualHitTestingEnabled) BOOL manualHitTestingEnabled; // ivar: _manualHitTestingEnabled
@property (nonatomic, getter=_options, setter=_setOptions:) NSUInteger options; // ivar: _options
@property (nonatomic) CGFloat pacedFractionComplete;
@property (nonatomic, getter=_isPausedOnCompletion, setter=_setPausedOnCompletion:) BOOL pausedOnCompletion; // ivar: _pausedOnCompletion
@property (nonatomic) BOOL pausesOnCompletion; // ivar: _pausesOnCompletion
@property (nonatomic, getter=isReversed) BOOL reversed; // ivar: _reversed
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (nonatomic) BOOL scrubsLinearly; // ivar: _scrubsLinearly
@property (nonatomic, setter=_setShouldLayoutSubviews:) BOOL shouldLayoutSubviews; // ivar: _shouldLayoutSubviews
@property (nonatomic, getter=_isStarting, setter=_setStarting:) BOOL starting; // ivar: _starting
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=_setTimingParameters:) NSObject<UITimingCurveProvider> *timingParameters; // ivar: _timingParameters
@property (retain, nonatomic, getter=_trackingIdentifier, setter=_setTrackingIdentifier:) NSUUID *trackingIdentifier; // ivar: _trackingIdentifier
@property (nonatomic) CGFloat unitDuration;
@property (readonly, nonatomic) BOOL useCoreAnimation; // ivar: _useCoreAnimation
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (retain, nonatomic, getter=_viewAnimationState, setter=_setViewAnimationState:) UIViewAnimationState *viewAnimationState; // ivar: _viewAnimationState


+(BOOL)_canEnableTrackingAnimationsWithAnimators;
+(BOOL)_containsAnimatorForTrackedAnimationsUUID:(id)arg0 ;
+(BOOL)_trackedAnimationsOptimizationsEnabled;
+(BOOL)_trackedAnimationsScrubLinearly;
+(BOOL)_trackedAnimationsStartPaused;
+(BOOL)_trackedAnimationsUserInteractionEnabled;
+(BOOL)_trackingAnimationsCurrentlyEnabled;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(CGFloat)_delayForAnimation:(id)arg0 forLayer:(id)arg1 ;
+(id)_animationBlockForTrackingAnimation:(SEL)arg0 animator:(id)arg1 trackingSetup:(id)arg2 ;
+(id)_animatorForTrackedAnimationsUUID:(id)arg0 ;
+(id)_animatorWithTimingAttributesMatchingAnimation:(id)arg0 forLayer:(id)arg1 wasReused:(*BOOL)arg2 ;
+(id)_animatorsForTrackedAnimationsUUID:(id)arg0 ;
+(id)_currentPropertyAnimator;
+(id)_currentTrackedAnimationsState;
+(id)_currentTrackedAnimationsUUID;
+(id)_getPropertyAnimationForState:(id)arg0 ;
+(id)_originalFromValueForKey:(id)arg0 inLayer:(id)arg1 forAnimatorWithTrackingIdentifier:(id)arg2 ;
+(id)_performWhileTrackingAnimations:(id)arg0 ;
+(id)_propertyAnimatorWithUUID:(id)arg0 ;
+(id)_startTrackingAnimations;
+(id)_trackAdditiveAnimationWithAnimator:(id)arg0 nonAdditiveAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 forLayer:(id)arg4 ;
+(id)_trackAnimationWithAnimator:(id)arg0 forLayer:(id)arg1 forAnimationKey:(id)arg2 trackingSetup:(id)arg3 ;
+(id)_trackNonAdditiveAnimationWithAnimator:(id)arg0 forLayer:(id)arg1 forKey:(id)arg2 ;
+(id)observedsOfAnimatorWithTrackingId:(id)arg0 ;
// +(id)runningPropertyAnimatorWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 options:(NSUInteger)arg2 animations:(id)arg3 completion:(unk)arg4  ;
+(void)_finishTrackingAnimations;
+(void)_removeReferenceToActivePropertyAnimator:(id)arg0 ;
+(void)_removeReferenceToPropertyAnimatorWithTrackingIdentifier:(id)arg0 ;
+(void)_removeTrackingAnimator:(id)arg0 forUUID:(id)arg1 andDescription:(id)arg2 ;
+(void)_saveReferenceToActivePropertyAnimator:(id)arg0 ;
+(void)_saveReferenceToPropertyAnimator:(id)arg0 ;
+(void)_saveTrackingAnimator:(id)arg0 forUUID:(id)arg1 andDescription:(id)arg2 ;
+(void)_setTrackedAnimationsOptimizationsEnabled:(BOOL)arg0 ;
+(void)_setTrackedAnimationsScrubLinearly:(BOOL)arg0 ;
+(void)_setTrackedAnimationsStartPaused:(BOOL)arg0 ;
+(void)_setTrackedAnimationsUserInteractionEnabled:(BOOL)arg0 ;
+(void)animator:(id)arg0 isObserving:(id)arg1 ;
+(void)removeAllObservedForObservingAnimatorWithId:(id)arg0 ;
+(void)removeObserved:(id)arg0 forObservingAnimatorWithId:(id)arg1 ;
-(BOOL)_addedPacingAnimation;
-(BOOL)_computeDisplacementFractionComplete:(id)arg0 withKey:(id)arg1 inLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 fractionComplete:(*CGFloat)arg5 displacement:(*CGFloat)arg6 ;
-(BOOL)_computeSmallestDisplacementFractionComplete:(*CGFloat)arg0 ;
-(BOOL)_generatePointValueSpringAnimationsForKeyPath:(id)arg0 ;
-(BOOL)_isActive;
-(BOOL)_setContinuedWithNewSpring:(BOOL)arg0 forAnimationKey:(id)arg1 forLayer:(id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg0 withKeyPath:(id)arg1 ;
-(BOOL)_wasContinuedWithNewSpringForAnimationKey:(id)arg0 forLayer:(id)arg1 ;
-(CGFloat)_additiveOffsetForKey:(id)arg0 inLayer:(id)arg1 ;
-(CGFloat)_drag;
-(CGFloat)_dragAdjustedDuration;
-(CGFloat)_effectiveAdditiveOffsetForKey:(id)arg0 inLayer:(id)arg1 ;
-(CGFloat)_pauseAnimation:(id)arg0 ;
-(NSUInteger)_optionsForNestedLegacyAnimation:(NSUInteger)arg0 ;
-(id)_animationDescriptionForView:(id)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_currentTimingFunction;
-(id)_explicitAnimationUpdateForProperty:(id)arg0 forView:(id)arg1 withValue:(id)arg2 ;
-(id)_newAnimationUpdateForProperty:(id)arg0 implicit:(BOOL)arg1 additive:(BOOL)arg2 ;
-(id)_originalFromValueForKey:(id)arg0 inLayer:(id)arg1 ;
-(id)_originalToValueForKey:(id)arg0 inLayer:(id)arg1 ;
-(id)_previousAnimatorForKeyPath:(id)arg0 inLayer:(id)arg1 compoundKeys:(*id)arg2 ;
-(id)animationsDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDuration:(CGFloat)arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 animations:(id)arg3 ;
-(id)initWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 animations:(id)arg2 ;
-(id)initWithDuration:(CGFloat)arg0 dampingRatio:(CGFloat)arg1 animations:(id)arg2 ;
-(id)initWithDuration:(CGFloat)arg0 timingParameters:(id)arg1 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(struct CGVector )arg3 animations:(id)arg4 ;
-(id)timingFunctionForPause;
-(void)_clearAnimationState;
-(void)_continueWithTimingParameters:(id)arg0 duration:(CGFloat)arg1 ;
-(void)_executeCompletionHandlerWithFinalPosition:(NSInteger)arg0 ;
-(void)_notePropertyAnimationUpdate:(id)arg0 forView:(id)arg1 ;
-(void)_restoreLayerValueIfReversed:(id)arg0 animation:(id)arg1 toValue:(id)arg2 ;
-(void)_runAnimations;
-(void)_runCompletions:(NSInteger)arg0 finished:(BOOL)arg1 ;
-(void)_scheduleCACommitFuture;
-(void)_setAddedPacingAnimation:(BOOL)arg0 animationKey:(id)arg1 ;
-(void)_setAdditiveOffset:(CGFloat)arg0 forKey:(id)arg1 inLayer:(id)arg2 ;
-(void)_setKVOCompliantReversed:(BOOL)arg0 ;
-(void)_setKVOCompliantRunning:(BOOL)arg0 ;
-(void)_setKVOCompliantState:(NSInteger)arg0 ;
-(void)_setKVOCompliantState:(NSInteger)arg0 fromState:(NSInteger)arg1 ;
-(void)_setOriginalFromValue:(id)arg0 forKey:(id)arg1 inLayer:(id)arg2 ;
-(void)_setOriginalToValue:(id)arg0 forKey:(id)arg1 inLayer:(id)arg2 ;
-(void)_setupAnimationTracking:(id)arg0 ;
-(void)_setupAssociatedViewAnimationState:(id)arg0 ;
-(void)_setupWithDuration:(CGFloat)arg0 timingParameters:(id)arg1 animations:(id)arg2 ;
-(void)_springAnimationForXComponent:(*id)arg0 forYComponent:(*id)arg1 ;
-(void)_untrackPropertyAnimationsForKeys:(*id)arg0 inLayer:(id)arg1 ;
-(void)addAnimations:(id)arg0 ;
// -(void)addAnimations:(id)arg0 delayFactor:(unk)arg1  ;
// -(void)addAnimations:(id)arg0 delayFactor:(unk)arg1 durationFactor:(CGFloat)arg2  ;
-(void)addCompletion:(id)arg0 ;
-(void)clearAnimationDescriptions;
-(void)continueAnimation;
-(void)continueAnimationWithTimingParameters:(id)arg0 durationFactor:(CGFloat)arg1 ;
-(void)dealloc;
-(void)finalizeStoppedAnimationWithPosition:(NSInteger)arg0 ;
-(void)finishAnimationAtPosition:(NSInteger)arg0 ;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseAnimation;
-(void)pauseAnimationTransiently;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(CGFloat)arg0 ;
-(void)startAnimationAsPaused:(BOOL)arg0 ;
-(void)stopAnimation:(BOOL)arg0 ;


@end


#endif