// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFROWTEMPLATEPARAMETERSTATE_H
#define WFROWTEMPLATEPARAMETERSTATE_H

@class NSString, NSArray, WFContentProperty, NSUUID;
@protocol WFParameterState;

#import <Foundation/Foundation.h>

#import "WFDateSubstitutableState.h"
#import "WFBooleanSubstitutableState.h"
#import "WFByteCountUnitSubstitutableState.h"
#import "WFCalendarUnitSubstitutableState.h"
#import "WFVariableStringParameterState.h"
#import "WFVariableSubstitutableParameterState.h"
#import "WFNumberStringSubstitutableState.h"

@interface WFRowTemplateParameterState : NSObject <WFParameterState>

 {
    NSString *_propertyName;
}


@property (readonly, nonatomic) WFDateSubstitutableState *anotherDateValue; // ivar: _anotherDateValue
@property (readonly, nonatomic) WFBooleanSubstitutableState *booleanValue; // ivar: _booleanValue
@property (readonly, nonatomic) BOOL bounded; // ivar: _bounded
@property (readonly, nonatomic) WFByteCountUnitSubstitutableState *byteCountUnitValue; // ivar: _byteCountUnitValue
@property (readonly, nonatomic) WFCalendarUnitSubstitutableState *calendarUnitValue; // ivar: _calendarUnitValue
@property (readonly, nonatomic) NSInteger comparisonOperator; // ivar: _comparisonOperator
@property (readonly, nonatomic) Class contentItemClass; // ivar: _contentItemClass
@property (readonly, copy, nonatomic) NSArray *contentProperties; // ivar: _contentProperties
@property (readonly, nonatomic) WFContentProperty *contentProperty; // ivar: _contentProperty
@property (readonly, nonatomic) WFDateSubstitutableState *dateValue; // ivar: _dateValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFVariableStringParameterState *emailValue; // ivar: _emailValue
@property (readonly, nonatomic) WFVariableSubstitutableParameterState *enumerationValue; // ivar: _enumerationValue
@property (readonly, copy, nonatomic) NSArray *filterableProperties;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly, nonatomic) WFNumberStringSubstitutableState *numberValue; // ivar: _numberValue
@property (readonly, nonatomic) WFVariableStringParameterState *phoneValue; // ivar: _phoneValue
@property (readonly, nonatomic) BOOL removable; // ivar: _removable
@property (readonly, nonatomic) WFVariableStringParameterState *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


+(Class)processingValueClass;
+(id)dictionaryForSerializedValue:(id)arg0 withLinkValueType:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValueWithInfoDisplayed:(struct WFRowTemplateValueInfo *)arg0 ;
-(id)actualCopyWithZone:(struct _NSZone *)arg0 ;
-(id)actualCopyWithZone:(struct _NSZone *)arg0 propertyName:(id)arg1 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultStateForInfo:(struct WFRowTemplateValueInfo *)arg0 ;
-(id)initWithPropertyName:(id)arg0 contentItemClass:(Class)arg1 comparisonOperator:(NSInteger)arg2 removable:(BOOL)arg3 bounded:(BOOL)arg4 hidden:(BOOL)arg5 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 contentItemClass:(Class)arg3 variablesDisabled:(BOOL)arg4 linkValueType:(id)arg5 ;
-(id)serializedRepresentation;
-(id)stateBySettingAnotherDateValue:(id)arg0 ;
-(id)stateBySettingBooleanValue:(id)arg0 ;
-(id)stateBySettingByteCountUnitValue:(id)arg0 ;
-(id)stateBySettingCalendarUnitValue:(id)arg0 ;
-(id)stateBySettingComparisonOperator:(NSInteger)arg0 ;
-(id)stateBySettingContentProperty:(id)arg0 ;
-(id)stateBySettingDateValue:(id)arg0 ;
-(id)stateBySettingEmailValue:(id)arg0 ;
-(id)stateBySettingEnumerationValue:(id)arg0 ;
-(id)stateBySettingNumberValue:(id)arg0 ;
-(id)stateBySettingPhoneValue:(id)arg0 ;
-(id)stateBySettingStringValue:(id)arg0 ;
-(id)stateBySettingVariablesDisabled:(BOOL)arg0 ;
// -(void)getUserInputRequiredValue:(id)arg0 context:(unk)arg1  ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif