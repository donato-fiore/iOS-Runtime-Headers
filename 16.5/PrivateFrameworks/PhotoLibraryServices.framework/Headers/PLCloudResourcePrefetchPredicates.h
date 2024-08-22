// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDRESOURCEPREFETCHPREDICATES_H
#define PLCLOUDRESOURCEPREFETCHPREDICATES_H


#import <Foundation/Foundation.h>


@interface PLCloudResourcePrefetchPredicates : NSObject



+(CGFloat)_resourceLastPrunedPrefetchTimeInterval;
+(id)_assetIsUnadjustedPredicate;
+(id)_assetPredicateForCPLResourceType:(NSUInteger)arg0 additionalAssetPredicates:(id)arg1 additionalResourcePredicates:(id)arg2 options:(id)arg3 ;
+(id)_excludeMomentShareAssetsPredicate;
+(id)_irisConditionPredicate;
+(id)_masterPredicateForCPLResourceType:(NSUInteger)arg0 additionalAssetPredicates:(id)arg1 additionalResourcePredicates:(id)arg2 options:(id)arg3 ;
+(id)_missingThumbnailPredicate;
+(id)_predicateForImageResourcePixelsLessOrEqual:(NSInteger)arg0 ;
+(id)_predicateForMaxFilesize:(NSUInteger)arg0 ;
+(id)_predicateForResourceCreatedAfterDate:(id)arg0 ;
+(id)_predicateToPrefetchMemoryKeyAssets:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
+(id)_predicateToPrefetchSuggestions:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
+(id)_prefetchResourceForAsset:(id)arg0 inResourceTypes:(id)arg1 options:(id)arg2 ;
+(id)_resourcesToPrefetchForAsset:(id)arg0 options:(id)arg1 ;
+(id)predicateForOriginalResourcesForPrefetchLocallyAvailableOnly:(BOOL)arg0 ;
+(id)predicateToPrefetchHighlightWithUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(id)predicateToPrefetchMemories:(id)arg0 photoLibrary:(id)arg1 options:(id)arg2 ;
+(id)predicatesForMemories:(id)arg0 photoLibrary:(id)arg1 ;
+(id)predicatesForNonThumbnails:(id)arg0 lastCompletePrefetchDate:(id)arg1 ;
+(id)predicatesForOriginalResources:(id)arg0 additionalResourcePredicates:(id)arg1 ;
+(id)predicatesForThumbnails:(id)arg0 ;
+(id)predicatesForWidget:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif