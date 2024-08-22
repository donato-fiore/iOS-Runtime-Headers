// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPEXTENSIONSELECTWIFINETWORKREQUEST_H
#define MTSDEVICESETUPEXTENSIONSELECTWIFINETWORKREQUEST_H

@class NSArray;


#import "MTSDeviceSetupExtensionMessage.h"

@interface MTSDeviceSetupExtensionSelectWiFiNetworkRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *wifiScanResults; // ivar: _wifiScanResults


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWiFiScanResults:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif