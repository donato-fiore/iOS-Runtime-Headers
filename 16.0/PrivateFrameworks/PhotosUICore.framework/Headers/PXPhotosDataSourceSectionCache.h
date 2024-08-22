// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDATASOURCESECTIONCACHE_H
#define PXPHOTOSDATASOURCESECTIONCACHE_H

@class NSDictionary, NSArray, PHFetchResult;

#import <Foundation/Foundation.h>


@interface PXPhotosDataSourceSectionCache : NSObject

@property (readonly, nonatomic) NSDictionary *assetCollectionToSection; // ivar: _assetCollectionToSection
@property (readonly, nonatomic) NSArray *assetCollections; // ivar: _assetCollections
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult; // ivar: _collectionListFetchResult
@property (readonly, nonatomic) NSInteger estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed; // ivar: _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed
@property (readonly, nonatomic) NSInteger estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore; // ivar: _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore
@property (readonly, nonatomic) NSInteger estimatedAssetCountWithEnrichmentStateAssetMetadataOnly; // ivar: _estimatedAssetCountWithEnrichmentStateAssetMetadataOnly
@property (readonly, nonatomic) NSInteger estimatedAssetCountWithEnrichmentStateComplete; // ivar: _estimatedAssetCountWithEnrichmentStateComplete
@property (readonly, nonatomic) NSInteger estimatedAssetCountWithEnrichmentStateNotEnriched; // ivar: _estimatedAssetCountWithEnrichmentStateNotEnriched
@property (readonly, nonatomic) NSInteger estimatedOtherCount; // ivar: _estimatedOtherCount
@property (readonly, nonatomic) NSInteger estimatedPhotosCount; // ivar: _estimatedPhotosCount
@property (readonly, nonatomic) NSInteger estimatedVideosCount; // ivar: _estimatedVideosCount
@property (readonly, nonatomic) NSInteger numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections; // ivar: _numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections
@property (readonly, nonatomic) NSInteger numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections; // ivar: _numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections
@property (readonly, nonatomic) NSInteger numberOfEnrichmentStateAssetMetadataOnlyAssetCollections; // ivar: _numberOfEnrichmentStateAssetMetadataOnlyAssetCollections
@property (readonly, nonatomic) NSInteger numberOfEnrichmentStateCompleteAssetCollections; // ivar: _numberOfEnrichmentStateCompleteAssetCollections
@property (readonly, nonatomic) NSInteger numberOfEnrichmentStateNotEnrichedAssetCollections; // ivar: _numberOfEnrichmentStateNotEnrichedAssetCollections


-(id)initWithCollectionListFetchResult:(id)arg0 ;


@end


#endif