// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVSUBSCRIPTIONSTATUS_H
#define SSVSUBSCRIPTIONSTATUS_H

@class NSNumber, NSArray, NSString, NSDictionary, NSDate;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying>

 {
    CGFloat _subscriptionExpirationTime;
}


@property (nonatomic) NSUInteger acceptedStoreTermsVersion; // ivar: _acceptedStoreTermsVersion
@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSArray *accountPermissions; // ivar: _accountPermissions
@property (nonatomic) NSInteger accountStatus; // ivar: _accountStatus
@property (nonatomic) NSInteger carrierBundlingErrorCode; // ivar: _carrierBundlingErrorCode
@property (nonatomic) NSInteger carrierBundlingStatus; // ivar: _carrierBundlingStatus
@property (copy, nonatomic) NSString *cellularOperatorName; // ivar: _cellularOperatorName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible; // ivar: _discoveryModeEligible
@property (nonatomic, getter=isFamilyOrganizer) BOOL familyOrganizer; // ivar: _familyOrganizer
@property (nonatomic, getter=isFamilySubscription) BOOL familySubscription; // ivar: _familySubscription
@property (nonatomic, getter=isFreeTrialIneligible) BOOL freeTrialIneligible; // ivar: _freeTrialIneligible
@property (nonatomic) BOOL hasFamily; // ivar: _hasFamily
@property (nonatomic) BOOL hasFamilyMembers; // ivar: _hasFamilyMembers
@property (readonly, nonatomic) BOOL hasOfflineSlot; // ivar: _hasOfflineSlot
@property (nonatomic) BOOL hasOfflineSlots; // ivar: _hasOfflineSlots
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger latestStoreTermsVersion; // ivar: _latestStoreTermsVersion
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSDictionary *rawResponseData; // ivar: _rawResponseData
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (copy, nonatomic) NSDate *subscriptionExpirationDate;
@property (nonatomic, getter=isSubscriptionPurchaser) BOOL subscriptionPurchaser; // ivar: _subscriptionPurchaser
@property (readonly) Class superclass;


-(BOOL)isEqualToStatus:(id)arg0 ;
-(id)copyUserDefaultsRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithUserDefaultsRepresentation:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)resetAccountBasedProperties;
-(void)resetCarrierBundlingProperties;
-(void)setValuesUsingStatusDictionary:(id)arg0 ;


@end


#endif