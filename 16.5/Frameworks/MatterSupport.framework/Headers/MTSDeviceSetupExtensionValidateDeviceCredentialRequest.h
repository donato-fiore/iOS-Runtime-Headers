// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONVALIDATEDEVICECREDENTIALREQUEST_H
#define MTSDEVICESETUPEXTENSIONVALIDATEDEVICECREDENTIALREQUEST_H



#import "MTSDeviceSetupExtensionMessage.h"
#import "MTSDeviceCredential.h"

@interface MTSDeviceSetupExtensionValidateDeviceCredentialRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceCredential *deviceCredential; // ivar: _deviceCredential


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceCredential:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif