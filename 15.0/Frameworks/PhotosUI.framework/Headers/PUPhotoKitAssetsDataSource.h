// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOKITASSETSDATASOURCE_H
#define PUPHOTOKITASSETSDATASOURCE_H

@class NSCache, PXPhotosDataSourceChange, NSString, PXPhotosDataSource;


#import "PUAssetsDataSource.h"

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // ivar: __assetReferenceByIndexPathCache
@property (readonly, nonatomic) PXPhotosDataSourceChange *change; // ivar: _change
@property (readonly, nonatomic) NSString *changeFromDataSourceIdentifier; // ivar: _changeFromDataSourceIdentifier
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource


-(BOOL)couldAssetReferenceAppear:(id)arg0 ;
-(BOOL)isEmpty;
-(NSInteger)numberOfAssetsWithMaximum:(NSInteger)arg0 ;
-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetCollectionAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)convertIndexPath:(id)arg0 fromAssetsDataSource:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg0 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)initWithImmutablePhotosDataSource:(id)arg0 withChange:(id)arg1 fromDataSourceIdentifier:(id)arg2 ;
-(id)startingAssetReference;


@end


#endif