// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATAADDEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATAADDEXPRESSIONMODELBUILDER_H



#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"
#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataAddExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *leftExpression; // ivar: _leftExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *rightExpression; // ivar: _rightExpression


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif