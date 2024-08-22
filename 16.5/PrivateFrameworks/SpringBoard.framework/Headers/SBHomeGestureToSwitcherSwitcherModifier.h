// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    BOOL _adjustAppLayoutsBeforeTransition;
}




-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)containerStatusBarAnimationDuration;
-(NSInteger)_appLayoutAlignmentToScrollToDuringTransition;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)_appLayoutToScrollToDuringTransition;
-(id)_dismissForEmptySwitcherResponseName;
-(id)_layoutSettings;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 multitaskingModifier:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(NSInteger)arg3 liftOffVelocity:(struct CGPoint )arg4 liftOffTranslation:(struct CGPoint )arg5 adjustAppLayoutsBeforeTransition:(BOOL)arg6 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif