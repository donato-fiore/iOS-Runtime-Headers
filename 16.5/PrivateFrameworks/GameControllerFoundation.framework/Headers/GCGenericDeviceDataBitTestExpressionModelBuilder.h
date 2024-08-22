// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATABITTESTEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATABITTESTEXPRESSIONMODELBUILDER_H



#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"
#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataBitTestExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *falseExpression; // ivar: _falseExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *maskExpression; // ivar: _maskExpression
@property (nonatomic) BOOL partialMatch; // ivar: _partialMatch
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *trueExpression; // ivar: _trueExpression


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif