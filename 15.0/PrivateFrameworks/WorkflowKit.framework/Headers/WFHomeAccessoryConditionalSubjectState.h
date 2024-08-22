// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHOMEACCESSORYCONDITIONALSUBJECTSTATE_H
#define WFHOMEACCESSORYCONDITIONALSUBJECTSTATE_H

@class HMCharacteristic, NSFormatter, HMHome, NSDictionary, HMService;


#import "WFConditionalSubjectParameterState.h"
#import "WFHMCharacteristicSubstitutableState.h"
#import "WFHMServiceParameterState.h"

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState; // ivar: _characteristicSubstitutableState
@property (retain, nonatomic) NSFormatter *characteristicValueFormatter; // ivar: _characteristicValueFormatter
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) BOOL negatesValue; // ivar: _negatesValue
@property (retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState; // ivar: _serializedWFHMCharacteristicSubstitutableState
@property (retain, nonatomic) NSDictionary *serializedWFHMServiceParameter; // ivar: _serializedWFHMServiceParameter
@property (readonly, nonatomic) HMService *service;
@property (retain, nonatomic) WFHMServiceParameterState *serviceParameterState; // ivar: _serviceParameterState


+(id)subjectType;
-(BOOL)isEnumeration;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)contentType;
-(NSUInteger)hash;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithSerializedWFHMServiceParameter:(id)arg0 serializedWFHMCharacteristicSubstitutableState:(id)arg1 negatesValue:(BOOL)arg2 ;
-(id)initWithService:(id)arg0 characteristic:(id)arg1 homeIdentifier:(id)arg2 negatesValue:(BOOL)arg3 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg0 ;
-(id)maximumLength;
-(id)maximumValue;
-(id)minimumValue;
-(id)serializedRepresentation;
-(id)stepValue;
-(id)unit;
-(id)unitType;
-(void)getContentWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(id)arg0 ;


@end


#endif