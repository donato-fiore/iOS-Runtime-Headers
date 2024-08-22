// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONDITIONALOPERATORPARAMETER_H
#define WFCONDITIONALOPERATORPARAMETER_H

@class NSArray;


#import "WFEnumerationParameter.h"

@interface WFConditionalOperatorParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSUInteger displayableTimeUnits; // ivar: _displayableTimeUnits
@property (readonly, nonatomic) NSArray *possibleContentOperators; // ivar: _possibleContentOperators
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (readonly, nonatomic) BOOL usingLegacyOperatorBehavior; // ivar: _usingLegacyOperatorBehavior


-(BOOL)allowsMultipleValues;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(Class)stateClass;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(id)localizedLabelForPossibleState:(id)arg0 ;


@end


#endif