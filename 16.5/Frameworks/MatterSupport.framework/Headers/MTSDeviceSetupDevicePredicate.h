// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPDEVICEPREDICATE_H
#define MTSDEVICESETUPDEVICEPREDICATE_H

@class NSNumber, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSDeviceSetupDevicePredicate : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSNumber *productID; // ivar: _productID
@property (copy) NSString *serialNumber; // ivar: _serialNumber
@property (retain) NSUUID *uuid; // ivar: _uuid
@property (retain) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif