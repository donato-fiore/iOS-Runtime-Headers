// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCENTERWINDOWPAGEPRESENTATIONSWITCHERMODIFIER_H
#define SBCENTERWINDOWPAGEPRESENTATIONSWITCHERMODIFIER_H

@class SBFFluidBehaviorSettings;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBCenterWindowPagePresentationSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    BOOL _isInAppMorphAnimation;
    SBFFluidBehaviorSettings *_defaultCriticallyDampedSettings;
}




-(BOOL)shouldAsyncRenderUntilDelay:(*CGFloat)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 toAppLayout:(id)arg1 isMorph:(BOOL)arg2 ;
-(id)transitionWillBegin;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif