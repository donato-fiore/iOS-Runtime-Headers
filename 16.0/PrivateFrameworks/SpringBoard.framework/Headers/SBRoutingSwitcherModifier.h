// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBROUTINGSWITCHERMODIFIER_H
#define SBROUTINGSWITCHERMODIFIER_H

@class NSArray, NSMapTable, NSString;
@protocol SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"

@interface SBRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate>

 {
    NSArray *_modifiers;
    id<SBRoutingSwitcherModifierDelegate> *_delegate;
    SBSwitcherModifier *_currentModifier;
    NSUInteger _appLayouts_lastAppLayoutsGenCount;
    NSMapTable *_appLayouts_appLayoutsForModifiers;
    NSUInteger _lastIndexForModifier_GenCount;
    NSMapTable *_lastIndexForModifier_indexCapsForModifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFocusableAppLayoutBeEffectivelyObscured:(id)arg0 ;
-(BOOL)canLayoutRoleParticipateInSwitcherDragAndDrop:(NSInteger)arg0 appLayout:(id)arg1 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)clipsToBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isFocusEnabledForAppLayout:(id)arg0 ;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isIndexRubberbandableForSwipeToKill:(NSUInteger)arg0 ;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleKillable:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
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
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)shouldScaleContentToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldScrollViewBlockTouches;
-(BOOL)shouldShowBackdropViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg0 ;
-(BOOL)shouldUpdateAnimatableProperty:(id)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseBrightMaterialForIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseNonuniformSnapshotScalingForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldUseWallpaperGradientTreatment;
-(BOOL)switcherDimmingViewBlocksTouches;
-(BOOL)switcherHitTestsAsOpaque;
-(BOOL)systemApertureRequiresHeavyShadowForTransition;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(BOOL)wantsHomeScreenPointerInteractions;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(BOOL)wantsSlideOverTongue;
-(BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)arg0 ;
-(BOOL)wantsSwitcherBackdropBlur;
-(BOOL)wantsSwitcherDimmingView;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
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
-(CGFloat)modelValueForAnimatableProperty:(id)arg0 currentValue:(CGFloat)arg1 creating:(BOOL)arg2 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)plusButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonAlpha;
-(CGFloat)reopenClosedWindowsButtonScale;
-(CGFloat)rootContentViewBlurRadius;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
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
-(NSInteger)updateModeForAnimatableProperty:(id)arg0 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_lastIndexForModifier:(id)arg0 ;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)blurTargetPreferenceForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)bounceIconGenerationCountForCurrentCount:(NSUInteger)arg0 ;
-(NSUInteger)dockWindowLevelPriority;
-(NSUInteger)hiddenContainerStatusBarParts;
-(NSUInteger)hiddenContentStatusBarPartsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)indexToScrollToAfterInsertingAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexToScrollToAfterRemovingIndex:(NSUInteger)arg0 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(NSUInteger)maskedCornersForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withMaskedCorners:(NSUInteger)arg2 ;
-(NSUInteger)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg0 ;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(NSUInteger)transactionCompletionOptions;
-(char)activityModeForAppLayout:(id)arg0 ;
-(char)jetsamModeForAppLayout:(id)arg0 ;
-(id)_adjustedShelfForShelf:(id)arg0 forModifier:(id)arg1 ;
-(id)_adjustedShelfForShelf:(id)arg0 fromModifier:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)adjustedContinuousExposeIdentifiersForIdentifiers:(id)arg0 ;
-(id)animatablePropertyIdentifiers;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)appLayoutForReceivingHardwareButtonEvents;
-(id)appLayoutToAttachSlideOverTongue;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)appLayouts;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)bounceIconBundleIdentifier;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)focusedAppLayoutForShelf:(id)arg0 ;
-(id)foregroundAppLayouts;
-(id)handleEvent:(id)arg0 ;
-(id)hiddenAppLayoutsInShelf:(id)arg0 ;
-(id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg0 ;
-(id)identityMeshTransformForIndex:(NSUInteger)arg0 ;
-(id)ignoredDisplayItemsForShelf:(id)arg0 ;
-(id)initWithModifiers:(id)arg0 delegate:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(id)meshTransformForIndex:(NSUInteger)arg0 ;
-(id)neighboringAppLayoutsForFocusedAppLayout:(id)arg0 ;
-(id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg0 fromAppLayouts:(id)arg1 ;
-(id)repositionProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)resizeGrabberLayoutAttributesForAppLayout:(id)arg0 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)scrollViewAttributes;
-(id)settingsForAnimatableProperty:(id)arg0 ;
-(id)stackDescriptionWithPrefix:(id)arg0 ;
-(id)switcherDropRegionContextForDraggingLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atLocation:(struct CGPoint )arg2 ;
-(id)systemApertureTransitioningAppLayouts;
-(id)topMostLayoutElements;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(id)visibleShelves;
-(struct CGPoint )adjustedOffsetForOffset:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 startPoint:(struct CGPoint )arg2 locationInView:(struct CGPoint )arg3 horizontalVelocity:(*CGFloat)arg4 verticalVelocity:(*CGFloat)arg5 ;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGPoint )contentViewOffsetForAccessoriesOfAppLayout:(id)arg0 ;
-(struct CGPoint )contentViewOffsetForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct CGPoint )expandedSourcePositionForSystemApertureTransition;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )bounceIconInitialFrame;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 withBounds:(struct CGRect )arg1 ;
-(struct CGRect )containerViewBounds;
-(struct CGRect )frameForIconOverlayInAppLayout:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct CGRect )frameForShelf:(id)arg0 ;
-(struct CGRect )fullyPresentedFrameForIndex:(NSUInteger)arg0 frame:(struct CGRect )arg1 ;
-(struct CGRect )rootContentViewMaskRect;
-(struct CGRect )shelfBackgroundBlurFrame;
-(struct CGRect )switcherViewBounds;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherShelfPresentationAttributes )presentationAttributesForShelf:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)resetAdjustedScrollingState;


@end


#endif