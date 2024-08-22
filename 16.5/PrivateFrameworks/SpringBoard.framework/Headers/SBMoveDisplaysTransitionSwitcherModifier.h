// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMOVEDISPLAYSTRANSITIONSWITCHERMODIFIER_H
#define SBMOVEDISPLAYSTRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBTransitionSwitcherModifierMoveDisplaysContext.h"
#import "SBAppLayout.h"

@interface SBMoveDisplaysTransitionSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBTransitionSwitcherModifierMoveDisplaysContext *moveDisplaysContext; // ivar: _moveDisplaysContext
@property (readonly, nonatomic) SBAppLayout *remainingAppLayout; // ivar: _remainingAppLayout
@property (readonly, nonatomic) BOOL remainingAppLayoutNeedsLayout; // ivar: _remainingAppLayoutNeedsLayout


-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)_appLayoutsContainingMovingDisplayItems;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionEvent:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;


@end


#endif