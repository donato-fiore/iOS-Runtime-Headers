// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYGENERATIONHELPER_H
#define PGMEMORYGENERATIONHELPER_H


#import <Foundation/Foundation.h>


@interface PGMemoryGenerationHelper : NSObject



+(BOOL)dates:(id)arg0 passSpreadicityWithMinimumCardinal:(NSUInteger)arg1 minimumTimeInterval:(CGFloat)arg2 ;
+(BOOL)prepareAssets:(id)arg0 forMemoriesWithTopTierAestheticScore:(CGFloat)arg1 curationContext:(id)arg2 ;
+(id)assetFetchResultForMomentNodes:(id)arg0 inLocationOrAreaNode:(id)arg1 requireInteresting:(BOOL)arg2 curationManager:(id)arg3 progressReporter:(id)arg4 ;
+(id)assetLocalIdentifiersFromAssets:(id)arg0 ;
+(id)assetUUIDsFromAssets:(id)arg0 ;
+(id)feederForMemoriesWithAssetCollection:(id)arg0 memoryCurationSession:(id)arg1 graph:(id)arg2 allowGuestAsset:(BOOL)arg3 ;
+(id)feederForMemoriesWithAssetFetchResult:(id)arg0 memoryCurationSession:(id)arg1 graph:(id)arg2 ;
+(id)feederForMemoriesWithAssetLocalIdentifiers:(id)arg0 memoryCurationSession:(id)arg1 graph:(id)arg2 allowGuestAsset:(BOOL)arg3 ;
+(id)feederForMemoriesWithFeeder:(id)arg0 topTierAestheticScore:(CGFloat)arg1 didFeederChange:(*BOOL)arg2 curationContext:(id)arg3 ;
+(id)keyAssetFetchResultForHighlightGroupUUIDs:(id)arg0 curationManager:(id)arg1 allowGuestAsset:(BOOL)arg2 ;
+(id)scoringContextForMemoriesWithAssets:(id)arg0 withTopTierAestheticScore:(CGFloat)arg1 ;


@end


#endif