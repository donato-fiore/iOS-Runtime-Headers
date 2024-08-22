// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFARRAYPARAMETERSTATE_H
#define WFARRAYPARAMETERSTATE_H

@class NSString, NSUUID, NSArray;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFArrayParameterState : NSObject <WFParameterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(Class)processingValueClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)containedVariables;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 variableProvider:(id)arg1 parameter:(id)arg2 ;
-(id)initWithValues:(id)arg0 ;
-(id)initWithValues:(id)arg0 identity:(id)arg1 ;
-(id)serializedRepresentation;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2  ;
// -(void)processWithContext:(id)arg0 userInputRequiredHandler:(id)arg1 valueHandler:(unk)arg2 processSingleVariableStringsAsContentItems:(id)arg3  ;


@end


#endif