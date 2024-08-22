// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCENTERWINDOWDELETESWITCHERMODIFIER_H
#define SBCENTERWINDOWDELETESWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBCenterWindowDeleteSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_centerWindowAppLayout;
    SBAppLayout *_fullScreenAppLayout;
}




-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 fromAppLayout:(id)arg1 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)visibleAppLayouts;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif