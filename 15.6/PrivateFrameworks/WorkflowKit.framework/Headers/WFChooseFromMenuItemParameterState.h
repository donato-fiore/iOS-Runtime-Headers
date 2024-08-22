// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHOOSEFROMMENUITEMPARAMETERSTATE_H
#define WFCHOOSEFROMMENUITEMPARAMETERSTATE_H

@class NSArray;


#import "WFVariableStringParameterState.h"

@interface WFChooseFromMenuItemParameterState : WFVariableStringParameterState

@property (readonly, nonatomic) NSArray *synonyms; // ivar: _synonyms


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldSerializeAsPlainString;
-(NSUInteger)hash;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithVariableString:(id)arg0 synonyms:(id)arg1 ;
-(id)initWithVariableString:(id)arg0 userInputInsertionIndex:(NSInteger)arg1 ;
-(id)initWithVariableString:(id)arg0 userInputInsertionIndex:(NSInteger)arg1 synonyms:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif