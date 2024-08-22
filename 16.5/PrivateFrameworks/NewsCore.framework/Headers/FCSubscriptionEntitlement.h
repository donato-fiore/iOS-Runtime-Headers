// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSUBSCRIPTIONENTITLEMENT_H
#define FCSUBSCRIPTIONENTITLEMENT_H

@class NSNumber, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface FCSubscriptionEntitlement : NSObject

@property (readonly, nonatomic) NSNumber *appAdamID; // ivar: _appAdamID
@property (readonly, nonatomic) NSString *chargeCurrencyCode; // ivar: _chargeCurrencyCode
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, nonatomic) NSNumber *inAppAdamID; // ivar: _inAppAdamID
@property (readonly, nonatomic) NSNumber *initialPurchaseTimestamp; // ivar: _initialPurchaseTimestamp
@property (readonly, nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (readonly, nonatomic) BOOL isPurchaser; // ivar: _isPurchaser
@property (readonly, nonatomic) BOOL isTrialPeriod; // ivar: _isTrialPeriod
@property (readonly, nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase; // ivar: _newsAppPurchase
@property (readonly, nonatomic) NSNumber *serviceBeginsTimestamp; // ivar: _serviceBeginsTimestamp
@property (readonly, nonatomic) NSString *servicesBundleAdamID; // ivar: _servicesBundleAdamID
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *vendorAdHocOfferID; // ivar: _vendorAdHocOfferID


-(id)description;
-(id)initWithASDEntitlement:(id)arg0 ;
-(id)initWithAppAdamID:(id)arg0 inAppAdamID:(id)arg1 chargeCurrencyCode:(id)arg2 newsAppPurchase:(BOOL)arg3 isTrialPeriod:(BOOL)arg4 isPurchaser:(BOOL)arg5 servicesBundleAdamID:(id)arg6 isAmplifyUser:(BOOL)arg7 startDate:(id)arg8 expiryDate:(id)arg9 initialPurchaseTimestamp:(id)arg10 serviceBeginsTimestamp:(id)arg11 vendorAdHocOfferID:(id)arg12 ;


@end


#endif