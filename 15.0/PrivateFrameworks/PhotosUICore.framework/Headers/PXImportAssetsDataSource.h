// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXIMPORTASSETSDATASOURCE_H
#define PXIMPORTASSETSDATASOURCE_H

@class NSArray, NSDictionary;


#import "PXAssetsDataSource.h"

@interface PXImportAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) NSArray *assetCollections; // ivar: _assetCollections
@property (readonly, nonatomic) NSDictionary *assetCollectionsById; // ivar: _assetCollectionsById
@property (readonly, nonatomic) NSDictionary *assetsMap; // ivar: _assetsMap


-(BOOL)hasAlreadyImportedSection;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(NSInteger)sectionForAssetCollection:(id)arg0 ;
-(NSUInteger)numberOfAlreadyImportedItems;
-(NSUInteger)numberOfItems;
-(NSUInteger)numberOfNotYetImportedItems;
-(NSUInteger)numberOfSelectableItems;
-(id)allItems;
-(id)allItemsUnsorted;
-(id)allSelectableItems;
-(id)alreadyImportedCollection;
-(id)alreadyImportedItems;
-(id)assetCollectionForIdentifier:(id)arg0 ;
-(id)assetCollectionForSection:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssetCollections:(id)arg0 assetsMap:(id)arg1 ;
-(id)itemForImportAssetUuid:(id)arg0 ;
-(id)notYetImportedItems;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )itemIndexPathForItem:(id)arg0 ;


@end


#endif