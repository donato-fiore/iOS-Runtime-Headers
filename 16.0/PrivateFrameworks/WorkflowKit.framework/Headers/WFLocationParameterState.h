// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLOCATIONPARAMETERSTATE_H
#define WFLOCATIONPARAMETERSTATE_H



#import "WFVariableSubstitutableParameterState.h"

@interface WFLocationParameterState : WFVariableSubstitutableParameterState



+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithValue:(id)arg0 ;
-(void)getContentCollectionWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getContentItemFromValue:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif