// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBENTITYREMOVALTOHOMESWITCHERMODIFIER_H
#define SBENTITYREMOVALTOHOMESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBSwitcherModifier.h"

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    CGFloat _homeAnimationDelay;
    BOOL _canAnimateHomeScreenStyle;
}




-(BOOL)isContainerStatusBarVisible;
-(BOOL)isContentStatusBarVisible;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)wantsDockWindowLevelAssertion;
-(CGFloat)dockProgress;
-(CGFloat)homeScreenAlpha;
-(CGFloat)homeScreenBackdropBlurProgress;
-(CGFloat)homeScreenDimmingAlpha;
-(CGFloat)homeScreenScale;
-(CGFloat)wallpaperScale;
-(NSInteger)dockUpdateMode;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_cornerRadiusSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 homeAnimationDelay:(CGFloat)arg1 multitaskingModifier:(id)arg2 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;


@end


#endif