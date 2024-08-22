// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDODEVICEINFO_H
#define NDODEVICEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NDODevice.h"
#import "NDOWarranty.h"

@interface NDODeviceInfo : NSObject <NSSecureCoding>



@property (retain) NDODevice *device; // ivar: _device
@property (retain) NDOWarranty *warranty; // ivar: _warranty


+(BOOL)supportsSecureCoding;
+(id)deviceInfoWithDevice:(id)arg0 warranty:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 warranty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif