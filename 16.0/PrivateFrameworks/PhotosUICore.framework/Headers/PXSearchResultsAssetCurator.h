// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHRESULTSASSETCURATOR_H
#define PXSEARCHRESULTSASSETCURATOR_H


#import <Foundation/Foundation.h>


@interface PXSearchResultsAssetCurator : NSObject



+(id)_assetsCuratedForDominancyFromCuratedObjects:(id)arg0 momentUUIDsByAssetUUIDs:(id)arg1 curatedAssetLimit:(NSUInteger)arg2 ;
+(id)_fetchAssetsForAssetUUIDs:(id)arg0 ;
+(id)_fetchResultForCuratedAssets:(id)arg0 ;
+(id)_momentUUIDsByAssetUUIDsFromAssetCurationObjects:(id)arg0 ;
+(id)_sampledAssetUUIDsFromAssetResults:(id)arg0 curatedAssetLimit:(NSUInteger)arg1 priorityAssetUUID:(id)arg2 maxNumberToSample:(NSUInteger)arg3 rangeToSample:(NSUInteger)arg4 ;
+(id)_sortedCuratedAssetsFromCurationObjects:(id)arg0 priorityAssetUUID:(id)arg1 curatedAssetLimit:(NSUInteger)arg2 shouldPrioritizeDominantObjectResults:(BOOL)arg3 ;
+(void)_curationObjectsFromAssets:(id)arg0 scenesMap:(id)arg1 sceneIdentifiers:(id)arg2 sceneTaxonomyProvider:(id)arg3 completion:(id)arg4 ;
+(void)performCurationForAssetResults:(id)arg0 sceneIdentifiers:(id)arg1 searchQuery:(id)arg2 sceneTaxonomyProvider:(id)arg3 completion:(id)arg4 ;


@end


#endif