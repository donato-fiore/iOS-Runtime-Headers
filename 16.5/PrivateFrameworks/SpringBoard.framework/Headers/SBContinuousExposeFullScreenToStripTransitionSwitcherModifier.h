// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEFULLSCREENTOSTRIPTRANSITIONSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEFULLSCREENTOSTRIPTRANSITIONSWITCHERMODIFIER_H

@class NSString;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeFullScreenToStripTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _animationPhase;
    SBAppLayout *_outgoingAppLayout;
    NSString *_timerReason;
}




-(BOOL)shouldAllowGroupOpacityForAppLayout:(id)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(id)_overlappingModelForAppLayout:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 outgoingAppLayout:(id)arg1 ;
-(id)transitionWillBegin;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIconOverlayInAppLayout:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif