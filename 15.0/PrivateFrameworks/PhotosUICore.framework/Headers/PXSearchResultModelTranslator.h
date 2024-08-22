// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHRESULTMODELTRANSLATOR_H
#define PXSEARCHRESULTMODELTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface PXSearchResultModelTranslator : NSObject



+(BOOL)_isSinglePersonSearchResult:(id)arg0 ;
+(NSUInteger)_assetAggregationTypeForPLAssetSearchResult:(id)arg0 ;
+(NSUInteger)_collectionTypeForPLCollectionSearchResult:(id)arg0 ;
+(id)_dateFromPSIDate:(id)arg0 ;
+(id)assetAggregationSearchResultForPLAssetSearchResult:(id)arg0 ;
+(id)assetSearchResultsForPLTopAssetsSearchResult:(id)arg0 ;
+(id)collectionSearchResultForPLCollectionSearchResult:(id)arg0 ;
+(id)personSearchResultForPLAssetSearchResult:(id)arg0 ;
+(id)searchResultsForAssetResults:(id)arg0 ;
+(id)searchResultsForCollectionResults:(id)arg0 ;
+(id)searchResultsForTopAssetsResult:(id)arg0 ;
-(id)init;


@end


#endif