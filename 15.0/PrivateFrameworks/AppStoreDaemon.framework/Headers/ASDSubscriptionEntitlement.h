// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDSUBSCRIPTIONENTITLEMENT_H
#define ASDSUBSCRIPTIONENTITLEMENT_H

@class NSDictionary, NSNumber, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding>

 {
    NSDictionary *_dictionary;
    NSUInteger _segment;
}


@property (readonly, copy) NSNumber *appAdamID;
@property (readonly, copy) NSNumber *appVersion;
@property (readonly) BOOL autoRenewEnabled;
@property (readonly, copy) NSString *chargeCountryCode;
@property (readonly, copy) NSString *chargeCurrencyCode;
@property (readonly, copy) NSNumber *chargeStoreFrontID;
@property (readonly, copy) NSNumber *entitlementSourceAdamID;
@property (readonly, copy) NSDate *expiryDate;
@property (readonly, copy) NSNumber *familyID;
@property (readonly, copy) NSNumber *featureAccessTypeID;
@property (readonly, copy) NSNumber *freeTrialPeriodID;
@property (readonly, copy) NSNumber *inAppAdamID;
@property (readonly, copy) NSString *inAppVersion;
@property (readonly, copy) NSNumber *initialPurchaseTimestamp;
@property (readonly) BOOL isInGracePeriod;
@property (readonly) BOOL isOfferPeriod;
@property (readonly) BOOL isPurchaser;
@property (readonly) BOOL isTrialPeriod;
@property (readonly, getter=isNewsAppPurchase) BOOL newsAppPurchase;
@property (readonly, copy) NSString *offerID;
@property (readonly, copy) NSNumber *originalPurchaseDownloadID;
@property (readonly, copy) NSString *poolType;
@property (readonly, copy) NSNumber *promoScenarioID;
@property (readonly, copy) NSNumber *purchasabilityType;
@property (readonly, copy) NSNumber *purchaseDownloadID;
@property (readonly, copy) NSNumber *quantity;
@property (readonly) NSUInteger segment;
@property (readonly, copy) NSNumber *serviceBeginsTimestamp;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSNumber *subscriptionBundleID;
@property (readonly, copy) NSString *vendorAdHocOfferID;
@property (readonly, copy) NSString *vendorID;


+(BOOL)supportsSecureCoding;
-(id)_dateFromDateString:(id)arg0 ;
-(id)_valueForKey:(id)arg0 ofType:(Class)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 forAppAdamID:(id)arg1 segment:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif