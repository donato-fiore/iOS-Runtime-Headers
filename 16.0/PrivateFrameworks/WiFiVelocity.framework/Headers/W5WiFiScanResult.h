// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef W5WIFISCANRESULT_H
#define W5WIFISCANRESULT_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "W5WiFiChannel.h"

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *airPortBaseStationModelName; // ivar: _airPortBaseStationModelName
@property (nonatomic) NSInteger beaconInterval; // ivar: _beaconInterval
@property (copy, nonatomic) NSString *bssid; // ivar: _bssid
@property (copy, nonatomic) W5WiFiChannel *channel; // ivar: _channel
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (nonatomic) BOOL isAppleSWAP; // ivar: _isAppleSWAP
@property (nonatomic) BOOL isIBSS; // ivar: _isIBSS
@property (nonatomic) BOOL isPasspoint; // ivar: _isPasspoint
@property (nonatomic) BOOL isPersonalHotspot; // ivar: _isPersonalHotspot
@property (nonatomic) NSInteger noise; // ivar: _noise
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (copy, nonatomic) NSDictionary *scanRecord; // ivar: _scanRecord
@property (copy, nonatomic) NSData *ssid; // ivar: _ssid
@property (copy, nonatomic) NSString *ssidString; // ivar: _ssidString
@property (nonatomic) int supportedPHYModes; // ivar: _supportedPHYModes
@property (copy, nonatomic) NSArray *supportedSecurityTypes; // ivar: _supportedSecurityTypes
@property (nonatomic) BOOL supportsTKIPCipher; // ivar: _supportsTKIPCipher
@property (nonatomic) BOOL supportsWEPCipher; // ivar: _supportsWEPCipher


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isAirPortBaseStation:(*id)arg0 modelID:(char *)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScanResult:(id)arg0 ;
-(BOOL)supportsPHYMode:(int)arg0 ;
-(BOOL)supportsSecurity:(NSInteger)arg0 ;
-(NSInteger)strongestSupportedSecurity;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(int)fastestSupportedPHYMode;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif