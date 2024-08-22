// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONCONFIGUREDEVICEREQUEST_H
#define MTSDEVICESETUPEXTENSIONCONFIGUREDEVICEREQUEST_H

@class NSString;


#import "MTSDeviceSetupExtensionMessage.h"
#import "MTSDeviceSetupRoom.h"

@interface MTSDeviceSetupExtensionConfigureDeviceRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSString *deviceName; // ivar: _deviceName
@property (readonly, copy) MTSDeviceSetupRoom *deviceRoom; // ivar: _deviceRoom


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 deviceRoom:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif