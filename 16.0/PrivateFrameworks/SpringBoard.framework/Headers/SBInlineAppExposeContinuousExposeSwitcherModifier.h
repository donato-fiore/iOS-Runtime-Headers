// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINLINEAPPEXPOSECONTINUOUSEXPOSESWITCHERMODIFIER_H
#define SBINLINEAPPEXPOSECONTINUOUSEXPOSESWITCHERMODIFIER_H

@class NSString, NSMutableSet;


#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBFullScreenAppLayoutSwitcherModifier.h"

@interface SBInlineAppExposeContinuousExposeSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *activeAppLayout; // ivar: _activeAppLayout
@property (readonly, copy, nonatomic) NSString *appExposeBundleIdentifier; // ivar: _appExposeBundleIdentifier
@property (retain, nonatomic) SBFullScreenAppLayoutSwitcherModifier *fullScreenAppLayoutModifier; // ivar: _fullScreenAppLayoutModifier
@property (retain, nonatomic) NSMutableSet *highlightedByHoverAppLayouts; // ivar: _highlightedByHoverAppLayouts
@property (retain, nonatomic) NSMutableSet *highlightedByTouchAppLayouts; // ivar: _highlightedByTouchAppLayouts


-(BOOL)_isLayoutRoleOccluded:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isContainerStatusBarVisible;
-(BOOL)isHomeAffordanceSupportedForAppLayout:(id)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleEligibleForContentDragSpringLoading:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldAllowContentViewTouchesForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldScrollViewBlockTouches;
-(BOOL)shouldSuppressHighlightEffectForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)switcherHitTestsAsOpaque;
-(BOOL)wantsSpaceAccessoryViewPointerInteractionsForAppLayout:(id)arg0 ;
-(CGFloat)_scaleForActiveAppLayoutLeafAppLayouts;
-(CGFloat)_scaleForInlineAppExposeAppLayouts;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dockProgress;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
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
-(NSUInteger)_maximumNumberOfInlineAppExposeAppLayouts;
-(NSUInteger)_maximumNumberOfInlineAppExposeColumns;
-(NSUInteger)_maximumNumberOfInlineAppExposeRows;
-(NSUInteger)_numberOfInlineAppExposeAppLayouts;
-(NSUInteger)_numberOfInlineAppExposeColumns;
-(NSUInteger)_numberOfInlineAppExposeRows;
-(NSUInteger)activeCornersForTouchResizeForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)hiddenContentStatusBarPartsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)_inlineAppExposeAppLayouts;
-(id)_overlappingModelForAppLayout:(id)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)adjustedContinuousExposeIdentifiersForIdentifiers:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithActiveAppLayout:(id)arg0 appExposeBundleIdentifier:(id)arg1 ;
-(id)visibleAppLayouts;
-(struct CGRect )_inlineAppExposeSwitcherFrame;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif