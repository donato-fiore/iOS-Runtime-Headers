// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFSCANRESULT_H
#define CWFSCANRESULT_H

@class NSDictionary, NSString, NSArray, NSData, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFChannel.h"
#import "CWFNetworkProfile.h"

@interface CWFScanResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *ANQPResponse;
@property (readonly, copy, nonatomic) NSString *BSSID;
@property (readonly, copy, nonatomic) NSString *HESSID;
@property (readonly, copy, nonatomic) NSArray *NAIRealmNameList;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;
@property (readonly, nonatomic) NSArray *RSNAuthSelectors;
@property (readonly, nonatomic) NSUInteger RSNBroadcastCipher;
@property (readonly, nonatomic) int RSNCapabilities;
@property (readonly, nonatomic) NSUInteger RSNMulticastCipher;
@property (readonly, nonatomic) NSArray *RSNUnicastCiphers;
@property (readonly, nonatomic) NSInteger RSSI;
@property (readonly, copy, nonatomic) NSData *SSID;
@property (readonly, nonatomic) NSInteger WAPISubtype;
@property (readonly, nonatomic) NSArray *WPAAuthSelectors;
@property (readonly, nonatomic) NSUInteger WPAMulticastCipher;
@property (readonly, nonatomic) NSArray *WPAUnicastCiphers;
@property (readonly, nonatomic) int accessNetworkType;
@property (readonly, nonatomic) NSUInteger age;
@property (readonly, nonatomic) NSInteger airPortBaseStationModel;
@property (readonly, nonatomic) NSInteger beaconInterval;
@property (readonly, copy, nonatomic) NSString *bluetoothMAC;
@property (readonly, copy, nonatomic) NSArray *cellularNetworkInfo;
@property (readonly, copy, nonatomic) CWFChannel *channel;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *deviceID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSArray *domainNameList;
@property (readonly, nonatomic) int fastestSupportedPHYMode;
@property (readonly, copy, nonatomic) NSString *friendlyName;
@property (readonly, copy, nonatomic) NSData *informationElementData;
@property (copy, nonatomic) NSDictionary *internal; // ivar: _internal
@property (readonly, nonatomic) BOOL isAdditionalStepRequiredForAccess;
@property (readonly, nonatomic) BOOL isAmbiguousNetworkName;
@property (readonly, nonatomic) BOOL isAppleSWAP;
@property (readonly, nonatomic) BOOL isEAP;
@property (readonly, nonatomic) BOOL isEmergencyServicesReachable;
@property (readonly, nonatomic) BOOL isIBSS;
@property (readonly, nonatomic) BOOL isInternetAccessible;
@property (readonly, nonatomic) BOOL isMFPCapable;
@property (readonly, nonatomic) BOOL isMFPRequired;
@property (readonly, nonatomic) BOOL isMetered;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL isPSK;
@property (readonly, nonatomic) BOOL isPasspoint;
@property (readonly, nonatomic) BOOL isPersonalHotspot;
@property (readonly, nonatomic) BOOL isUnauthenticatedEmergencyServiceAccessible;
@property (readonly, nonatomic) BOOL isUnconfiguredAirPortBaseStation;
@property (readonly, nonatomic) BOOL isUnconfiguredDevice;
@property (readonly, nonatomic) BOOL isWAPI;
@property (readonly, nonatomic) BOOL isWEP;
@property (readonly, nonatomic) BOOL isWPA;
@property (readonly, nonatomic) BOOL isWPA2;
@property (readonly, nonatomic) BOOL isWPA3;
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (readonly, copy, nonatomic) CWFNetworkProfile *matchingKnownNetworkProfile;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSInteger noise;
@property (readonly, copy, nonatomic) NSArray *operatorFriendlyNameList;
@property (readonly, copy, nonatomic) NSString *primaryMAC;
@property (readonly, copy, nonatomic) NSSet *properties;
@property (readonly, nonatomic) BOOL providesInternetAccess;
@property (readonly, copy, nonatomic) NSArray *roamingConsortiumList;
@property (readonly, copy, nonatomic) NSDictionary *scanRecord;
@property (readonly, nonatomic) int slowestSupportedPHYMode;
@property (readonly, nonatomic) NSUInteger strongestSupportedSecurityType;
@property (readonly, nonatomic) int supportedPHYModes;
@property (readonly, nonatomic) NSUInteger supportedSecurityTypes;
@property (readonly, nonatomic) BOOL supports2GHzNetworks;
@property (readonly, nonatomic) BOOL supports5GHzNetworks;
@property (readonly, nonatomic) BOOL supportsAirPlay;
@property (readonly, nonatomic) BOOL supportsAirPlay2;
@property (readonly, nonatomic) BOOL supportsAirPrint;
@property (readonly, nonatomic) BOOL supportsCarPlay;
@property (readonly, nonatomic) BOOL supportsHomeKit;
@property (readonly, nonatomic) BOOL supportsHomeKit2;
@property (readonly, nonatomic) BOOL supportsMFi;
@property (readonly, nonatomic) BOOL supportsMFiHardwareAuth;
@property (readonly, nonatomic) BOOL supportsMFiSoftwareCertAuth;
@property (readonly, nonatomic) BOOL supportsMFiSoftwareTokenAuth;
@property (readonly, nonatomic) BOOL supportsSecureWAC;
@property (readonly, nonatomic) BOOL supportsWPS;
@property (readonly, nonatomic) BOOL supportsWoW;
@property (readonly, nonatomic) BOOL supportsiAPOverWiFi;
@property (readonly, nonatomic) NSInteger venueGroup;
@property (readonly, nonatomic) NSInteger venueType;
@property (readonly, nonatomic) NSUInteger weakestSupportedSecurityType;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScanResult:(id)arg0 ;
-(NSInteger)compareSupportedPHYModes:(id)arg0 ;
-(NSInteger)compareSupportedSecurityTypes:(id)arg0 ;
-(NSUInteger)hash;
-(id)__defaultProperties;
-(id)__descriptionForAirPortBaseStationModel:(NSInteger)arg0 ;
-(id)__descriptionForRSNAuthSel:(int)arg0 ;
-(id)__descriptionForRSNCipher:(int)arg0 ;
-(id)__descriptionForRSNIE;
-(id)__descriptionForWPAAuthSel:(int)arg0 ;
-(id)__descriptionForWPACipher:(int)arg0 ;
-(id)__descriptionForWPAIE;
-(id)__internalDictionaryFromScanRecord:(id)arg0 knownNetworkProfile:(id)arg1 includeProperties:(id)arg2 ;
-(id)__requiredProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)filteredScanResultWithProperties:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScanRecord:(id)arg0 includeProperties:(id)arg1 ;
-(id)initWithScanRecord:(id)arg0 knownNetworkProfile:(id)arg1 includeProperties:(id)arg2 ;
-(id)scanResultWithMatchingKnownNetworkProfile:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif