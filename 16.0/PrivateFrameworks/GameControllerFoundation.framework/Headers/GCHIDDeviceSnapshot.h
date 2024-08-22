// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCHIDDEVICESNAPSHOT_H
#define GCHIDDEVICESNAPSHOT_H

@class NSString, NSNumber;
@protocol GCHIDDeviceAttributes, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCHIDDeviceSnapshot : NSObject <GCHIDDeviceAttributes, NSSecureCoding>



@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *product; // ivar: _product
@property (readonly) NSNumber *productID; // ivar: _productID
@property (readonly) NSString *transport; // ivar: _transport
@property (readonly) NSNumber *vendorID; // ivar: _vendorID
@property (readonly) NSNumber *versionNumber; // ivar: _versionNumber


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForHIDDeviceKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif