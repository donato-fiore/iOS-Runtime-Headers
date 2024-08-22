// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCWIFIPAYLOAD_H
#define MCWIFIPAYLOAD_H

@class NSString, NSArray, NSNumber, NSDictionary;


#import "MCPayload.h"

@interface MCWiFiPayload : MCPayload

@property (retain, nonatomic) NSString *HESSID; // ivar: _HESSID
@property (retain, nonatomic) NSArray *MCCAndMNCs; // ivar: _MCCAndMNCs
@property (retain, nonatomic) NSArray *NAIRealmNames; // ivar: _NAIRealmNames
@property (nonatomic) BOOL autoJoin; // ivar: _autoJoin
@property (retain, nonatomic) NSNumber *autoJoinNum; // ivar: _autoJoinNum
@property (nonatomic) BOOL captiveBypass; // ivar: _captiveBypass
@property (retain, nonatomic) NSNumber *captiveBypassNum; // ivar: _captiveBypassNum
@property (retain, nonatomic) NSString *certificateUUID; // ivar: _certificateUUID
@property (retain, nonatomic) NSString *credentialUUID; // ivar: _credentialUUID
@property (nonatomic) BOOL disableAssociationMACRandomization; // ivar: _disableAssociationMACRandomization
@property (retain, nonatomic) NSNumber *disableAssociationMACRandomizationNum; // ivar: _disableAssociationMACRandomizationNum
@property (retain, nonatomic) NSString *displayedOperatorName; // ivar: _displayedOperatorName
@property (retain, nonatomic) NSString *domainName; // ivar: _domainName
@property (retain, nonatomic) NSDictionary *eapClientConfig; // ivar: _eapClientConfig
@property (retain, nonatomic) NSString *encryptionType; // ivar: _encryptionType
@property (nonatomic) NSNumber *isFirstAutoJoinRestricted; // ivar: _isFirstAutoJoinRestricted
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (retain, nonatomic) NSNumber *isHiddenNum; // ivar: _isHiddenNum
@property (nonatomic) BOOL isHotspot; // ivar: _isHotspot
@property (retain, nonatomic) NSNumber *isHotspotNum; // ivar: _isHotspotNum
@property (nonatomic) BOOL isWEP; // ivar: _isWEP
@property (nonatomic) BOOL isWPA; // ivar: _isWPA
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) BOOL passwordRequired; // ivar: _passwordRequired
@property (retain, nonatomic) NSArray *payloadCertificateAnchorUUID; // ivar: _payloadCertificateAnchorUUID
@property (retain, nonatomic) NSNumber *priority; // ivar: _priority
@property (nonatomic) BOOL proxyPACFallbackAllowed; // ivar: _proxyPACFallbackAllowed
@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum; // ivar: _proxyPACFallbackAllowedNum
@property (retain, nonatomic) NSString *proxyPACURLString; // ivar: _proxyPACURLString
@property (retain, nonatomic) NSString *proxyPassword; // ivar: _proxyPassword
@property (retain, nonatomic) NSString *proxyServer; // ivar: _proxyServer
@property (retain, nonatomic) NSNumber *proxyServerPort; // ivar: _proxyServerPort
@property (nonatomic) int proxyType; // ivar: _proxyType
@property (retain, nonatomic) NSString *proxyUsername; // ivar: _proxyUsername
@property (retain, nonatomic) NSDictionary *qosMarkingConfig; // ivar: _qosMarkingConfig
@property (retain, nonatomic) NSArray *roamingConsortiumOIs; // ivar: _roamingConsortiumOIs
@property (nonatomic, getter=isServiceProviderRoamingEnabled) BOOL serviceProviderRoamingEnabled; // ivar: _serviceProviderRoamingEnabled
@property (retain, nonatomic) NSNumber *serviceProviderRoamingEnabledNum; // ivar: _serviceProviderRoamingEnabledNum
@property (retain, nonatomic) NSString *ssid; // ivar: _ssid
@property (retain, nonatomic) NSString *username; // ivar: _username
@property (nonatomic) BOOL usernameRequired; // ivar: _usernameRequired


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)_eapConfigIsValid:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isEAPSIMConfig:(id)arg0 ;
-(BOOL)_qosMarkingConfigIsValid:(id)arg0 error:(*id)arg1 ;
-(id)_createDictionaryWithAllowListKeyMigrated:(id)arg0 ;
-(id)_eapPasswordFromConfig:(id)arg0 isRequired:(*BOOL)arg1 ;
-(id)_eapUsernameFromConfig:(id)arg0 isRequired:(*BOOL)arg1 ;
-(id)_localizedEncryptionTypeString;
-(id)filterForUserEnrollmentOutError:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)userInputFields;
-(id)verboseDescription;


@end


#endif