// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTVIEWCONTROLLERDATAFETCHING_H
#define PXSEARCHRESULTVIEWCONTROLLERDATAFETCHING_H


#import <Foundation/Foundation.h>


@interface PXSearchResultViewControllerDataFetching : NSObject



+(id)_fetchAssetCollectionsForCollectionSearchResult:(id)arg0 ;
+(id)assetCollectionForAlbumSearchResult:(id)arg0 ;
+(id)assetCollectionForAssetAggregationSearchResult:(id)arg0 ;
+(id)assetCollectionForAssetUUIDs:(id)arg0 title:(id)arg1 ;
+(id)personForPersonSearchResult:(id)arg0 ;
+(id)photosDetailsContextForCollectionSearchResult:(id)arg0 ;
+(id)photosViewConfigurationForAlbumSearchResult:(id)arg0 ;
+(id)photosViewConfigurationForAssetAggregationSearchResult:(id)arg0 ;
+(id)storyConfigurationForCollectionSearchResult:(id)arg0 ;


@end


#endif