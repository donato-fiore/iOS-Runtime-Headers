// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEPHYSICALINPUTDPADMODEL_H
#define GCGENERICDEVICEPHYSICALINPUTDPADMODEL_H



#import "GCGenericDevicePhysicalInputElementModel.h"

@interface GCGenericDevicePhysicalInputDpadModel : GCGenericDevicePhysicalInputElementModel

@property (readonly) NSInteger sourceDownExtendedEventFieldIndex; // ivar: _sourceDownExtendedEventFieldIndex
@property (readonly) NSInteger sourceLeftExtendedEventFieldIndex; // ivar: _sourceLeftExtendedEventFieldIndex
@property (readonly) NSInteger sourceRightExtendedEventFieldIndex; // ivar: _sourceRightExtendedEventFieldIndex
@property (readonly) NSInteger sourceUpExtendedEventFieldIndex; // ivar: _sourceUpExtendedEventFieldIndex


+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif