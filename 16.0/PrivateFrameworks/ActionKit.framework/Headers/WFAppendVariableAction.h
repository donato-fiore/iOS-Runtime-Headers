// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPENDVARIABLEACTION_H
#define WFAPPENDVARIABLEACTION_H

@class WFAction;



@interface WFAppendVariableAction : WFAction



-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(id)accessibilityName;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 context:(id)arg1 ;
-(id)outputVariableWithVariableProvider:(id)arg0 UUIDProvider:(id)arg1 ;
-(id)providedVariableNames;
-(id)variableName;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;


@end


#endif