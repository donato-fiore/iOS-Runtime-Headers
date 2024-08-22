// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTUREFLOATINGSWITCHERMODIFIER_H
#define SBHOMEGESTUREFLOATINGSWITCHERMODIFIER_H

@class UIViewFloatAnimatableProperty, CADisplayLink, NSString;
@protocol SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate;


#import "SBGestureSwitcherModifier.h"
#import "SBStackedFloatingSwitcherModifier.h"
#import "SBHomeGestureDockSwitcherModifier.h"
#import "SBHomeGestureFinalDestinationSwitcherModifier.h"
#import "SBDismissSiriSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>

 {
    SBStackedFloatingSwitcherModifier *_stackedLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
    SBAppLayout *_selectedAppLayout;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    NSInteger _floatingConfiguration;
    CGFloat _rubberbandedYTranslation;
    CGFloat _scaleProgress;
    CGFloat _multitaskingHintProgress;
    UIViewFloatAnimatableProperty *_rampingProperty;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    BOOL _inMultitasking;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
    CGPoint _touchOffset;
    BOOL _hasTriggeredCardFlyIn;
    CGFloat _translationYWhenTriggeredCardFlyIn;
    BOOL _hasBecomeCoplanarSinceGestureFromSwitcherBegan;
    CGPoint _gestureLiftOffVelocity;
    CGPoint _gestureLiftOffTranslation;
    CGPoint _translationAdjustmentForStartingFromSwitcher;
    CGPoint _translationAdjustmentForStartingFromHomeScreen;
    CGFloat _progressToInSwitcherCardScale;
    CGFloat _progressToMaxTranslation;
    CGPoint _translation;
    CGPoint _velocity;
    CADisplayLink *_displayLink;
    CGFloat _lastTouchTimestamp;
    NSInteger _gestureHoldTimer;
    CGPoint _initialTouchLocation;
    CGPoint _lastTouchLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasPausedEnoughForFlyIn;
-(BOOL)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
-(BOOL)_inMultitaskingForLocation:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(BOOL)_isSelectedAppLayoutAtIndex:(NSUInteger)arg0 ;
-(BOOL)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(CGFloat)arg0 ;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(CGFloat)_centerYOffsetDuringGesture;
-(CGFloat)_distanceYToInSwitcherCardScale;
-(CGFloat)_distanceYToMaxTranslation;
-(CGFloat)_gestureProgressToMaxTranslationForTranslation:(CGFloat)arg0 ;
-(CGFloat)_inSwitcherCenterYOffsetWhenPresented;
-(CGFloat)_scaleForTranslation:(struct CGPoint )arg0 ;
-(CGFloat)_switcherCardScale;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)unconditionalDistanceThresholdForHome;
-(NSInteger)currentFinalDestination;
-(NSUInteger)_selectedAppLayoutIndex;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(id)_layoutSettingsForAppLayout:(id)arg0 layoutSettings:(id)arg1 ;
-(id)_responseForActivatingFinalDestination:(NSInteger)arg0 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg0 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg0 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg0 ;
-(id)_updateInMultitaskingIfNeededWithLocation:(struct CGPoint )arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutToAttachSlideOverTongue;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 selectedAppLayout:(id)arg1 continuingGesture:(BOOL)arg2 lastGestureWasAnArcSwipe:(BOOL)arg3 floatingConfiguration:(NSInteger)arg4 ;
-(id)keyboardSuppressionMode;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct CGPoint )_frameOffsetForTranslation:(struct CGPoint )arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_applyPrototypeSettings;
-(void)_beginAnimatingMultitaskingPropertyWithMode:(NSInteger)arg0 settings:(id)arg1 ;
-(void)_beginAnimatingRampingPropertyWithSettings:(id)arg0 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif