// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATARUMBLEMOTORVALUEEXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATARUMBLEMOTORVALUEEXPRESSIONMODELBUILDER_H

@class NSString;


#import "GCGenericDeviceDataProcessorExpressionModelBuilder.h"

@interface GCGenericDeviceDataRumbleMotorValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *motorName; // ivar: _motorName


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif