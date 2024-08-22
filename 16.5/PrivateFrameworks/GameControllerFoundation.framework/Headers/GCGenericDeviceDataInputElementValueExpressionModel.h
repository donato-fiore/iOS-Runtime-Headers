// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATAINPUTELEMENTVALUEEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATAINPUTELEMENTVALUEEXPRESSIONMODEL_H

@class NSString;


#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataInputElementValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (readonly) NSInteger scaleType; // ivar: _scaleType


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