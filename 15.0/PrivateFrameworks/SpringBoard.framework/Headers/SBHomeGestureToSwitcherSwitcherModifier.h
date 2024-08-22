// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTURETOSWITCHERSWITCHERMODIFIER_H
#define SBHOMEGESTURETOSWITCHERSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    NSInteger _startingEnvironmentMode;
    CGPoint _liftOffVelocity;
    CGPoint _liftOffTranslation;
}




-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)containerStatusBarAnimationDuration;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_appLayoutToScrollToDuringTransition;
-(id)_dismissForEmptySwitcherResponseName;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 multitaskingModifier:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(NSInteger)arg3 liftOfVelocity:(struct CGPoint )arg4 liftOffTranslation:(struct CGPoint )arg5 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif