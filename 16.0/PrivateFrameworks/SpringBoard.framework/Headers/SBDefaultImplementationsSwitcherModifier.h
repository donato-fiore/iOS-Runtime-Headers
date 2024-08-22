// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEFAULTIMPLEMENTATIONSSWITCHERMODIFIER_H
#define SBDEFAULTIMPLEMENTATIONSSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBDisplayItemLayoutGrid.h"

@interface SBDefaultImplementationsSwitcherModifier : SBSwitcherModifier {
    SBDisplayItemLayoutGrid *_continuousExposeGrid;
}




-(BOOL)_isLayoutRoleBehindCenterWindow:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)canFocusableAppLayoutBeEffectivelyObscured:(id)arg0 ;
-(BOOL)canLayoutRoleParticipateInSwitcherDragAndDrop:(NSInteger)arg0 appLayout:(id)arg1 ;
-(BOOL)clipsToBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldContentViewBlockTouches;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldScaleContentToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldShowBackdropViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg0 ;
-(BOOL)shouldUpdateAnimatableProperty:(id)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseNonuniformSnapshotScalingForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldUseWallpaperGradientTreatment;
-(BOOL)switcherHitTestsAsOpaque;
-(BOOL)systemApertureRequiresHeavyShadowForTransition;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)arg0 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)modelValueForAnimatableProperty:(id)arg0 currentValue:(CGFloat)arg1 creating:(BOOL)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)rootContentViewBlurRadius;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)updateModeForAnimatableProperty:(id)arg0 ;
-(NSUInteger)blurTargetPreferenceForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)bounceIconGenerationCountForCurrentCount:(NSUInteger)arg0 ;
-(NSUInteger)hiddenContainerStatusBarParts;
-(NSUInteger)hiddenContentStatusBarPartsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(NSUInteger)maskedCornersForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withMaskedCorners:(NSUInteger)arg2 ;
-(NSUInteger)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg0 ;
-(id)adjustedContinuousExposeIdentifiersForIdentifiers:(id)arg0 ;
-(id)animatablePropertyIdentifiers;
-(id)bounceIconBundleIdentifier;
-(id)focusedAppLayoutForShelf:(id)arg0 ;
-(id)hiddenAppLayoutsInShelf:(id)arg0 ;
-(id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg0 ;
-(id)identityMeshTransformForIndex:(NSUInteger)arg0 ;
-(id)ignoredDisplayItemsForShelf:(id)arg0 ;
-(id)meshTransformForIndex:(NSUInteger)arg0 ;
-(id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)arg0 fromAppLayouts:(id)arg1 ;
-(id)repositionProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)resizeGrabberLayoutAttributesForAppLayout:(id)arg0 ;
-(id)resizeProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)settingsForAnimatableProperty:(id)arg0 ;
-(id)switcherDropRegionContextForDraggingLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atLocation:(struct CGPoint )arg2 ;
-(id)systemApertureTransitioningAppLayouts;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )contentViewOffsetForAccessoriesOfAppLayout:(id)arg0 ;
-(struct CGPoint )contentViewOffsetForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct CGPoint )expandedSourcePositionForSystemApertureTransition;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )bounceIconInitialFrame;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 withBounds:(struct CGRect )arg1 ;
-(struct CGRect )frameForIconOverlayInAppLayout:(id)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct CGRect )fullyPresentedFrameForIndex:(NSUInteger)arg0 frame:(struct CGRect )arg1 ;
-(struct CGRect )rootContentViewMaskRect;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherShelfPresentationAttributes )presentationAttributesForShelf:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif