// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef W5WIFISTATUS_H
#define W5WIFISTATUS_H

@class NSString, NSData, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "W5WiFiChannel.h"
#import "W5WiFiPreferredNetwork.h"
#import "W5WiFiScanResult.h"

@interface W5WiFiStatus : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bssid; // ivar: _bssid
@property (copy, nonatomic) NSData *btcConfig; // ivar: _btcConfig
@property (nonatomic) int btcMode; // ivar: _btcMode
@property (copy, nonatomic) NSData *btcProfiles2GHz; // ivar: _btcProfiles2GHz
@property (copy, nonatomic) NSData *btcProfiles5GHz; // ivar: _btcProfiles5GHz
@property (copy, nonatomic) NSArray *cachedScanResults; // ivar: _cachedScanResults
@property (copy, nonatomic) NSData *chainAck; // ivar: _chainAck
@property (copy, nonatomic) W5WiFiChannel *channel; // ivar: _channel
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSData *desense; // ivar: _desense
@property (copy, nonatomic) NSData *desenseLevel; // ivar: _desenseLevel
@property (copy, nonatomic) NSArray *dnsAddresses; // ivar: _dnsAddresses
@property (nonatomic) unsigned int eapolControlMode; // ivar: _eapolControlMode
@property (nonatomic) unsigned int eapolSupplicantState; // ivar: _eapolSupplicantState
@property (nonatomic) NSUInteger guardInterval; // ivar: _guardInterval
@property (copy, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) NSArray *ipv4Addresses; // ivar: _ipv4Addresses
@property (nonatomic) NSInteger ipv4ConfigMethod; // ivar: _ipv4ConfigMethod
@property (copy, nonatomic) NSString *ipv4RouterAddress; // ivar: _ipv4RouterAddress
@property (copy, nonatomic) NSArray *ipv6Addresses; // ivar: _ipv6Addresses
@property (nonatomic) NSInteger ipv6ConfigMethod; // ivar: _ipv6ConfigMethod
@property (copy, nonatomic) NSString *ipv6RouterAddress; // ivar: _ipv6RouterAddress
@property (copy, nonatomic) W5WiFiPreferredNetwork *lastJoinedPreferredNetwork; // ivar: _lastJoinedPreferredNetwork
@property (copy, nonatomic) W5WiFiScanResult *lastJoinedScanResult; // ivar: _lastJoinedScanResult
@property (copy, nonatomic) NSArray *linkQualityUpdates; // ivar: _linkQualityUpdates
@property (copy, nonatomic) NSString *macAddress; // ivar: _macAddress
@property (nonatomic) NSUInteger mcsIndex; // ivar: _mcsIndex
@property (copy, nonatomic) NSString *networkServiceID; // ivar: _networkServiceID
@property (nonatomic) NSInteger noise; // ivar: _noise
@property (nonatomic) NSUInteger numberOfSpacialStreams; // ivar: _numberOfSpacialStreams
@property (nonatomic) int opMode; // ivar: _opMode
@property (nonatomic) int phyMode; // ivar: _phyMode
@property (copy, nonatomic) NSData *power; // ivar: _power
@property (nonatomic) BOOL powerOn; // ivar: _powerOn
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) NSInteger security; // ivar: _security
@property (nonatomic) BOOL smartCCADesenseSupported; // ivar: _smartCCADesenseSupported
@property (nonatomic) BOOL smartCCADesenseUSBPresence; // ivar: _smartCCADesenseUSBPresence
@property (copy, nonatomic) NSData *ssid; // ivar: _ssid
@property (copy, nonatomic) NSString *ssidString; // ivar: _ssidString
@property (copy, nonatomic) NSArray *supportedChannels; // ivar: _supportedChannels
@property (copy, nonatomic) NSData *txChainPower; // ivar: _txChainPower
@property (nonatomic) CGFloat txRate; // ivar: _txRate


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToWiFiStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif