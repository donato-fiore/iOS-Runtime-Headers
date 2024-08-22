// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDECKSWITCHERMODIFIER_H
#define SBDECKSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBDeckSwitcherModifier : SBSwitcherModifier {
    CGPoint _previousContentOffset;
    BOOL _isScrollingForward;
    NSInteger _grabbedDraggingIndex;
    CGFloat _outputContentOffsetAdjustmentForIndexChange;
    CGFloat _inputContentOffsetAdjustmentForIndexChange;
    CGPoint _start;
    CGPoint _originalLocationInView;
    CGFloat _initialTranslationAdjustment;
    BOOL _useTitleOpacityPrototypeSettings;
    NSUInteger _ongoingAppLayoutRemovals;
}




-(BOOL)_isIndexVisible:(NSUInteger)arg0 ;
-(BOOL)_priorIndex:(NSUInteger)arg0 fullyObscuresCardForIndex:(NSUInteger)arg1 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isFocusEnabledForAppLayout:(id)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isIndexRubberbandableForSwipeToKill:(NSUInteger)arg0 ;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
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
-(CGFloat)_cardCornerRadiusInSwitcher;
-(CGFloat)_counteractScrollingForOffset:(CGFloat)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)_depthForFrameOrigin:(CGFloat)arg0 ;
-(CGFloat)_preferredVisibleMarginForTopPage;
-(CGFloat)_restingScrollProgressForProgress:(CGFloat)arg0 velocity:(struct CGPoint )arg1 ;
-(CGFloat)_scaleForTransformForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)_scaleInSwitcherViewForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)_scaleTransformedXOrigin:(CGFloat)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)_scrollMin;
-(CGFloat)_scrollProgress;
-(CGFloat)_scrollProgressForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_scrollProgressForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 depth:(CGFloat)arg2 ;
-(CGFloat)_switcherCardScale;
-(CGFloat)_unscaledCardCornerRadius;
-(CGFloat)_valueAlongDepthCurveForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 aCoefficient:(CGFloat)arg2 bCoefficient:(CGFloat)arg3 ;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)containerStatusBarAnimationDuration;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 ;
-(CGFloat)contentViewScale;
-(CGFloat)depthForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 scrollProgress:(CGFloat)arg2 ;
-(CGFloat)desiredXOriginForQuantizedTopPage;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg0 ;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)leadingOffsetForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 scrollProgress:(CGFloat)arg2 ;
-(CGFloat)lighteningAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)minimumTranslationToKillIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)plusButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonScale;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scrollProgressForIndex:(NSUInteger)arg0 ;
-(CGFloat)scrollProgressForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 frameOrigin:(CGFloat)arg2 ;
-(CGFloat)scrollRange;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)shelfBackgroundBlurOpacity;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
-(CGFloat)switcherBackdropBlurProgress;
-(CGFloat)switcherDimmingAlpha;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 scrollProgress:(CGFloat)arg1 ;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperOverlayAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperScale;
-(NSInteger)_topIndexForLocationInContainerCoordinateSpace:(struct CGPoint )arg0 ;
-(NSInteger)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(NSInteger)dockUpdateMode;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)plusButtonStyle;
-(NSInteger)preferredSnapshotOrientationForAppLayout:(id)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)switcherBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_directionForRemovingIndex:(NSUInteger)arg0 centeredIndex:(NSUInteger)arg1 ;
-(NSUInteger)_indexForContentOffset:(struct CGPoint )arg0 ;
-(NSUInteger)_indexForScrollProgress:(CGFloat)arg0 displayItemsCount:(NSUInteger)arg1 depth:(CGFloat)arg2 ;
-(NSUInteger)_indexOfCurrentCenteredCard;
-(NSUInteger)_newIndexOfItemAtIndex:(NSUInteger)arg0 afterRemovingItemAtIndex:(NSUInteger)arg1 ;
-(NSUInteger)dockWindowLevelPriority;
-(NSUInteger)indexForScrollProgress:(CGFloat)arg0 displayItemsCount:(NSUInteger)arg1 frameOrigin:(CGFloat)arg2 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfItems;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(NSUInteger)transactionCompletionOptions;
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
-(id)debugDescription;
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
-(struct CGPoint )_adjustedOffsetForIndex:(NSInteger)arg0 offset:(struct CGPoint )arg1 start:(struct CGPoint )arg2 originalLocationInView:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 ;
-(struct CGPoint )_contentOffsetForScrollProgress:(CGFloat)arg0 ;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )_frameForIndex:(NSUInteger)arg0 displayItemsCount:(NSUInteger)arg1 scrollProgress:(CGFloat)arg2 ignoringScrollOffset:(BOOL)arg3 ;
-(struct CGRect )_scaleTransformedFrameForIndex:(NSUInteger)arg0 withUntransformedFrame:(struct CGRect )arg1 scrollProgress:(CGFloat)arg2 ;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForShelf:(id)arg0 ;
-(struct CGRect )shelfBackgroundBlurFrame;
-(struct CGSize )_contentSize;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct _NSRange )_visibleAppLayoutRangeForContentOffset:(struct CGPoint )arg0 ;
-(void)_applyPrototypeSettings;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif