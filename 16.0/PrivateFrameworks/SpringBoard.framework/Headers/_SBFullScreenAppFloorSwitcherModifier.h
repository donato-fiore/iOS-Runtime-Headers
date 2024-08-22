// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFULLSCREENAPPFLOORSWITCHERMODIFIER_H
#define _SBFULLSCREENAPPFLOORSWITCHERMODIFIER_H

@class NSUUID;


#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface _SBFullScreenAppFloorSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_activeAppLayout;
    NSUUID *_homeAffordanceReuseIdentifier;
}




-(BOOL)_isLayoutRoleBehindCenterWindow:(NSInteger)arg0 appLayout:(id)arg1 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isFocusEnabledForAppLayout:(id)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isIndexRubberbandableForSwipeToKill:(NSUInteger)arg0 ;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleKillable:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)isScrollEnabled;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)shouldConfigureInAppDockVisibleAssertion;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldScrollViewBlockTouches;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseBrightMaterialForIndex:(NSUInteger)arg0 ;
-(BOOL)switcherDimmingViewBlocksTouches;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(BOOL)wantsHomeScreenPointerInteractions;
-(BOOL)wantsSlideOverTongue;
-(BOOL)wantsSwitcherBackdropBlur;
-(BOOL)wantsSwitcherDimmingView;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)containerStatusBarAnimationDuration;
-(CGFloat)contentViewScale;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)lighteningAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)plusButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonScale;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)shelfBackgroundBlurOpacity;
-(CGFloat)switcherBackdropBlurProgress;
-(CGFloat)switcherDimmingAlpha;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperOverlayAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperScale;
-(NSInteger)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(NSInteger)dockUpdateMode;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)plusButtonStyle;
-(NSInteger)preferredSnapshotOrientationForAppLayout:(id)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)switcherBackdropBlurType;
-(NSInteger)tintStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)touchBehaviorForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)dockWindowLevelPriority;
-(NSUInteger)hiddenContentStatusBarPartsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(NSUInteger)transactionCompletionOptions;
-(char)activityModeForAppLayout:(id)arg0 ;
-(char)jetsamModeForAppLayout:(id)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)appLayoutForReceivingHardwareButtonEvents;
-(id)appLayoutToAttachSlideOverTongue;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)foregroundAppLayouts;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)initWithActiveAppLayout:(id)arg0 homeAffordanceReuseIdentifier:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(id)neighboringAppLayoutsForFocusedAppLayout:(id)arg0 ;
-(id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg0 fromAppLayouts:(id)arg1 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(id)visibleShelves;
-(struct CGRect )frameForAppLayout:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForShelf:(id)arg0 ;
-(struct CGRect )shelfBackgroundBlurFrame;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif