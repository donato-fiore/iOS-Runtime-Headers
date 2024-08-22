// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCBUNDLEENTITLEMENTSPROVIDERRESULT_H
#define FCBUNDLEENTITLEMENTSPROVIDERRESULT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface FCBundleEntitlementsProviderResult : NSObject

@property (readonly, nonatomic) NSString *bundlePurchaseID; // ivar: _bundlePurchaseID
@property (readonly, nonatomic) BOOL inTrialPeriod; // ivar: _inTrialPeriod
@property (readonly, nonatomic) NSNumber *initialPurchaseTimestamp; // ivar: _initialPurchaseTimestamp
@property (readonly, nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (readonly, nonatomic) BOOL isPurchaser; // ivar: _isPurchaser
@property (readonly, nonatomic) NSString *servicesBundlePurchaseID; // ivar: _servicesBundlePurchaseID
@property (readonly, nonatomic) NSString *vendorAdHocOfferID; // ivar: _vendorAdHocOfferID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundlePurchaseID:(id)arg0 inTrialPeriod:(BOOL)arg1 isPurchaser:(BOOL)arg2 servicesBundlePurchaseID:(id)arg3 isAmplifyUser:(BOOL)arg4 initialPurchaseTimestamp:(id)arg5 vendorAdHocOfferID:(id)arg6 ;


@end


#endif