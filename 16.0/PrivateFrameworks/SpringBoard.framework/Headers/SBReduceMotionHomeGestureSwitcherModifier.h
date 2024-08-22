// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREDUCEMOTIONHOMEGESTURESWITCHERMODIFIER_H
#define SBREDUCEMOTIONHOMEGESTURESWITCHERMODIFIER_H

@class NSString;
@protocol SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate;


#import "SBGestureSwitcherModifier.h"
#import "SBCoplanarSwitcherModifier.h"
#import "SBHomeGestureDockSwitcherModifier.h"
#import "SBHomeGestureFinalDestinationSwitcherModifier.h"
#import "SBDismissSiriSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>

 {
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
    SBAppLayout *_selectedAppLayout;
    NSInteger _startingEnvironmentMode;
    BOOL _continuingGesture;
    BOOL _lastGestureWasAnArcSwipe;
    BOOL _scrunchInitiated;
    CGPoint _initialTouchLocation;
    CGPoint _lastTouchLocation;
    CGPoint _translation;
    CGPoint _velocity;
    CGPoint _translationAdjustmentForStartingFromHomeScreen;
    BOOL _gestureHasBegun;
    BOOL _gestureHasEnded;
    NSUInteger _reduceMotionAxis;
    BOOL _endingGestureForAppSwitcher;
    BOOL _didWarmupReduceMotionHaptic;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)unconditionalDistanceThresholdForHome;
-(NSInteger)currentFinalDestination;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_newDockModifierRequiringVerticalSwipeToTrackDock:(BOOL)arg0 startingEnvironmentMode:(NSInteger)arg1 ;
-(id)_responseForActivatingFinalDestination:(NSInteger)arg0 ;
-(id)_updateForGestureDidBeginWithEvent:(id)arg0 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg0 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg0 ;
-(id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 selectedAppLayout:(id)arg1 startingEnvironmentMode:(NSInteger)arg2 scrunchInitiated:(BOOL)arg3 continuingGesture:(BOOL)arg4 lastGestureWasAnArcSwipe:(BOOL)arg5 ;
-(id)keyboardSuppressionMode;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_applyPrototypeSettings;
-(void)_updateGestureTranslationAndVelocityWithEvent:(id)arg0 ;
-(void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif