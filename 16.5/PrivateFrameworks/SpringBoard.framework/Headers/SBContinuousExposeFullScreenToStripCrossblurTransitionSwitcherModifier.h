// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEFULLSCREENTOSTRIPCROSSBLURTRANSITIONSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEFULLSCREENTOSTRIPCROSSBLURTRANSITIONSWITCHERMODIFIER_H

@class NSString;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeFullScreenToStripCrossblurTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    NSInteger _animationPhase;
    NSString *_timerReason;
    CGRect _toAppLayoutInitialFrame;
    CGFloat _toAppLayoutInitialScale;
    UIRectCornerRadii _toAppLayoutInitialCornerRadius;
}




-(BOOL)shouldAllowGroupOpacityForAppLayout:(id)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(id)_updateLayoutWithAnimationUpdateMode:(NSInteger)arg0 appendResponse:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 toAppLayout:(id)arg1 fromAppLayout:(id)arg2 ;
-(id)transitionWillUpdate;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif