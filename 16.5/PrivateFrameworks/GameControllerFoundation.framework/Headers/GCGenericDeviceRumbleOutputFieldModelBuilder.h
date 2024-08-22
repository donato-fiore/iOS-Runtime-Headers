// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICERUMBLEOUTPUTFIELDMODELBUILDER_H
#define GCGENERICDEVICERUMBLEOUTPUTFIELDMODELBUILDER_H


#import <Foundation/Foundation.h>

#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *offsetExpression; // ivar: _offsetExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sizeExpression; // ivar: _sizeExpression
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression; // ivar: _valueExpression


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif