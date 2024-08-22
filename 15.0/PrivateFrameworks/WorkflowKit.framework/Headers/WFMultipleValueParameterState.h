// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMULTIPLEVALUEPARAMETERSTATE_H
#define WFMULTIPLEVALUEPARAMETERSTATE_H



#import "WFVariableSubstitutableParameterState.h"

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState



+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)containedVariables;
-(id)stateByAppendingValue:(id)arg0 ;
-(id)stateByInsertingValueAtIndex:(NSUInteger)arg0 withValue:(id)arg1 ;
-(id)stateByRemovingValueAtIndex:(NSUInteger)arg0 ;
-(id)stateByReplacingValueAtIndex:(NSUInteger)arg0 withValue:(id)arg1 ;
-(id)stateByTogglingValue:(id)arg0 ;
-(void)finishProcessingWithContent:(id)arg0 error:(id)arg1 forParameterStateClass:(Class)arg2 valueHandler:(id)arg3 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif