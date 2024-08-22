// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSMOTIONTRACKINGHIDINPUT_H
#define AXSSMOTIONTRACKINGHIDINPUT_H

@class NSString, NSDictionary, NSNumber;


#import "AXSSMotionTrackingInput.h"

@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) NSString *deviceUniqueID; // ivar: _deviceUniqueID
@property (readonly, nonatomic) NSDictionary *hidMatchingDictionary;
@property (nonatomic) BOOL mfiAuthenticated; // ivar: _mfiAuthenticated
@property (copy, nonatomic) NSNumber *productID; // ivar: _productID
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
+(id)motionTrackingHIDInputWithDevice:(id)arg0 ;
-(BOOL)isHIDDevice;
-(BOOL)supportsExpressions;
-(NSUInteger)trackingType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceUniqueID:(id)arg0 productID:(id)arg1 vendorID:(id)arg2 deviceName:(id)arg3 mfiAuthenticated:(BOOL)arg4 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(id)name;
-(id)plistDictionary;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif