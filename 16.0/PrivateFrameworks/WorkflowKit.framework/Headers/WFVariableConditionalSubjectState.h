// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFVARIABLECONDITIONALSUBJECTSTATE_H
#define WFVARIABLECONDITIONALSUBJECTSTATE_H

@class WFContentProperty;


#import "WFConditionalSubjectParameterState.h"
#import "WFVariable.h"
#import "WFVariableParameterState.h"

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState

@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty; // ivar: _effectiveContentProperty
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) WFVariableParameterState *variableState; // ivar: _variableState


+(id)subjectType;
-(BOOL)isCaseInsensitive;
-(BOOL)isEnumeration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIrrational;
-(Class)contentClassProvidingContentProperty;
-(NSInteger)contentType;
-(NSUInteger)comparableTimeUnits;
-(NSUInteger)displayableTimeUnits;
-(NSUInteger)hash;
-(NSUInteger)tense;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithVariable:(id)arg0 ;
-(id)initWithVariableState:(id)arg0 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg0 ;
-(id)serializedRepresentation;
-(id)supportedComparisonOperators;
-(id)unitType;
-(void)getContentWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(id)arg0 ;


@end


#endif