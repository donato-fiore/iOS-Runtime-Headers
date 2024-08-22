// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBENTITYREMOVALCROSSBLURSWITCHERMODIFIER_H
#define SBENTITYREMOVALCROSSBLURSWITCHERMODIFIER_H

@class NSUUID;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherModifier.h"
#import "SBEntityRemovalToHomeSwitcherModifier.h"

@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _animateOpacity;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
}




-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 multitaskingModifier:(id)arg2 ;
-(id)transitionDidEnd;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif