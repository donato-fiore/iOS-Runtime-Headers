// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAPPDESCRIPTORPARAMETERSTATE_H
#define WFAPPDESCRIPTORPARAMETERSTATE_H



#import "WFVariableSubstitutableParameterState.h"

@interface WFAppDescriptorParameterState : WFVariableSubstitutableParameterState



+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif