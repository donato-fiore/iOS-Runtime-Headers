// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBGRIDTOACTIVEAPPLAYOUTSSWITCHERMODIFIER_H
#define SBGRIDTOACTIVEAPPLAYOUTSSWITCHERMODIFIER_H

@class NSArray;


#import "SBTransitionSwitcherModifier.h"
#import "SBSwitcherModifier.h"

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    BOOL _wantsMinificationFilter;
}




-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(CGFloat)_unselectedCardScale;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenScale;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperScale;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 activeAppLayouts:(id)arg2 gridModifier:(id)arg3 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif