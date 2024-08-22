// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMUTABLENETWORKPROFILE_H
#define WFMUTABLENETWORKPROFILE_H

@class NSString, NSArray, NSDictionary, NSDate;


#import "WFNetworkProfile.h"

@interface WFMutableNetworkProfile : WFNetworkProfile {
    BOOL _adhoc;
    BOOL _carrierBased;
    BOOL _personalHotspot;
    NSString *_HS20AccountName;
    NSString *_HS20Badge;
}


@property (nonatomic, getter=isHS20Network) BOOL HS20Network; // ivar: _HS20Network
@property (nonatomic, getter=isHS20NetworkProvisioned) BOOL HS20NetworkProvisioned; // ivar: _HS20NetworkProvisioned
@property (nonatomic) *__SecIdentity TLSIdentity; // ivar: _TLSIdentity
@property (nonatomic, getter=isAutoJoinEnabled) BOOL autoJoinEnabled; // ivar: _autoJoinEnabled
@property (nonatomic, getter=isAutoLoginEnabled) BOOL autoLoginEnabled; // ivar: _autoLoginEnabled
@property (retain, nonatomic) NSString *bssid; // ivar: _bssid
@property (nonatomic, getter=isCaptive) BOOL captive; // ivar: _captive
@property (retain, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (retain, nonatomic) NSDictionary *enterpriseProfile; // ivar: _enterpriseProfile
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSString *hotspotDeviceIdentifier; // ivar: _hotspotDeviceIdentifier
@property (nonatomic, getter=isInstantHotspotJoin) BOOL instantHotspotJoin; // ivar: _instantHotspotJoin
@property (nonatomic, getter=isInSaveDataMode) BOOL isInSaveDataMode; // ivar: _isInSaveDataMode
@property (nonatomic, getter=isPrivacyProxyEnabled) BOOL isPrivacyProxyEnabled; // ivar: _isPrivacyProxyEnabled
@property (retain, nonatomic) NSDate *lastAssociationDate; // ivar: _lastAssociationDate
@property (nonatomic, getter=isManaged) BOOL managed; // ivar: _managed
@property (copy, nonatomic, getter=networkQualityDate) NSDate *networkQualityDate; // ivar: _networkQualityDate
@property (nonatomic, getter=networkQualityResponsiveness) CGFloat networkQualityResponsiveness; // ivar: _networkQualityResponsiveness
@property (copy, nonatomic) NSString *originatorBundleIdentifier; // ivar: _originatorBundleIdentifier
@property (copy, nonatomic) NSString *originatorName; // ivar: _originatorName
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *previousPassword; // ivar: _previousPassword
@property (copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (nonatomic, getter=isRandomMACAddressEnabled) BOOL randomMACAddressEnabled; // ivar: _randomMACAddressEnabled
@property (retain, nonatomic) NSDictionary *scanAttributes; // ivar: _scanAttributes
@property (nonatomic) NSInteger securityMode; // ivar: _securityMode
@property (nonatomic) NSInteger securityModeExt; // ivar: _securityModeExt
@property (retain, nonatomic) NSString *ssid; // ivar: _ssid
@property (nonatomic) BOOL userProvidedPassword; // ivar: _userProvidedPassword
@property (copy, nonatomic) NSString *username; // ivar: _username


+(id)mutableProfileForNetwork:(id)arg0 ;
-(BOOL)isAdhoc;
-(BOOL)isCarrierBased;
-(BOOL)isPersonalHotspot;
-(id)HS20AccountName;
-(id)HS20Badge;
-(id)initWithNetwork:(id)arg0 ;
-(void)dealloc;
-(void)removePassword;


@end


#endif