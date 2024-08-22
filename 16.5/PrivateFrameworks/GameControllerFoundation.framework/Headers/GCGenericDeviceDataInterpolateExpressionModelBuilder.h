// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATAINTERPOLATEEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATAINTERPOLATEEXPRESSIONMODELBUILDER_H



#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"
#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataInterpolateExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression; // ivar: _inputMaxExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression; // ivar: _inputMinExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression; // ivar: _outputMaxExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression; // ivar: _outputMinExpression


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif