// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATASDLHATFUNCTIONEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATASDLHATFUNCTIONEXPRESSIONMODELBUILDER_H



#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"
#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataSDLHatFunctionExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *falseExpression; // ivar: _falseExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression; // ivar: _inputMaxExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression; // ivar: _inputMinExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *maskExpression; // ivar: _maskExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *trueExpression; // ivar: _trueExpression


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif