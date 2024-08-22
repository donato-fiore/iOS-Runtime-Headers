// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEDATAINTERPOLATEEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATAINTERPOLATEEXPRESSIONMODEL_H



#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataInterpolateExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression; // ivar: _inputMaxExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression; // ivar: _inputMinExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression; // ivar: _outputMaxExpression
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression; // ivar: _outputMinExpression


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