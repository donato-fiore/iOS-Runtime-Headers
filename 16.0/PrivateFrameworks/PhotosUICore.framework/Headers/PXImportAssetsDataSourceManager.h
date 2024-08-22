// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTASSETSDATASOURCEMANAGER_H
#define PXIMPORTASSETSDATASOURCEMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary, NSString, NSSet;
@protocol PXImportAssetsDataSourceManagerDelegate, OS_dispatch_queue;


#import "PXAssetsDataSourceManager.h"
#import "PXImportAssetsDataSource.h"
#import "PXImportAssetCollection.h"

@interface PXImportAssetsDataSourceManager : PXAssetsDataSourceManager

@property (retain, nonatomic) NSMutableArray *allAssetCollections; // ivar: _allAssetCollections
@property (retain, nonatomic) NSMutableDictionary *allAssetCollectionsById; // ivar: _allAssetCollectionsById
@property (nonatomic) BOOL alreadyImportedItemsSelectable; // ivar: _alreadyImportedItemsSelectable
@property (readonly, nonatomic) PXImportAssetsDataSource *dataSource;
@property (weak, nonatomic) NSObject<PXImportAssetsDataSourceManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dispatchesDataSourceUpdatesOnMainQueue; // ivar: _dispatchesDataSourceUpdatesOnMainQueue
@property (copy, nonatomic) NSArray *filteredAssetCollections; // ivar: _filteredAssetCollections
@property (copy, nonatomic) NSDictionary *filteredAssetCollectionsById; // ivar: _filteredAssetCollectionsById
@property (nonatomic) NSInteger forcedAlreadyImportedTruncationMode; // ivar: _forcedAlreadyImportedTruncationMode
@property (copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (nonatomic) NSInteger maxAlreadyImportedItems; // ivar: _maxAlreadyImportedItems
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modelQueue; // ivar: _modelQueue
@property (nonatomic) BOOL needsFilterUpdate; // ivar: _needsFilterUpdate
@property (nonatomic) BOOL showAlreadyImportedItems; // ivar: _showAlreadyImportedItems
@property (nonatomic) BOOL showNotYetImportedItems; // ivar: _showNotYetImportedItems
@property (readonly, nonatomic) PXImportAssetCollection *unfilteredAlreadyImportedAssetCollection;
@property (retain, nonatomic) PXImportAssetsDataSource *unfilteredDataSource; // ivar: _unfilteredDataSource
@property (copy, nonatomic) NSSet *visibleImportAssetIdentifiers; // ivar: _visibleImportAssetIdentifiers


+(BOOL)assetCollectionsArray:(id)arg0 isEqualToAssetCollectionsArray:(id)arg1 ;
+(void)addModels:(id)arg0 toAssetCollections:(id)arg1 assetCollectionsById:(id)arg2 ;
+(void)copyFromAssetCollections:(id)arg0 toAssetCollections:(*id)arg1 assetCollectionsById:(*id)arg2 ;
+(void)removeModels:(id)arg0 fromAssetCollections:(id)arg1 assetCollectionsById:(id)arg2 ;
+(void)sortAssetCollectionsInArray:(id)arg0 ;
-(NSInteger)countOfAlreadyImportedAssetCollectionInCollectionsMap:(id)arg0 ;
-(NSInteger)countOfUnfilteredAlreadyImportedAssetCollection;
-(id)createInitialDataSource;
-(id)existingModelsFromModels:(id)arg0 inAssetCollections:(id)arg1 assetCollectionsById:(id)arg2 ;
-(id)filteredModelsFromModels:(id)arg0 inAssetCollections:(id)arg1 assetCollectionsById:(id)arg2 ;
-(id)initWithAssetsFromDataSourceManager:(id)arg0 delegate:(id)arg1 logIdentifier:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 logIdentifier:(id)arg1 ;
-(void)addAssets:(id)arg0 ;
-(void)modifyAssetCollectionsWithBlock:(id)arg0 ;
-(void)pruneEmptyAssetCollectionsInCollections:(id)arg0 collectionsById:(id)arg1 ;
-(void)rebuildAlreadyImportedAssetCollectionInCollections:(id)arg0 collectionsById:(id)arg1 ;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)removeAssets:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)updateAlreadyImportedSelectability;
-(void)updateFilteredAssetsIfNeeded;


@end


#endif