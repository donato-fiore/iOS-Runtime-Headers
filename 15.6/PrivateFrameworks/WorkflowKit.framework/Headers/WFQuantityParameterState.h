// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFQUANTITYPARAMETERSTATE_H
#define WFQUANTITYPARAMETERSTATE_H

@class NSString;
@protocol WFParameterState;

#import <Foundation/Foundation.h>

#import "WFNumberStringSubstitutableState.h"

@interface WFQuantityParameterState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFNumberStringSubstitutableState *magnitudeState; // ivar: _magnitudeState
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *unitString; // ivar: _unitString


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMagnitudeState:(id)arg0 unitString:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif