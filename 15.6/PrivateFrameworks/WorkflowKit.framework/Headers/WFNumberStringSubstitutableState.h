// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNUMBERSTRINGSUBSTITUTABLESTATE_H
#define WFNUMBERSTRINGSUBSTITUTABLESTATE_H

@class NSDecimalNumber, NSNumber;


#import "WFStringSubstitutableState.h"

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState

@property (readonly, nonatomic) NSDecimalNumber *decimalNumber;
@property (retain, nonatomic) NSNumber *legacyNumber; // ivar: _legacyNumber


+(Class)processingValueClass;
+(id)valueFromSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithValue:(id)arg0 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif