// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTURESWITCHERMODIFIER_H
#define SBHOMEGESTURESWITCHERMODIFIER_H

@class UIViewFloatAnimatableProperty, CADisplayLink, NSString;
@protocol SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate;


#import "SBGestureSwitcherModifier.h"
#import "SBSwitcherModifier.h"
#import "SBCoplanarSwitcherModifier.h"
#import "SBHomeGestureDockSwitcherModifier.h"
#import "SBHomeGestureFinalDestinationSwitcherModifier.h"
#import "SBDismissSiriSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>

 {
    BOOL _inMultitasking;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
    CGPoint _touchOffset;
    CGFloat _lastFrameOffsetX;
    CGFloat _lastTranslationXForRubberbanding;
    CGFloat _translationXLostToRubberbanding;
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
    CGFloat _stackedProgress;
    CGPoint _initialCentroid;
    CGPoint _centroid;
    CGPoint _centroidAdjustment;
    CGFloat _absoluteScale;
    CGPoint _translationWithoutScale;
    CADisplayLink *_displayLink;
    CGFloat _lastTouchTimestamp;
    NSInteger _gestureHoldTimer;
    CGPoint _initialTouchLocation;
    CGPoint _lastTouchLocation;
    BOOL _everTranslatedUpwards;
    BOOL _cancelledGestureForEmptySwitcher;
    CGFloat _toHomeScreenAlpha;
    CGFloat _toHomeScreenBlurProgress;
    CGFloat _toHomeScreenDimmingAlpha;
    BOOL _didWarmupFlyInHaptic;
    BOOL _didPlayFlyInHaptic;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    SBSwitcherModifier *_multitaskingModifier;
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
    SBAppLayout *_selectedAppLayout;
    NSInteger _startingEnvironmentMode;
    BOOL _scrunchInitiated;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    BOOL _shouldResignActive;
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
-(BOOL)_preventPositioningCardsOffscreenForFlatBottomEdgeSwipe;
-(BOOL)_shouldPositionAdjacentCardsOffscreenForFlyIn;
-(BOOL)_shouldResignActiveBasedOnCardScale;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isShowingOrAnimatingCardsForFlyIn;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)_centerYOffsetDuringGesture;
-(CGFloat)_coplanarSpacing;
-(CGFloat)_distanceYToInSwitcherCardScale;
-(CGFloat)_distanceYToMaxTranslation;
-(CGFloat)_gestureProgressToMaxTranslationForTranslation:(CGFloat)arg0 ;
-(CGFloat)_inSwitcherCenterYOffsetWhenPresented;
-(CGFloat)_scaleForAdjacentCards;
-(CGFloat)_scaleForOffscreenAdjacentCardsForFlyIn;
-(CGFloat)_scaleForTranslation:(struct CGPoint )arg0 ;
-(CGFloat)_switcherCardScale;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)lighteningAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)unconditionalDistanceThresholdForHome;
-(CGFloat)wallpaperOverlayAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperScale;
-(NSInteger)currentFinalDestination;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_selectedAppLayoutIndex;
-(id)_cornerRadiusSettings;
-(id)_layoutSettingsForAppLayout:(id)arg0 layoutSettings:(id)arg1 ;
-(id)_newDockModifierRequiringVerticalSwipeToTrackDock:(BOOL)arg0 startingEnvironmentMode:(NSInteger)arg1 ;
-(id)_responseForActivatingFinalDestination:(NSInteger)arg0 ;
-(id)_responseForActivatingReachabilityIfNeededWithFinalDestination:(NSInteger)arg0 ;
-(id)_responseForSBEventGestureBeganWithTimeDelta:(CGFloat)arg0 ;
-(id)_responseForSBEventGestureEndWithEvent:(id)arg0 finalDestination:(NSInteger)arg1 ;
-(id)_responseForStudyLogDidBeginGesture;
-(id)_responseForStudyLogDidEndGestureWithEvent:(id)arg0 finalDestination:(NSInteger)arg1 destinationReason:(id)arg2 ;
-(id)_responseForUpdatingIconViewVisibility:(BOOL)arg0 ;
-(id)_responseForUpdatingLayoutForGestureBegan;
-(id)_updateForGestureDidBeginWithEvent:(id)arg0 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg0 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg0 ;
-(id)_updateInMultitaskingIfNeededWithLocation:(struct CGPoint )arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 selectedAppLayout:(id)arg1 startingEnvironmentMode:(NSInteger)arg2 multitaskingModifier:(id)arg3 scrunchInitiated:(BOOL)arg4 continuingGesture:(BOOL)arg5 lastGestureWasAnArcSwipe:(BOOL)arg6 ;
-(id)keyboardSuppressionMode;
-(id)selectedAppLayout;
-(id)visibleAppLayouts;
-(struct CGPoint )_frameOffsetForTranslation:(struct CGPoint )arg0 ;
-(struct CGPoint )_rubberbandedTranslationForAdjacentCards;
-(struct CGPoint )_unadjustedGestureTranslation;
-(struct CGPoint )liftOffTranslationForGestureEnd;
-(struct CGPoint )liftOffVelocityForGestureEnd;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_applyPrototypeSettings;
-(void)_beginAnimatingMultitaskingPropertyWithMode:(NSInteger)arg0 settings:(id)arg1 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_updateFrameOffsetForXRubberbandingForTranslation:(struct CGPoint )arg0 ;
-(void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg0 ;
-(void)_updateShouldResignActiveWithEvent:(id)arg0 ;
-(void)_updateStackedProgress;
-(void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif