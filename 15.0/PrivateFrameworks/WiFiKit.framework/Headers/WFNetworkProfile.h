// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNETWORKPROFILE_H
#define WFNETWORKPROFILE_H

@class NSString, NSDate, NSArray, NSDictionary;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface WFNetworkProfile : NSObject <NSMutableCopying>



@property (nonatomic, getter=isDNSHeuristicsFiltered) BOOL DNSHeuristicsFiltered; // ivar: _DNSHeuristicsFiltered
@property (retain, nonatomic) NSString *HS20AccountName; // ivar: _HS20AccountName
@property (retain, nonatomic) NSString *HS20Badge; // ivar: _HS20Badge
@property (nonatomic, getter=isHS20Network) BOOL HS20Network; // ivar: _HS20Network
@property (nonatomic, getter=isHS20NetworkProvisioned) BOOL HS20NetworkProvisioned; // ivar: _HS20NetworkProvisioned
@property (nonatomic) *__SecIdentity TLSIdentity; // ivar: _TLSIdentity
@property (readonly, nonatomic) NSDate *addedDate; // ivar: _addedDate
@property (nonatomic, getter=isAdhoc) BOOL adhoc; // ivar: _adhoc
@property (nonatomic, getter=isAutoJoinEnabled) BOOL autoJoinEnabled; // ivar: _autoJoinEnabled
@property (readonly, nonatomic, getter=isAutoLoginEnabled) BOOL autoLoginEnabled; // ivar: _autoLoginEnabled
@property (retain, nonatomic) NSString *bssid; // ivar: _bssid
@property (nonatomic) BOOL canExposeIMSI; // ivar: _canExposeIMSI
@property (nonatomic, getter=isCaptive) BOOL captive; // ivar: _captive
@property (nonatomic, getter=isCarPlay) BOOL carPlay; // ivar: _carPlay
@property (nonatomic) NSInteger carPlayType; // ivar: _carPlayType
@property (copy, nonatomic) NSString *carPlayUUID; // ivar: _carPlayUUID
@property (nonatomic, getter=isCarrierBased) BOOL carrierBased; // ivar: _carrierBased
@property (readonly, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (retain, nonatomic) NSDictionary *enterpriseProfile; // ivar: _enterpriseProfile
@property (nonatomic) BOOL fetchedPassword; // ivar: _fetchedPassword
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSString *hotspotDeviceIdentifier; // ivar: _hotspotDeviceIdentifier
@property (nonatomic, getter=isInstantHotspotJoin) BOOL instantHotspotJoin; // ivar: _instantHotspotJoin
@property (readonly, nonatomic, getter=isInSaveDataMode) BOOL isInSaveDataMode; // ivar: _isInSaveDataMode
@property (readonly, nonatomic, getter=isPrivacyProxyEnabled) BOOL isPrivacyProxyEnabled; // ivar: _isPrivacyProxyEnabled
@property (readonly, nonatomic) NSDate *lastAutoJoinDate; // ivar: _lastAutoJoinDate
@property (readonly, nonatomic, getter=isManaged) BOOL managed; // ivar: _managed
@property (readonly, copy, nonatomic, getter=networkQualityDate) NSDate *networkQualityDate; // ivar: _networkQualityDate
@property (readonly, nonatomic, getter=networkQualityResponsiveness) CGFloat networkQualityResponsiveness; // ivar: _networkQualityResponsiveness
@property (copy, nonatomic) NSString *originatorBundleIdentifier; // ivar: _originatorBundleIdentifier
@property (copy, nonatomic) NSString *originatorName; // ivar: _originatorName
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic, getter=isPersonalHotspot) BOOL personalHotspot; // ivar: _personalHotspot
@property (copy, nonatomic) NSString *policyUUID; // ivar: _policyUUID
@property (readonly, nonatomic) NSString *previousPassword; // ivar: _previousPassword
@property (copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (nonatomic, getter=isRandomMACAddressEnabled) BOOL randomMACAddressEnabled; // ivar: _randomMACAddressEnabled
@property (nonatomic) BOOL requiresPassword; // ivar: _requiresPassword
@property (readonly, nonatomic) BOOL requiresUsernameAndPassword;
@property (retain, nonatomic) NSDictionary *scanAttributes; // ivar: _scanAttributes
@property (nonatomic) NSInteger securityMode; // ivar: _securityMode
@property (nonatomic) NSInteger securityModeExt; // ivar: _securityModeExt
@property (retain, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly, nonatomic) BOOL userProvidedPassword;
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)networkProfileRepresentSameNetwork:(id)arg0 toNetworkProfile:(id)arg1 ;
-(BOOL)TLSProfileCanJoin;
-(BOOL)autoJoinConfigurable;
-(BOOL)autoLoginConfigurable;
-(BOOL)canAttemptJoin;
-(BOOL)forgetable;
-(BOOL)isEnterprise;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNetwork:(id)arg0 ;
-(BOOL)networkQualityVisible;
-(BOOL)profileContainsCarrierEAPType:(id)arg0 ;
-(BOOL)profileContainsEAPAKA:(id)arg0 ;
-(BOOL)profileContainsEAPSIM:(id)arg0 ;
-(BOOL)saveDataModeConfigurable;
-(BOOL)shouldBeRemovedIfApplicationIsNoLongerInstalled;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoreWiFiProfile:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithNetworkRef:(struct __WiFiNetwork *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)networkAttributes;
-(void)dealloc;


@end


#endif