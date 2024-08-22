// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFULLSCREENTOHOMEICONZOOMSWITCHERMODIFIER_H
#define SBFULLSCREENTOHOMEICONZOOMSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBCoplanarSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {
    NSUInteger _direction;
    CGRect _homeScreenIconFrame;
    CGFloat _homeScreenIconCornerRadius;
    CGFloat _homeScreenIconScale;
    BOOL _homeScreenIconLocationIsFloatingDock;
    BOOL _itemContainerOverlapsDock;
    BOOL _wantsDockWindowLevelAssertion;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    BOOL _shouldAcceleratedHomeButtonPressBegin;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (nonatomic) BOOL shouldDisableAsyncRendering; // ivar: _shouldDisableAsyncRendering
@property (nonatomic) BOOL shouldDockOrderFrontDuringTransition; // ivar: _shouldDockOrderFrontDuringTransition
@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition; // ivar: _shouldForceDefaultAnchorPointForTransition
@property (nonatomic) BOOL shouldMatchMoveToIconView; // ivar: _shouldMatchMoveToIconView
@property (nonatomic) BOOL shouldUpdateIconViewVisibility; // ivar: _shouldUpdateIconViewVisibility


-(BOOL)_isEffectivelyHome;
-(BOOL)_isIndexZoomAppLayout:(NSUInteger)arg0 ;
-(BOOL)asyncRenderingDisabled;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(CGFloat)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint )arg0 ;
-(CGFloat)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint )arg0 ;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(NSInteger)dockUpdateMode;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)dockWindowLevelPriority;
-(id)_layoutSettings;
-(id)_settingsByInterpolatingBetween:(id)arg0 and:(id)arg1 progress:(CGFloat)arg2 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 direction:(NSUInteger)arg2 ;
-(id)layoutSettingsForTargetCenter:(struct CGPoint )arg0 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGPoint )adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint )arg0 forAppLayout:(id)arg1 ;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )fullyPresentedFrameForIndex:(NSUInteger)arg0 frame:(struct CGRect )arg1 ;
-(struct SBSwitcherShelfPresentationAttributes )presentationAttributesForShelf:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif