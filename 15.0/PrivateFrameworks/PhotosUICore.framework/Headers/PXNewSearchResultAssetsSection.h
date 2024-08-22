// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXNEWSEARCHRESULTASSETSSECTION_H
#define PXNEWSEARCHRESULTASSETSSECTION_H

@class NSArray, PHFetchResult;


#import "PXNewSearchResultsSection.h"

@interface PXNewSearchResultAssetsSection : PXNewSearchResultsSection

@property (copy, nonatomic) NSArray *allAssetResultUUIDs; // ivar: _allAssetResultUUIDs
@property (readonly, copy, nonatomic) NSArray *allAssetResults; // ivar: _allAssetResults
@property (copy, nonatomic) PHFetchResult *curatedAssetFetchResult; // ivar: _curatedAssetFetchResult


-(id)assetForSearchResultIdentifier:(id)arg0 ;
-(id)initWithCuratedAssetSearchResults:(id)arg0 curatedAssetSearchResultsFetchResult:(id)arg1 allAssetSearchResults:(id)arg2 ;
-(id)searchResultForAsset:(id)arg0 ;
-(id)title;


@end


#endif