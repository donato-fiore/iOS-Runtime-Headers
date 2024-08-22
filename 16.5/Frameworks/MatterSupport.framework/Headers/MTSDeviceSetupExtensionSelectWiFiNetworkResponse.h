// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONSELECTWIFINETWORKRESPONSE_H
#define MTSDEVICESETUPEXTENSIONSELECTWIFINETWORKRESPONSE_H



#import "MTSDeviceSetupExtensionMessage.h"
#import "MTSWiFiNetworkAssociation.h"

@interface MTSDeviceSetupExtensionSelectWiFiNetworkResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSWiFiNetworkAssociation *wifiNetworkAssociation; // ivar: _wifiNetworkAssociation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWiFiNetworkAssociation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif