// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSECROSSBLURMODIFIER_H
#define SBCONTINUOUSEXPOSECROSSBLURMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeCrossblurModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *fromAppLayout; // ivar: _fromAppLayout
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout


-(BOOL)_isAppLayoutDisplacedByStageAppLayout:(id)arg0 ;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toAppLayout:(id)arg2 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGRect )adjustedSpaceAccessoryViewFrame:(struct CGRect )arg0 forAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif