// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSUBSCRIPTIONENTITLEMENT_H
#define AMSSUBSCRIPTIONENTITLEMENT_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface AMSSubscriptionEntitlement : NSObject

@property (nonatomic) BOOL autoRenewEnabled; // ivar: _autoRenewEnabled
@property (nonatomic) NSInteger carrierErrorCode; // ivar: _carrierErrorCode
@property (retain, nonatomic) NSString *carrierOperatorName; // ivar: _carrierOperatorName
@property (retain, nonatomic) NSString *carrierPhoneNumber; // ivar: _carrierPhoneNumber
@property (retain, nonatomic) NSString *carrierSessionId; // ivar: _carrierSessionId
@property (nonatomic) unsigned int carrierStatus; // ivar: _carrierStatus
@property (retain, nonatomic) NSNumber *chargeStoreFrontID; // ivar: _chargeStoreFrontID
@property (retain, nonatomic) NSNumber *entitlementSourceAdamId; // ivar: _entitlementSourceAdamId
@property (retain, nonatomic) NSDate *expiration; // ivar: _expiration
@property (nonatomic) BOOL familySubscription; // ivar: _familySubscription
@property (retain, nonatomic) NSNumber *featureAccessTypeId; // ivar: _featureAccessTypeId
@property (nonatomic) BOOL freeTrialEligible; // ivar: _freeTrialEligible
@property (retain, nonatomic) NSNumber *freeTrialPeriodId; // ivar: _freeTrialPeriodId
@property (retain, nonatomic) NSNumber *inAppAdamId; // ivar: _inAppAdamId
@property (retain, nonatomic) NSString *inAppVersion; // ivar: _inAppVersion
@property (nonatomic) CGFloat initialPurchaseTimestamp; // ivar: _initialPurchaseTimestamp
@property (retain, nonatomic) NSString *offerId; // ivar: _offerId
@property (nonatomic) NSUInteger period; // ivar: _period
@property (retain, nonatomic) NSString *poolType; // ivar: _poolType
@property (retain, nonatomic) NSNumber *promoScenarioId; // ivar: _promoScenarioId
@property (nonatomic) BOOL purchaser; // ivar: _purchaser
@property (retain, nonatomic) NSDate *renewDate; // ivar: _renewDate
@property (nonatomic) CGFloat serviceBeginsTimestamp; // ivar: _serviceBeginsTimestamp
@property (nonatomic) unsigned int source; // ivar: _source
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) unsigned int status; // ivar: _status
@property (retain, nonatomic) NSNumber *subscriptionBundleId; // ivar: _subscriptionBundleId
@property (retain, nonatomic) NSString *vendorAdHocOfferId; // ivar: _vendorAdHocOfferId
@property (retain, nonatomic) NSString *vendorId; // ivar: _vendorId


-(BOOL)isEqual:(id)arg0 ;
-(id)exportObject;


@end


#endif