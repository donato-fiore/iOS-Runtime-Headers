// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNETWORKINTERFACE_H
#define WFNETWORKINTERFACE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFNetworkInterface : NSObject

@property (readonly, nonatomic) NSString *IPv4Address;
@property (readonly, nonatomic) NSString *IPv6Address;
@property (readonly, nonatomic) NSString *interfaceName; // ivar: _interfaceName


+(id)activeNetworkInterface;
+(id)defaultNetworkInterfaces;
+(id)networkInterfaceWithInterface:(id)arg0 ;
+(id)wifiNetworkInterfaces;
-(id)initWithInterface:(id)arg0 ;
-(id)ipAddressForFamily:(unsigned char)arg0 ;
-(struct __WiFiNetwork *)currentWiFiNetwork;


@end


#endif