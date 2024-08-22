// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEDATAINPUTELEMENTATTRIBUTEEXPRESSIONMODEL_H
#define GCGENERICDEVICEDATAINPUTELEMENTATTRIBUTEEXPRESSIONMODEL_H

@class NSString;


#import "GCGenericDeviceDataProcessorExpressionModel.h"

@interface GCGenericDeviceDataInputElementAttributeExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *attribute; // ivar: _attribute
@property (readonly, copy) NSString *elementIdentifier; // ivar: _elementIdentifier


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