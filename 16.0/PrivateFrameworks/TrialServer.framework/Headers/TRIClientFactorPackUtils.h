// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRICLIENTFACTORPACKUTILS_H
#define TRICLIENTFACTORPACKUTILS_H


#import <Foundation/Foundation.h>


@interface TRIClientFactorPackUtils : NSObject



// +(BOOL)_enumerateAssetFactorLevelsInFactorPack:(id)arg0 trialAssetBlock:(id)arg1 maAssetBlock:(unk)arg2  ;
// +(BOOL)_enumerateMetadataForAssetsInFactorPack:(id)arg0 assetStore:(id)arg1 maProvider:(id)arg2 aliasToUnaliasMap:(id)arg3 ckBlock:(id)arg4 maBlock:(unk)arg5  ;
+(id)requiredAssetsForInstallationWithFactorPack:(id)arg0 assetStore:(id)arg1 maProvider:(id)arg2 subscriptionSettings:(id)arg3 aliasToUnaliasMap:(id)arg4 ;
+(id)uniqueAssets:(id)arg0 ;
+(id)unlinkedOnDemandAssetsWithFactorPack:(id)arg0 factorPackPath:(id)arg1 assetStore:(id)arg2 maProvider:(id)arg3 aliasToUnaliasMap:(id)arg4 ;


@end


#endif