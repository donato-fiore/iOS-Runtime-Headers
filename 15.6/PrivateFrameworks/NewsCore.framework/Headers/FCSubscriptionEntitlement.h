// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSUBSCRIPTIONENTITLEMENT_H
#define FCSUBSCRIPTIONENTITLEMENT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface FCSubscriptionEntitlement : NSObject

@property (readonly, nonatomic) NSNumber *appAdamID; // ivar: _appAdamID
@property (readonly, nonatomic) NSString *chargeCurrencyCode; // ivar: _chargeCurrencyCode
@property (readonly, nonatomic) NSNumber *inAppAdamID; // ivar: _inAppAdamID
@property (readonly, nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (readonly, nonatomic) BOOL isPurchaser; // ivar: _isPurchaser
@property (readonly, nonatomic) BOOL isTrialPeriod; // ivar: _isTrialPeriod
@property (readonly, nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase; // ivar: _newsAppPurchase
@property (readonly, nonatomic) NSString *servicesBundleAdamID; // ivar: _servicesBundleAdamID


-(id)description;
-(id)initWithAppAdamID:(id)arg0 inAppAdamID:(id)arg1 chargeCurrencyCode:(id)arg2 newsAppPurchase:(BOOL)arg3 isTrialPeriod:(BOOL)arg4 isPurchaser:(BOOL)arg5 servicesBundleAdamID:(id)arg6 isAmplifyUser:(BOOL)arg7 ;


@end


#endif