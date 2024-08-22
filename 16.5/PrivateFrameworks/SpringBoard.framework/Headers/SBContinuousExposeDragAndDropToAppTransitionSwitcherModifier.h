// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEDRAGANDDROPTOAPPTRANSITIONSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEDRAGANDDROPTOAPPTRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier : SBTransitionSwitcherModifier



-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToResignActive;
-(id)keyboardSuppressionMode;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif