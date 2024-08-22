// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRICLIENTFACTORPACKUTILS_H
#define TRICLIENTFACTORPACKUTILS_H


#import <Foundation/Foundation.h>


@interface TRIClientFactorPackUtils : NSObject



+(id)_triCollectMetadataForAssetsInFactorPack:(id)arg0 withTest:(id)arg1 ;
+(id)requiredAssetsForInstallationWithFactorPack:(id)arg0 assetStore:(id)arg1 subscriptionSettings:(id)arg2 aliases:(id)arg3 ;
+(id)subscribedOnDemandFactorsForAssetIds:(id)arg0 factorPack:(id)arg1 subscriptionSettings:(id)arg2 ;
+(id)unlinkedOnDemandAssetsWithFactorPack:(id)arg0 ;


@end


#endif