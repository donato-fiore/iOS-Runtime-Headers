// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEDATAINPUTELEMENTVALUEEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATAINPUTELEMENTVALUEEXPRESSIONMODELBUILDER_H

@class NSString;


#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"

@interface GCGenericDeviceDataInputElementValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (nonatomic) NSInteger scaleType; // ivar: _scaleType


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif