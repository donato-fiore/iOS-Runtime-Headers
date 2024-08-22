// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENTOHOMEICONZOOMSWITCHERMODIFIER_H
#define SBFULLSCREENTOHOMEICONZOOMSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBCoplanarSwitcherModifier.h"

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
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


@property (nonatomic) BOOL shouldMatchMoveToIconView; // ivar: _shouldMatchMoveToIconView
@property (nonatomic) BOOL shouldUpdateIconViewVisibility; // ivar: _shouldUpdateIconViewVisibility


-(BOOL)_isEffectivelyHome;
-(BOOL)_isIndexZoomAppLayout:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(CGFloat)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint )arg0 ;
-(CGFloat)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint )arg0 ;
-(CGFloat)dockProgress;
-(CGFloat)dockWindowLevel;
-(CGFloat)homeScreenAlpha;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(NSUInteger)dockWindowLevelPriority;
-(id)_layoutSettings;
-(id)_settingsByInterpolatingBetween:(id)arg0 and:(id)arg1 progress:(CGFloat)arg2 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 direction:(NSUInteger)arg2 ;
-(id)layoutSettingsForTargetCenter:(struct CGPoint )arg0 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )fullyPresentedFrameForIndex:(NSUInteger)arg0 frame:(struct CGRect )arg1 ;
-(struct SBSwitcherShelfPresentationAttributes )presentationAttributesForShelf:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif