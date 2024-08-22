// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDECKTOFULLSCREENSWITCHERMODIFIER_H
#define SBDECKTOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"

@interface SBDeckToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _direction;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_deckModifier;
    BOOL _wantsMinificationFilter;
}




-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_appLayoutToScrollToDuringTransition;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 fullScreenAppLayout:(id)arg2 deckModifier:(id)arg3 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif