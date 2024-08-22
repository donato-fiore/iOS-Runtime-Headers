// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBARCSWIPESWITCHERMODIFIER_H
#define SBARCSWIPESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}




-(BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg0 ;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)appLayoutsToResignActive;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 ;
-(id)keyboardSuppressionMode;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif