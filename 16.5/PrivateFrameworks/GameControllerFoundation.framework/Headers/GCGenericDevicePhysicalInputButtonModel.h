// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEPHYSICALINPUTBUTTONMODEL_H
#define GCGENERICDEVICEPHYSICALINPUTBUTTONMODEL_H



#import "GCGenericDevicePhysicalInputElementModel.h"

@interface GCGenericDevicePhysicalInputButtonModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) NSInteger sourceExtendedEventFieldIndex; // ivar: _sourceExtendedEventFieldIndex


+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif