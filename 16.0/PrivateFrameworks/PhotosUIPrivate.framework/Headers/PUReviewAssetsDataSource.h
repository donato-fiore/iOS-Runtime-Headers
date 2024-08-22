// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWASSETSDATASOURCE_H
#define PUREVIEWASSETSDATASOURCE_H

@class NSArray, NSDictionary;
@protocol PUDisplayAssetCollection;


#import "PUAssetsDataSource.h"

@interface PUReviewAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) NSArray *_assetIdentifiers; // ivar: __assetIdentifiers
@property (readonly, nonatomic) NSDictionary *_assetsByIdentifier; // ivar: __assetsByIdentifier
@property (readonly, nonatomic) NSObject<PUDisplayAssetCollection> *_reviewAssetCollection; // ivar: __reviewAssetCollection


-(BOOL)isEmpty;
-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)_identifierAtIndexPath:(id)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetCollectionAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)assetReferenceForAssetReference:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)convertIndexPath:(id)arg0 fromAssetsDataSource:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg0 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)indexPathForAssetWithIdentifier:(id)arg0 ;
-(id)initWithAssetsByIdentifier:(id)arg0 usingOrdering:(id)arg1 inAssetCollection:(id)arg2 ;
-(id)startingAssetReference;


@end


#endif