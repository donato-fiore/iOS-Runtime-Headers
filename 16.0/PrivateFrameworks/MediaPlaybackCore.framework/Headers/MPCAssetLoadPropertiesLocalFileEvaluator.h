// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCASSETLOADPROPERTIESLOCALFILEEVALUATOR_H
#define MPCASSETLOADPROPERTIESLOCALFILEEVALUATOR_H


#import <Foundation/Foundation.h>


@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject



+(BOOL)_shouldUpgradeCacheOnPlay:(id)arg0 assetCachingIsAllowed:(BOOL)arg1 ;
+(BOOL)_shouldUpgradeDownloadOnPlay:(id)arg0 defaults:(id)arg1 ;
+(BOOL)isHLSFileAsset:(id)arg0 ;
+(NSInteger)_loadedAudioAssetTypeForFileAsset:(id)arg0 ;
+(NSInteger)_recommendationForEvaluation:(id)arg0 assetCachingIsAllowed:(BOOL)arg1 userDefaults:(id)arg2 ;
+(id)evaluateAssetLoadProperties:(id)arg0 allowingCachedAssets:(BOOL)arg1 defaults:(id)arg2 ;


@end


#endif