// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFORCEPRESSGESTURESWITCHERMODIFIER_H
#define SBFORCEPRESSGESTURESWITCHERMODIFIER_H

@class UIViewFloatAnimatableProperty;


#import "SBGestureSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"
#import "SBCoplanarSwitcherModifier.h"
#import "SBForcePressGestureStateTrackingSwitcherModifier.h"

@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    NSInteger _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
    CGFloat _additionalScaleForBreathing;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
}




-(BOOL)_forcePressGestureCanBreathe;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)_effectivePanProgress;
-(CGFloat)_scaleForCoplanarModifier;
-(CGFloat)_switcherCardScale;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)initialPanThreshold;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)wallpaperScale;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_indexOfSelectedAppLayout;
-(id)_layoutSettings;
-(id)_scaleSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 selectedAppLayout:(id)arg1 effectiveStartingEnvironmentMode:(NSInteger)arg2 multitaskingModifier:(id)arg3 ;
-(id)keyboardSuppressionMode;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_beginAnimatingMultitaskingPropertyWithMode:(NSInteger)arg0 settings:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif