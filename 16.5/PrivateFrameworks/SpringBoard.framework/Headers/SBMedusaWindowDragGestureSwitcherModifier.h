// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDUSAWINDOWDRAGGESTURESWITCHERMODIFIER_H
#define SBMEDUSAWINDOWDRAGGESTURESWITCHERMODIFIER_H

@class NSString;
@protocol SBMedusaWindowDragGestureDestinationModifierDelegate;


#import "SBGestureSwitcherModifier.h"
#import "SBMedusaWindowDragGestureDestinationModifier.h"
#import "SBDisplayItem.h"
#import "SBAppLayout.h"

@interface SBMedusaWindowDragGestureSwitcherModifier : SBGestureSwitcherModifier <SBMedusaWindowDragGestureDestinationModifierDelegate>

 {
    SBMedusaWindowDragGestureDestinationModifier *_destinationModifier;
    CGPoint _location;
    CGPoint _translation;
    CGPoint _initialAnchorPoint;
    CGPoint _anchorPoint;
    CGFloat _progressToMaxTranslation;
    CGFloat _toHomeScreenAlpha;
    CGFloat _toHomeScreenBlurProgress;
    CGFloat _toHomeScreenDimmingAlpha;
    SBDisplayItem *_selectedDisplayItem;
    CGSize _sizeOfSelectedDisplayItem;
    BOOL _dragBeganInOtherSwitcher;
    BOOL _dragBeganInOurSwitcher;
}


@property (readonly, nonatomic) NSInteger currentFloatingConfiguration; // ivar: _currentFloatingConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBAppLayout *initialFloatingAppLayout; // ivar: _initialFloatingAppLayout
@property (readonly, nonatomic) SBAppLayout *initialMainAppLayout; // ivar: _initialMainAppLayout
@property (readonly, nonatomic) SBAppLayout *selectedLeafAppLayout; // ivar: _selectedLeafAppLayout
@property (readonly) Class superclass;


-(BOOL)_anyProposedAppLayoutContainsSelectedDisplayItem;
-(BOOL)_draggingFullScreenAppOrSplitView;
-(BOOL)_ourProposedAppLayoutContainsSelectedDisplayItem;
-(BOOL)_shouldPushInFullScreenContent;
-(BOOL)_updateHomeScreenStyleInteractively;
-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isResizeGrabberVisibleForAppLayout:(id)arg0 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)_distanceYToMaxTranslation;
-(CGFloat)_gestureProgressToMaxTranslationForTranslation:(CGFloat)arg0 ;
-(CGFloat)_platterScale;
-(CGFloat)_scaleForTranslation:(struct CGPoint )arg0 ;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)blurViewIconScaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)platterScaleForWindowDragGestureDestinationModifier:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(NSInteger)wallpaperStyle;
-(NSUInteger)currentDestination;
-(id)_appLayoutContainingSelectedDisplayItem;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 selectedLeafAppLayout:(id)arg1 initialMainAppLayout:(id)arg2 initialFloatingAppLayout:(id)arg3 initialFloatingConfiguration:(NSInteger)arg4 ;
-(id)keyboardSuppressionMode;
-(id)resizeGrabberLayoutAttributesForAppLayout:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )_boundsForDraggingAppLayout;
-(struct CGRect )_initialTransformedFrameForDraggingAppLayout;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif