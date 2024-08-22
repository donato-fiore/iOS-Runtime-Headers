// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGESTURETOSTASHEDFLOATINGSWITCHERMODIFIER_H
#define SBHOMEGESTURETOSTASHEDFLOATINGSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBHomeGestureToStashedFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    NSInteger _floatingConfiguration;
}




-(CGFloat)_tongueScale;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 toFloatingConfiguration:(NSInteger)arg2 ;
-(struct CGRect )containerViewBounds;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif