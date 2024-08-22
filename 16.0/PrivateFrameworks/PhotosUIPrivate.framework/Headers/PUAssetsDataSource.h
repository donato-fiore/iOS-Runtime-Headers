// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETSDATASOURCE_H
#define PUASSETSDATASOURCE_H

@class NSIndexPath;


#import "PUTilingDataSource.h"

@interface PUAssetsDataSource : PUTilingDataSource

@property (readonly, nonatomic) BOOL containsMultipleAssets;
@property (readonly, nonatomic) NSIndexPath *firstItemIndexPath;
@property (readonly, nonatomic) NSIndexPath *lastItemIndexPath;


+(id)emptyDataSource;
-(BOOL)couldAssetReferenceAppear:(id)arg0 ;
-(BOOL)isEmpty;
-(NSInteger)numberOfAssetsWithMaximum:(NSInteger)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetCollectionAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)assetReferenceForAssetReference:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)containedAssetsDataSourceAtIndexPath:(id)arg0 ;
-(id)convertIndexPath:(id)arg0 fromAssetsDataSource:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg0 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)startingAssetReference;


@end


#endif