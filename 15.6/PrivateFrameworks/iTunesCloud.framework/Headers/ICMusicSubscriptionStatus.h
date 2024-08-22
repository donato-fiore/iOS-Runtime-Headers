// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONSTATUS_H
#define ICMUSICSUBSCRIPTIONSTATUS_H

@class NSNumber, NSString, NSDictionary, NSArray, NSDate;
@protocol NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

 {
    BOOL _isPartOfBundle;
    BOOL _isBundleOwner;
}


@property (readonly, copy, nonatomic) NSNumber *acceptSilentAuth; // ivar: _acceptSilentAuth
@property (readonly, nonatomic, getter=isAdministrator) BOOL administrator; // ivar: _isAdministrator
@property (readonly, nonatomic, getter=isBundleOnwer) BOOL bundleOwner; // ivar: _bundleOwner
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, nonatomic) NSInteger carrierBundlingErrorCode; // ivar: _carrierBundlingErrorCode
@property (readonly, nonatomic) NSInteger carrierBundlingStatusType; // ivar: _carrierBundlingStatusType
@property (readonly, copy, nonatomic) NSString *cellularOperatorName; // ivar: _cellularOperatorName
@property (readonly, nonatomic, getter=isCloudMusicServiceEnabled) BOOL cloudMusicServiceEnabled;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible; // ivar: _isDiscoveryModeEligible
@property (readonly, nonatomic, getter=isEligibleForFreeTrial) BOOL eligibleForFreeTrial; // ivar: _isEligibleForFreeTrial
@property (readonly, copy, nonatomic) NSArray *eligibleOffers; // ivar: _eligibleOffers
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasAddToCloudLibraryCapability;
@property (readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
@property (readonly, nonatomic) BOOL hasFamily; // ivar: _hasFamily
@property (readonly, nonatomic) BOOL hasFamilyGreaterThanOneMember; // ivar: _hasFamilyGreaterThanOneMember
@property (readonly, nonatomic) BOOL hasOfflineSlots; // ivar: _hasOfflineSlots
@property (readonly, nonatomic, getter=isHeadOfHousehold) BOOL headOfHousehold; // ivar: _isHeadOfHousehold
@property (readonly, nonatomic, getter=isInFreeTrial) BOOL inFreeTrial; // ivar: _isInFreeTrial
@property (readonly, nonatomic, getter=isInGlidePreview) BOOL inGlidePreview; // ivar: _isInGlidePreview
@property (readonly, nonatomic, getter=isMatchEnabled) BOOL matchEnabled; // ivar: _isMatchEnabled
@property (readonly, nonatomic, getter=isMinorAccountHolder) BOOL minorAccountHolder; // ivar: _isMinorAccountHolder
@property (readonly, nonatomic, getter=isPartOfBundle) BOOL partOfBundle; // ivar: _partOfBundle
@property (readonly, copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic, getter=isPurchaser) BOOL purchaser; // ivar: _isPurchaser
@property (readonly, nonatomic) NSInteger reasonType; // ivar: _reasonType
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly, nonatomic) NSInteger statusType; // ivar: _statusType
@property (readonly, copy, nonatomic) NSArray *termsStatusList; // ivar: _termsStatusList


+(BOOL)supportsSecureCoding;
+(NSUInteger)_capabilitiesForStatusType:(NSInteger)arg0 carrierBundlingStatusType:(NSInteger)arg1 isMatchEnabled:(BOOL)arg2 ;
-(BOOL)hasCapability:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStatus:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_copySubscriptionStatusPropertiesToStatus:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif