// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTURETOMIXEDGRIDSWITCHERSWITCHERMODIFIER_H
#define SBHOMEGESTURETOMIXEDGRIDSWITCHERSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBMixedGridSwitcherModifier.h"

@interface SBHomeGestureToMixedGridSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    NSInteger _startingEnvironmentMode;
    CGPoint _liftOffVelocity;
    CGPoint _liftOffTranslation;
}




-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_appLayoutToScrollTo;
-(id)_dismissForEmptySwitcherResponseName;
-(id)_firstFloatingAppLayout:(id)arg0 ;
-(id)_newMixedGridModifier;
-(id)initWithTransitionID:(id)arg0 mixedGridModifier:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(NSInteger)arg3 liftOfVelocity:(struct CGPoint )arg4 liftOffTranslation:(struct CGPoint )arg5 floatingAppLayout:(id)arg6 floatingConfiguration:(NSInteger)arg7 ;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)_performBlockWhileSimulatingPostPresentationScrollViewContentOffset:(id)arg0 ;


@end


#endif