// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATASDLHATFUNCTIONEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATASDLHATFUNCTIONEXPRESSIONMODEL_H



#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataSDLHatFunctionExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *falseExpression; // ivar: _falseExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression; // ivar: _inputMaxExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression; // ivar: _inputMinExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maskExpression; // ivar: _maskExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *trueExpression; // ivar: _trueExpression


+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif