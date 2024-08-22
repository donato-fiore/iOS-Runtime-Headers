// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHELFCAROUSELSWITCHERMODIFIER_H
#define SBSHELFCAROUSELSWITCHERMODIFIER_H

@class NSArray;


#import "SBSwitcherModifier.h"

@interface SBShelfCarouselSwitcherModifier : SBSwitcherModifier {
    NSUInteger _fittedContentSize_lastAppLayoutsGenCount;
    NSInteger _fittedContentSize_lastOrientation;
    CGRect _fittedContentSize_lastContainerViewBounds;
    CGRect _fittedContentSize_lastSwitcherViewBounds;
    CGSize _fittedContentSize_lastSize;
    NSUInteger _visibleRange_lastAppLayoutsGenCount;
    NSInteger _visibleRange_lastOrientation;
    CGRect _visibleRange_lastContainerViewBounds;
    CGRect _visibleRange_lastSwitcherViewBounds;
    CGPoint _visibleRange_lastContentOffset;
    _NSRange _visibleRange_lastRange;
    CGRect _centerCardSize_containerViewBounds;
    CGSize _centerCardSize_landscapeCardSize;
    CGSize _centerCardSize_portraitCardSize;
    CGRect _floatingCardSize_containerViewBounds;
    CGSize _floatingCardSize_landscapeCardSize;
    CGSize _floatingCardSize_portraitCardSize;
    BOOL _hasReceivedInitialSetupEvent;
}


@property (readonly, copy, nonatomic) NSArray *orderedVisibleAppLayouts;


-(BOOL)_isIndexVisible:(NSUInteger)arg0 ;
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
-(BOOL)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg0 ;
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
-(CGFloat)_effectiveMaxCarouselWidth;
-(CGFloat)_trailingPaddingIfAny;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)containerStatusBarAnimationDuration;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)contentViewScale;
-(CGFloat)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg0 ;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)lighteningAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)minimumTranslationToKillIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)plusButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonScale;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)shelfBackgroundBlurOpacity;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
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
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(NSUInteger)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg0 ;
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
-(id)handleInitialSetupEvent:(id)arg0 ;
-(id)handleShelfFocusedDisplayItemsChangedEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)init;
-(id)keyboardSuppressionMode;
-(id)neighboringAppLayoutsForFocusedAppLayout:(id)arg0 ;
-(id)scrollViewAttributes;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(id)visibleShelves;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 applyCarousel:(BOOL)arg1 ;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct CGRect )frameForShelf:(id)arg0 ;
-(struct CGRect )shelfBackgroundBlurFrame;
-(struct CGSize )_cardSizeForAppLayout:(id)arg0 ;
-(struct CGSize )_cardSizeForIndex:(NSUInteger)arg0 ;
-(struct CGSize )_centerCardSizeForOrientation:(NSInteger)arg0 ;
-(struct CGSize )_contentSize;
-(struct CGSize )_fittedContentSize;
-(struct CGSize )_floatingCardSizeForOrientation:(NSInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )_visibleRange;
-(void)resetAdjustedScrollingState;


@end


#endif