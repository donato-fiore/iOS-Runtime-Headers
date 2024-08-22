// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETEXPLORERREVIEWSCREENASSETSDATASOURCE_H
#define PUASSETEXPLORERREVIEWSCREENASSETSDATASOURCE_H

@class NSCache, NSDictionary;


#import "PUAssetsDataSource.h"

@interface PUAssetExplorerReviewScreenAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // ivar: __assetReferenceByIndexPathCache
@property (readonly, nonatomic) PUAssetsDataSource *_originalDataSource; // ivar: __originalDataSource
@property (readonly, nonatomic) NSDictionary *_substitutedAssetsByUUID; // ivar: __substitutedAssetsByUUID


-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)assetCollectionAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)identifier;
-(id)indexPathForAssetCollection:(id)arg0 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 substitutedAssets:(id)arg1 ;


@end


#endif