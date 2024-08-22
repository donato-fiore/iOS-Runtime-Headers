// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFNETWORKPROFILE_H
#define CWFNETWORKPROFILE_H

@class NSSet, NSDictionary, NSArray, NSData, NSDate, NSString, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFNetworkProfile : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSSet *BSSList;
@property (copy, nonatomic) NSDictionary *EAPProfile;
@property (copy, nonatomic) NSArray *NAIRealmNameList;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;
@property (copy, nonatomic) NSData *SSID;
@property (readonly, copy, nonatomic) NSArray *TLSTrustedServerNames;
@property (nonatomic) NSInteger WAPISubtype;
@property (nonatomic) NSInteger WEPSubtype;
@property (readonly, copy, nonatomic) NSArray *acceptedEAPTypes;
@property (nonatomic) NSInteger addReason;
@property (copy, nonatomic) NSDate *addedAt;
@property (nonatomic, getter=isAutoJoinDisabled) BOOL autoJoinDisabled;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL bypassCaptive;
@property (retain, nonatomic) NSString *cachedIdentifier; // ivar: _cachedIdentifier
@property (retain, nonatomic) NSString *cachedNetworkName; // ivar: _cachedNetworkName
@property (copy, nonatomic) NSDictionary *captiveProfile;
@property (copy, nonatomic) NSString *carplayUUID;
@property (copy, nonatomic) NSArray *cellularNetworkInfo;
@property (copy, nonatomic) NSString *displayedOperatorName;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) NSInteger hiddenState;
@property (readonly, copy, nonatomic) NSArray *innerAcceptedEAPTypes;
@property (retain, nonatomic) NSMutableDictionary *internal; // ivar: _internal
@property (readonly, nonatomic) BOOL isAmbiguousNetworkName;
@property (readonly, nonatomic) BOOL isAppBased;
@property (readonly, nonatomic) BOOL isCaptive;
@property (readonly, nonatomic) BOOL isCaptiveStateDetermined;
@property (readonly, nonatomic) BOOL isCarPlay;
@property (readonly, nonatomic) BOOL isEAP;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL isPSK;
@property (readonly, nonatomic) BOOL isPasspoint;
@property (readonly, nonatomic) BOOL isPasswordSharingSupported;
@property (readonly, nonatomic) BOOL isProfileBased;
@property (readonly, nonatomic) BOOL isTLSCertificateRequired;
@property (readonly, nonatomic) BOOL isWAPI;
@property (readonly, nonatomic) BOOL isWEP;
@property (readonly, nonatomic) BOOL isWPA;
@property (readonly, nonatomic) BOOL isWPA2;
@property (readonly, nonatomic) BOOL isWPA3;
@property (copy, nonatomic) NSDate *lastDiscoveredAt;
@property (readonly, copy, nonatomic) NSDate *lastJoinedAt;
@property (copy, nonatomic) NSDate *lastJoinedBySystemAt;
@property (copy, nonatomic) NSDate *lastJoinedByUserAt;
@property (nonatomic) NSInteger lowDataMode;
@property (nonatomic) NSInteger movingAttribute;
@property (copy, nonatomic) NSString *networkGroupID;
@property (nonatomic) NSUInteger networkGroupPriority;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (nonatomic, getter=isPasswordSharingDisabled) BOOL passwordSharingDisabled;
@property (copy, nonatomic) NSString *payloadUUID;
@property (nonatomic, getter=isPersonalHotspot) BOOL personalHotspot;
@property (copy, nonatomic) NSString *privacyProxyBlockedReason;
@property (nonatomic, getter=isPrivacyProxyEnabled) BOOL privacyProxyEnabled;
@property (readonly, copy, nonatomic) NSSet *properties;
@property (nonatomic) NSInteger publicAttribute;
@property (copy, nonatomic) NSArray *roamingConsortiumList;
@property (nonatomic, getter=isServiceProviderRoamingEnabled) BOOL serviceProviderRoamingEnabled;
@property (nonatomic, getter=isSessionBased) BOOL sessionBased;
@property (readonly, nonatomic) NSUInteger strongestSupportedSecurityType;
@property (nonatomic) NSUInteger supportedSecurityTypes;
@property (nonatomic, getter=isSystemMode) BOOL systemMode;
@property (copy, nonatomic) NSDate *updatedAt;
@property (nonatomic) BOOL useCachedIdentifier; // ivar: _useCachedIdentifier
@property (nonatomic) BOOL useCachedNetworkName; // ivar: _useCachedNetworkName
@property (copy, nonatomic) NSDictionary *userPreferredNetworkNames;
@property (copy, nonatomic) NSDictionary *userPreferredPasspointDomains;
@property (readonly, nonatomic) BOOL wasCaptive;
@property (readonly, nonatomic) NSUInteger weakestSupportedSecurityType;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNetworkProfile:(id)arg0 ;
-(NSInteger)__propertyForKey:(id)arg0 ;
-(NSInteger)compareSupportedSecurityTypes:(id)arg0 ;
-(NSInteger)compareUserPriority:(id)arg0 ;
-(NSUInteger)hash;
-(id)__defaultProperties;
-(id)__descriptionForCaptiveFlags;
-(id)__descriptionForHiddenState;
-(id)__descriptionForLowDataMode;
-(id)__descriptionForMovingAttribute;
-(id)__descriptionForPublicAttribute;
-(id)__keyForProperty:(NSInteger)arg0 ;
-(id)__requiredProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)externalForm;
-(id)filteredNetworkProfileWithProperties:(id)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalForm:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif