// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBANNERUNFURLTOFULLSCREENSWITCHERMODIFIER_H
#define SBBANNERUNFURLTOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBBannerUnfurlSourceContext.h"
#import "SBAppLayout.h"
#import "SBFullScreenAppLayoutSwitcherModifier.h"

@interface SBBannerUnfurlToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBBannerUnfurlSourceContext *_bannerUnfurlSourceContext;
    SBAppLayout *_fromAppLayout;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
    SBAppLayout *_toAppLayout;
    BOOL _isScalingDown;
}




-(BOOL)_isAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSInteger)backdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 bannerUnfurlSourceContext:(id)arg3 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif