// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITCOLLECTIONSDATASOURCE_H
#define PXPHOTOKITCOLLECTIONSDATASOURCE_H

@class NSArray, NSDictionary, PHFetchResult;


#import "PXCollectionsDataSource.h"
#import "PXPhotoKitCollectionsDataSourceManagerConfiguration.h"

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource

@property (readonly, nonatomic) NSArray *_collectionListBySection; // ivar: __collectionListBySection
@property (readonly, nonatomic) NSArray *_collectionsFetchResultBySection; // ivar: __collectionsFetchResultBySection
@property (readonly, nonatomic) NSDictionary *_collectionsIndexPathsByCollection; // ivar: __collectionsIndexPathsByCollection
@property (readonly, nonatomic) NSDictionary *_keyAssetsFetchResultsByCollection; // ivar: __keyAssetsFetchResultsByCollection
@property (readonly, nonatomic) NSArray *_virtualCollections; // ivar: __virtualCollections
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult; // ivar: _collectionsFetchResult
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSDictionary *itemFetchResultByCollection; // ivar: _itemFetchResultByCollection
@property (readonly, nonatomic) unsigned short sharingFilter; // ivar: _sharingFilter


+(NSInteger)estimatedCountForAssetCollection:(id)arg0 withConfiguration:(id)arg1 ;
-(NSInteger)assetCollectionsCountForFetchResult:(id)arg0 ;
-(NSInteger)assetCollectionsCountForSection:(NSInteger)arg0 ;
-(NSInteger)collectionsListCountForFetchResult:(id)arg0 ;
-(NSInteger)collectionsListCountForSection:(NSInteger)arg0 ;
-(NSInteger)countForCollection:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)collectionAtIndexPath:(id)arg0 ;
-(id)collectionListForSection:(NSInteger)arg0 ;
-(id)content;
-(id)description;
-(id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)indexPathForCollection:(id)arg0 ;
-(id)init;
-(id)initWithCollectionListBySection:(id)arg0 collectionsFetchResultBySection:(id)arg1 keyAssetsFetchResultsByCollection:(id)arg2 collectionsIndexPathsByCollection:(id)arg3 itemFetchResultByCollection:(id)arg4 virtualCollections:(id)arg5 collectionsFetchResult:(id)arg6 sharingFilter:(unsigned short)arg7 dataSourceConfiguration:(id)arg8 ;
-(id)keyAssetsForCollection:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;
-(void)enumerateCollectionsUsingBlock:(id)arg0 ;


@end


#endif