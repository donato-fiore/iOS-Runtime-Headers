// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATACLAMPEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATACLAMPEXPRESSIONMODELBUILDER_H



#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"
#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataClampExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *inputExpression; // ivar: _inputExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *maxExpression; // ivar: _maxExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *minExpression; // ivar: _minExpression


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif