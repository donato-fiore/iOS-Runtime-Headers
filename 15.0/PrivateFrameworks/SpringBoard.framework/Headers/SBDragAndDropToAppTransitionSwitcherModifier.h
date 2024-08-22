// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDRAGANDDROPTOAPPTRANSITIONSWITCHERMODIFIER_H
#define SBDRAGANDDROPTOAPPTRANSITIONSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"

@interface SBDragAndDropToAppTransitionSwitcherModifier : SBTransitionSwitcherModifier



-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToResignActive;
-(id)keyboardSuppressionMode;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif