// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEDATACONSTANTEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATACONSTANTEXPRESSIONMODEL_H



#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataConstantExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) CGFloat value; // ivar: _value


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