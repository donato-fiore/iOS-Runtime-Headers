// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSITIONSWITCHERMODIFIER_H
#define SBTRANSITIONSWITCHERMODIFIER_H

@class NSArray, NSUUID;


#import "SBSwitcherModifier.h"

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    BOOL _wantsResignActiveAndAsyncRenderingAssertions;
    BOOL _isTransitioningToSwitcher;
    NSArray *_appLayoutsToEnsureExist;
}


@property (readonly, nonatomic) BOOL asyncRenderingDisabled; // ivar: _asyncRenderingDisabled
@property (readonly, nonatomic) NSUUID *transitionID; // ivar: _transitionID
@property (readonly, nonatomic) NSUInteger transitionPhase; // ivar: _transitionPhase


-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isPreparingLayout;
-(BOOL)isUpdatingLayout;
-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(BOOL)shouldInterruptForRemovalEvent:(id)arg0 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToResignActive;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 ;
-(id)keyboardSuppressionMode;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif