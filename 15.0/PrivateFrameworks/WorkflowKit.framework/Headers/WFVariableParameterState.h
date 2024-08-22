// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLEPARAMETERSTATE_H
#define WFVARIABLEPARAMETERSTATE_H

@class NSString;
@protocol WFParameterState;

#import <Foundation/Foundation.h>

#import "WFVariable.h"

@interface WFVariableParameterState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithVariable:(id)arg0 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;


@end


#endif