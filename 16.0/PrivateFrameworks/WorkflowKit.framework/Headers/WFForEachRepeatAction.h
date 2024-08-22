// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOREACHREPEATACTION_H
#define WFFOREACHREPEATACTION_H



#import "WFRepeatAction.h"

@interface WFForEachRepeatAction : WFRepeatAction {
    NSUInteger _numberOfLoops;
}




-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)shouldRepeatWithVariableSource:(id)arg0 ;
-(NSUInteger)numberOfLoops;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 context:(id)arg1 ;
-(id)itemVariableName;
-(id)itemVariableNameWithScopeLevel:(NSUInteger)arg0 ;
-(id)outputVariableWithVariableProvider:(id)arg0 UUIDProvider:(id)arg1 ;
-(id)providedVariableNames;
-(id)repeatCollectionWithVariableSource:(id)arg0 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg0 ;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;
-(void)setRepeatCollection:(id)arg0 withVariableSource:(id)arg1 ;


@end


#endif