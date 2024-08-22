// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDECKFLOATINGSWITCHERMODIFIER_H
#define SBDECKFLOATINGSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBDeckFloatingSwitcherModifier : SBSwitcherModifier {
    NSUInteger _ongoingAppLayoutRemovals;
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
}




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
-(CGFloat)_adjustedIndexForScaleForIndex:(NSUInteger)arg0 withCardSize:(struct CGSize )arg1 contentOffset:(struct CGPoint )arg2 contentSize:(struct CGSize )arg3 contentInsets:(struct UIEdgeInsets )arg4 switcherViewBounds:(struct CGRect )arg5 ;
-(CGFloat)_cardCornerRadiusInSwitcher;
-(CGFloat)_distanceFromPreviousCardForCardAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_scaleForScaleAdjustedIndex:(CGFloat)arg0 ;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)containerStatusBarAnimationDuration;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)contentViewScale;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
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
-(NSUInteger)_indexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_numberOfItems;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)dockWindowLevelPriority;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
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
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)init;
-(id)keyboardSuppressionMode;
-(id)neighboringAppLayoutsForFocusedAppLayout:(id)arg0 ;
-(id)scrollViewAttributes;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(id)visibleShelves;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 withCardSize:(struct CGSize )arg1 scale:(CGFloat)arg2 adjustedIndexForScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 contentSize:(struct CGSize )arg5 contentInsets:(struct UIEdgeInsets )arg6 switcherViewBounds:(struct CGRect )arg7 ;
-(struct CGRect )_frameWithScaleAppliedForIndex:(NSUInteger)arg0 withCardSize:(struct CGSize )arg1 contentOffset:(struct CGPoint )arg2 contentSize:(struct CGSize )arg3 contentInsets:(struct UIEdgeInsets )arg4 switcherViewBounds:(struct CGRect )arg5 ;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForShelf:(id)arg0 ;
-(struct CGRect )shelfBackgroundBlurFrame;
-(struct CGSize )_contentSize;
-(struct CGSize )_contentSizeWithWithCardSize:(struct CGSize )arg0 contentInsets:(struct UIEdgeInsets )arg1 switcherViewBounds:(struct CGRect )arg2 numberOfItems:(NSUInteger)arg3 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsetsWithContainerViewBounds:(struct CGRect )arg0 switcherViewBounds:(struct CGRect )arg1 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )_visibleAppLayoutRangeForContentOffset:(struct CGPoint )arg0 ;
-(void)_applyPrototypeSettings;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif