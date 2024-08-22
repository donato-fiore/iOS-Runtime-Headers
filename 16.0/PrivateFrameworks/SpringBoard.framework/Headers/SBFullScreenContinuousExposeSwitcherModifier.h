// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFULLSCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBFULLSCREENCONTINUOUSEXPOSESWITCHERMODIFIER_H

@class NSString, NSMutableSet;
@protocol SBSwitcherLayoutCalculationsCacheDelegate;


#import "SBSwitcherModifier.h"
#import "SBFullScreenAppLayoutSwitcherModifier.h"
#import "SBSwitcherLayoutCalculationsCache.h"
#import "SBAppLayout.h"

@interface SBFullScreenContinuousExposeSwitcherModifier : SBSwitcherModifier <SBSwitcherLayoutCalculationsCacheDelegate>

 {
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
    NSUInteger _timerEventGenerationCount;
    NSString *_expectedTimerEventReason;
    CGFloat _cached_leftStripOriginX;
    SBSwitcherLayoutCalculationsCache *_stripLayoutCache;
    NSUInteger _modifierEventGenCount;
}


@property (nonatomic) NSString *appPileBundleIDToBringForwardIfAny; // ivar: _appPileBundleIDToBringForwardIfAny
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fullScreenAppDisplacementState; // ivar: _fullScreenAppDisplacementState
@property (readonly, nonatomic) SBAppLayout *fullScreenAppLayout; // ivar: _fullScreenAppLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *highlightedByHoverAppLayouts; // ivar: _highlightedByHoverAppLayouts
@property (retain, nonatomic) NSMutableSet *highlightedByTouchAppLayouts; // ivar: _highlightedByTouchAppLayouts
@property (readonly) Class superclass;


-(BOOL)_anyDisplayItemsExceedDock;
-(BOOL)_anyItemExceedsWidthThresholdToHideStrip;
-(BOOL)_anyItemOverlapsStrip;
-(BOOL)_enableItemResizeGrabbersForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)_isGroupForAppLayoutHighlightedFromHover:(id)arg0 ;
-(BOOL)_isGroupForAppLayoutHighlightedFromTouch:(id)arg0 ;
-(BOOL)_layoutRoleIsOccluded:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)shouldConfigureInAppDockVisibleAssertion;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldScrollViewBlockTouches;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseWallpaperGradientTreatment;
-(BOOL)switcherHitTestsAsOpaque;
-(BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)arg0 ;
-(CGFloat)_effectiveStripVisibleProgress;
-(CGFloat)_leftStripOriginX;
-(CGFloat)_wallpaperDimmingForIndex:(NSUInteger)arg0 ;
-(CGFloat)_widthThresholdToHideStrip;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 withScale:(CGFloat)arg1 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dockProgress;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)touchBehaviorForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)_indexOfAppLayoutInAppLayoutsForContinuousExposeIdentifierIgnoringStage:(id)arg0 ;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)hiddenContentStatusBarPartsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRowsInGridSwitcher;
-(NSUInteger)numberOfVisibleContinuousExposeIdentifiersWhileInApp;
-(id)_appLayoutsForContinuousExposeIdentifierIgnoringStage:(id)arg0 ;
-(id)_continuousExposeIdentifiersIgnoringStage;
-(id)_currentLayoutCalculationsValidityToken;
-(id)_itemsValidForOverlapping;
-(id)_orderedVisibleAppLayouts;
-(id)_overlappingModelForAppLayout:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)buildLayoutCalculations;
-(id)continuousExposeIdentifiers;
-(id)handleEvent:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)handleHoverEvent:(id)arg0 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithFullScreenAppLayout:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )_positionForPositionIn3DContainerSpace:(struct CGPoint )arg0 layerPosition:(struct CGPoint )arg1 layerSize:(struct CGSize )arg2 layerAnchorPoint:(struct CGPoint )arg3 layerTransform:(struct CATransform3D )arg4 containerPerspective:(CGFloat)arg5 ;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )scrollViewContentOffset;
-(struct CGRect )_stripFrame;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_invalidateLeftStripOriginX;


@end


#endif