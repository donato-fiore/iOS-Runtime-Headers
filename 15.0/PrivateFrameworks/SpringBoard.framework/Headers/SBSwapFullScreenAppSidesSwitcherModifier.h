// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWAPFULLSCREENAPPSIDESSWITCHERMODIFIER_H
#define SBSWAPFULLSCREENAPPSIDESSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSwapFullScreenAppSidesSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    NSInteger _layoutRoleToKeepOnTop;
    NSInteger _animationPhase;
}




-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 layoutRoleToKeepOnTop:(NSInteger)arg3 ;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(id)transitionWillBegin;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif