// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEMODEL_H
#define GCGENERICDEVICEMODEL_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCGenericDeviceDriverModel.h"
#import "GCGenericDevicePhysicalInputModel.h"

@interface GCGenericDeviceModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) GCGenericDeviceDriverModel *driver; // ivar: _driver
@property (readonly, copy) GCGenericDevicePhysicalInputModel *physicalInput; // ivar: _physicalInput
@property (readonly, copy) NSString *productCategory; // ivar: _productCategory
@property (readonly, copy) NSString *productName; // ivar: _productName


+(BOOL)supportsSecureCoding;
+(id)description;
+(id)modelWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif