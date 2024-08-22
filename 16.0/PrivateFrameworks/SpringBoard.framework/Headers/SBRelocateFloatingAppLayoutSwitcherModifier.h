// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRELOCATEFLOATINGAPPLAYOUTSWITCHERMODIFIER_H
#define SBRELOCATEFLOATINGAPPLAYOUTSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBMixedGridSwitcherModifier.h"

@interface SBRelocateFloatingAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_floatingAppLayout;
    NSInteger _floatingConfiguration;
    NSInteger _direction;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    BOOL _moveFloatingAppToLeadingSide;
}




-(BOOL)_comingFromSwitcherWithLeadingFloatingApp;
-(BOOL)_goingToSwitcherWithLeadingFloatingApp;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 floatingAppLayout:(id)arg1 floatingConfiguration:(NSInteger)arg2 direction:(NSInteger)arg3 mixedGridModifier:(id)arg4 ;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;


@end


#endif