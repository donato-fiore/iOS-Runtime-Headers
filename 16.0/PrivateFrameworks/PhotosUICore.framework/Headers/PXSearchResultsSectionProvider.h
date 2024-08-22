// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHRESULTSSECTIONPROVIDER_H
#define PXSEARCHRESULTSSECTIONPROVIDER_H

@class PHCachingImageManager, NSString, NSArray, PHPhotoLibrary, NSDictionary;
@protocol PXSearchDataSourceSectionProvider, PXSearchDataSourceSectionProviderChangeObserver, ParsecReportingDelegate;

#import <Foundation/Foundation.h>


@interface PXSearchResultsSectionProvider : NSObject <PXSearchDataSourceSectionProvider>



@property (copy, nonatomic) id *assetsSeeAllButtonHandler; // ivar: _assetsSeeAllButtonHandler
@property (retain, nonatomic) PHCachingImageManager *cachingImageManager; // ivar: _cachingImageManager
@property (weak, nonatomic) NSObject<PXSearchDataSourceSectionProviderChangeObserver> *changeObserver; // ivar: changeObserver
@property (copy, nonatomic) id *collectionsSeeAllButtonHandler; // ivar: _collectionsSeeAllButtonHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: identifier
@property (copy, nonatomic) NSString *localizedQueryString; // ivar: _localizedQueryString
@property (copy, nonatomic) NSArray *matchedOCRAssetUUIDs; // ivar: _matchedOCRAssetUUIDs
@property (copy, nonatomic) NSArray *matchedQueryStrings; // ivar: _matchedQueryStrings
@property (weak, nonatomic) NSObject<ParsecReportingDelegate> *parsecReportingDelegate; // ivar: _parsecReportingDelegate
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (copy, nonatomic) NSDictionary *sectionIdentifierToSectionMap; // ivar: _sectionIdentifierToSectionMap
@property (copy, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


+(id)_assetGridLayoutGroupWithEnvironment:(id)arg0 ;
+(id)_headerViewSupplementaryItem;
+(id)assetGridLayoutSectionWithEnvironment:(id)arg0 ;
+(id)rowStyleLayoutSectionWithEnvironment:(id)arg0 ;
-(BOOL)_isTopAssetsSection:(NSInteger)arg0 ;
-(BOOL)isSectionExpanded:(id)arg0 ;
-(NSInteger)_sectionTypeForAssetAggregationType:(NSUInteger)arg0 ;
-(NSInteger)_sectionTypeForCollectionType:(NSUInteger)arg0 ;
-(NSInteger)_sectionTypeForSearchResult:(id)arg0 ;
-(NSUInteger)searchResultTypeForSection:(id)arg0 ;
-(id)_allAssetResultUUIDsForSection:(id)arg0 ;
-(id)_searchResultsSectionForItemIdentifier:(id)arg0 ;
-(id)_sectionIdentifierToSectionMapWithResults:(id)arg0 allAssetResults:(id)arg1 assetsFetchResult:(id)arg2 ;
-(id)_seeAllButtonTitleForSection:(id)arg0 ;
-(id)_sortedSectionIdentifiersForSections:(id)arg0 ;
-(id)assetForSearchResult:(id)arg0 ;
-(id)assetSearchResultForAsset:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)assetsFetchResultForSection:(id)arg0 ;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)layoutForSectionIdentifier:(id)arg0 environment:(id)arg1 collectionViewLayoutMargins:(struct UIEdgeInsets )arg2 ;
-(id)searchResultForIdentifier:(id)arg0 ;
-(id)sections;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg0 indexPath:(id)arg1 ;
-(void)_configureCellThumbnailImageWithAssetUUID:(id)arg0 orAsset:(id)arg1 forCell:(id)arg2 ;
-(void)_configureCellThumbnailImageWithPersonUUID:(id)arg0 forCell:(id)arg1 ;
-(void)_configureTitledCell:(id)arg0 forSearchResult:(id)arg1 ;
-(void)_setSearchResults:(id)arg0 searchAssetResults:(id)arg1 curatedAssetsFetchResult:(id)arg2 reloadItemIdentifiers:(id)arg3 localizedQueryString:(id)arg4 matchedQueryStrings:(id)arg5 matchedOCRAssetUUIDs:(id)arg6 ;
-(void)configureCell:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(void)prefetchItemsForItemIdentifiers:(id)arg0 ;
-(void)registerClassesForCellReuseIdentifiers:(id)arg0 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(id)arg0 ;
-(void)requestImageForAssetUUID:(id)arg0 orAsset:(id)arg1 withPhotoLibrary:(id)arg2 cachingImageManager:(id)arg3 imageRequestSize:(struct CGSize )arg4 resultHandler:(id)arg5 ;
-(void)requestImageForPersonUUID:(id)arg0 photoLibrary:(id)arg1 imageRequestSize:(struct CGSize )arg2 displayScale:(CGFloat)arg3 resultHandler:(id)arg4 ;
-(void)setExpanded:(BOOL)arg0 forSection:(id)arg1 sectionHeaderView:(id)arg2 ;
-(void)setSearchQueryResult:(id)arg0 ;


@end


#endif