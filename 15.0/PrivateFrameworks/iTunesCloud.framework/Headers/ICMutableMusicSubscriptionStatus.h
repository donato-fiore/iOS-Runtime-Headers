// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUTABLEMUSICSUBSCRIPTIONSTATUS_H
#define ICMUTABLEMUSICSUBSCRIPTIONSTATUS_H

@class NSString, NSArray, NSDate;


#import "ICMusicSubscriptionStatus.h"

@interface ICMutableMusicSubscriptionStatus : ICMusicSubscriptionStatus

@property (nonatomic, getter=isAdministrator) BOOL administrator;
@property (nonatomic, getter=isBundleOnwer) BOOL bundleOwner;
@property (nonatomic) NSInteger carrierBundlingErrorCode;
@property (nonatomic) NSInteger carrierBundlingStatusType;
@property (copy, nonatomic) NSString *cellularOperatorName;
@property (nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible;
@property (nonatomic, getter=isEligibleForFreeTrial) BOOL eligibleForFreeTrial;
@property (copy, nonatomic) NSArray *eligibleOffers;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL hasFamily;
@property (nonatomic) BOOL hasFamilyGreaterThanOneMember;
@property (nonatomic) BOOL hasOfflineSlots;
@property (nonatomic, getter=isHeadOfHousehold) BOOL headOfHousehold;
@property (nonatomic, getter=isInFreeTrial) BOOL inFreeTrial;
@property (nonatomic, getter=isMatchEnabled) BOOL matchEnabled;
@property (nonatomic, getter=isMinorAccountHolder) BOOL minorAccountHolder;
@property (nonatomic, getter=isPartOfBundle) BOOL partOfBundle;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic, getter=isPurchaser) BOOL purchaser;
@property (nonatomic) NSInteger reasonType;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) NSInteger sourceType;
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (nonatomic) NSInteger statusType;
@property (copy, nonatomic) NSArray *termsStatusList;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif