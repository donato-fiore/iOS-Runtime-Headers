// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNUMBERSUBSTITUTABLESTATE_H
#define WFNUMBERSUBSTITUTABLESTATE_H

@class NSNumber;


#import "WFVariableSubstitutableParameterState.h"

@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) NSNumber *number;


+(Class)processingValueClass;
+(id)serializedRepresentationFromNumber:(id)arg0 ;
+(id)serializedRepresentationFromValue:(id)arg0 ;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithNumber:(id)arg0 ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif