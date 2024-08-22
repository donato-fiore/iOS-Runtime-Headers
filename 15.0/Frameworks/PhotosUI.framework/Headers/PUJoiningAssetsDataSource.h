// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUJOININGASSETSDATASOURCE_H
#define PUJOININGASSETSDATASOURCE_H

@class NSDictionary, NSArray;


#import "PUAssetsDataSource.h"

@interface PUJoiningAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) NSDictionary *_containedDataSourceInfoByIdentifier; // ivar: __containedDataSourceInfoByIdentifier
@property (readonly, nonatomic) NSArray *_containedDataSourceInfos; // ivar: __containedDataSourceInfos
@property (readonly, nonatomic) NSArray *_dataSources; // ivar: __dataSources
@property (readonly, nonatomic) NSInteger _totalNumberOfSections; // ivar: __totalNumberOfSections


-(NSInteger)numberOfAssetsWithMaximum:(NSInteger)arg0 ;
-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)_assetsDataSourceForExternalIndexPath:(id)arg0 outDataSourceIndex:(*NSInteger)arg1 outLocalIndexPath:(*id)arg2 ;
-(id)_externalIndexPathForLocalIndexPath:(id)arg0 inAssetsDataSource:(id)arg1 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetCollectionAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)containedAssetsDataSourceAtIndexPath:(id)arg0 ;
-(id)indexPathForAssetCollection:(id)arg0 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)initWithDataSources:(id)arg0 ;
-(id)startingAssetReference;


@end


#endif