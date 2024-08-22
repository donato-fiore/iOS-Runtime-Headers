// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONPAIRDEVICEREQUEST_H
#define MTSDEVICESETUPEXTENSIONPAIRDEVICEREQUEST_H

@class NSUUID, NSString;


#import "MTSDeviceSetupExtensionMessage.h"
#import "MTSDeviceSetupHome.h"

@interface MTSDeviceSetupExtensionPairDeviceRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (readonly, copy) MTSDeviceSetupHome *home; // ivar: _home
@property (readonly, copy) NSString *onboardingPayload; // ivar: _onboardingPayload


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 onboardingPayload:(id)arg1 deviceUUID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif