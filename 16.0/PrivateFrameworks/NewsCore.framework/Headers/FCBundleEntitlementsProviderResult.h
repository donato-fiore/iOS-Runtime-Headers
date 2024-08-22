// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCBUNDLEENTITLEMENTSPROVIDERRESULT_H
#define FCBUNDLEENTITLEMENTSPROVIDERRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCBundleEntitlementsProviderResult : NSObject

@property (readonly, nonatomic) NSString *bundlePurchaseID; // ivar: _bundlePurchaseID
@property (readonly, nonatomic) BOOL inTrialPeriod; // ivar: _inTrialPeriod
@property (readonly, nonatomic) BOOL isAmplifyUser; // ivar: _isAmplifyUser
@property (readonly, nonatomic) BOOL isPurchaser; // ivar: _isPurchaser
@property (readonly, nonatomic) NSString *servicesBundlePurchaseID; // ivar: _servicesBundlePurchaseID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundlePurchaseID:(id)arg0 inTrialPeriod:(BOOL)arg1 isPurchaser:(BOOL)arg2 servicesBundlePurchaseID:(id)arg3 isAmplifyUser:(BOOL)arg4 ;


@end


#endif