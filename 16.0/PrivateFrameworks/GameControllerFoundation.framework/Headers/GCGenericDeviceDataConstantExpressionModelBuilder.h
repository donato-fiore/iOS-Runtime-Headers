// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEDATACONSTANTEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATACONSTANTEXPRESSIONMODELBUILDER_H



#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"

@interface GCGenericDeviceDataConstantExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (nonatomic) CGFloat value; // ivar: _value


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif