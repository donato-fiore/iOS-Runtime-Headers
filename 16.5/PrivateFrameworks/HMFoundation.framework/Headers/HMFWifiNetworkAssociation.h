// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFWIFINETWORKASSOCIATION_H
#define HMFWIFINETWORKASSOCIATION_H

@class NSString;


#import "HMFObject.h"
#import "HMFMACAddress.h"

@interface HMFWifiNetworkAssociation : HMFObject

@property (readonly) HMFMACAddress *BSSID; // ivar: _BSSID
@property (readonly) HMFMACAddress *MACAddress; // ivar: _MACAddress
@property (readonly) NSString *SSID; // ivar: _SSID
@property (readonly) NSString *gatewayIPAddress; // ivar: _gatewayIPAddress
@property (readonly) HMFMACAddress *gatewayMACAddress; // ivar: _gatewayMACAddress


-(id)initWithMACAddress:(id)arg0 SSID:(id)arg1 BSSID:(id)arg2 gatewayIPAddress:(id)arg3 gatewayMACAddress:(id)arg4 ;


@end


#endif