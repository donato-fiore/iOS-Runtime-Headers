// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFULLSCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBFULLSCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H

@class NSArray, NSMutableSet;


#import "SBSwitcherModifier.h"
#import "SBStripContinuousExposeSwitcherModifier.h"
#import "SBFullScreenAppLayoutSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBFullScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBStripContinuousExposeSwitcherModifier *_stripModifier;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
    NSArray *_zOrderedLeafAppLayoutsForKeyboardNavigation;
}


@property (nonatomic, getter=isContinuousExposeConfigurationChangeTransition) BOOL continuousExposeConfigurationChangeTransition; // ivar: _continuousExposeConfigurationChangeTransition
@property (readonly, nonatomic) SBAppLayout *fullScreenAppLayout; // ivar: _fullScreenAppLayout
@property (nonatomic) BOOL handlesTapAppLayoutEvents; // ivar: _handlesTapAppLayoutEvents
@property (nonatomic) BOOL handlesTapAppLayoutHeaderEvents; // ivar: _handlesTapAppLayoutHeaderEvents
@property (retain, nonatomic) NSMutableSet *highlightedByHoverAppLayouts;
@property (retain, nonatomic) NSMutableSet *highlightedByTouchAppLayouts;


-(BOOL)_anyItemExceedsWidthThresholdToHideStrip;
-(BOOL)_isAppLayoutEffectivelyOnStage:(id)arg0 ;
-(BOOL)_isFullScreenAppLayout:(id)arg0 ;
-(BOOL)_isStripRevealedFromHidden;
-(BOOL)_layoutRoleIsOccluded:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)_shouldEnableItemResizeGrabbersForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)_wantsContinuousExposeHoverGestureForDismissingStrip;
-(BOOL)canSelectLeafWithModifierKeysInAppLayout:(id)arg0 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)isScrollEnabled;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAllowGroupOpacityForAppLayout:(id)arg0 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldScrollViewBlockTouches;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseWallpaperGradientTreatment;
-(BOOL)switcherHitTestsAsOpaque;
-(BOOL)wantsContinuousExposeHoverGesture;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)arg0 ;
-(CGFloat)_continuousExposeStripRevealProgress;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)continuousExposeStripProgress;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dockProgress;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)spaceAccessoryViewIconHitTestOutsetForAppLayout:(id)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)dockUpdateMode;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)touchBehaviorForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)activeLeafAppLayoutsReachableByKeyboardShortcut;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)handleHoverEvent:(id)arg0 ;
-(id)handlePointerCrossedDisplayBoundaryEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTapAppLayoutHeaderEvent:(id)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithFullScreenAppLayout:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(unsigned int)_continuousExposeStripEdge;
-(void)_resetKeyboardNavigationZOrder;


@end


#endif