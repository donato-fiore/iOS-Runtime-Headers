// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMOVEFLOATINGCONFIGURATIONFLOATINGSWITCHERMODIFIER_H
#define SBMOVEFLOATINGCONFIGURATIONFLOATINGSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    NSInteger _fromFloatingConfiguration;
    NSInteger _toFloatingConfiguration;
}




-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToResignActive;
-(id)initWithTransitionID:(id)arg0 fromFloatingConfiguration:(NSInteger)arg1 toFloatingConfiguration:(NSInteger)arg2 ;
-(id)keyboardSuppressionMode;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif