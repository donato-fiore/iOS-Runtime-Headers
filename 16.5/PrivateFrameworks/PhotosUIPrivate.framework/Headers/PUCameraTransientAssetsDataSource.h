// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCAMERATRANSIENTASSETSDATASOURCE_H
#define PUCAMERATRANSIENTASSETSDATASOURCE_H

@class NSArray, NSDictionary;
@protocol PUDisplayAssetCollection;


#import "PUAssetsDataSource.h"

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) NSArray *_assetUUIDs; // ivar: __assetUUIDs
@property (readonly, nonatomic) NSDictionary *_assetsByUUID; // ivar: __assetsByUUID
@property (readonly, nonatomic) NSDictionary *_representativeAssetsByBurstIdentifier; // ivar: __representativeAssetsByBurstIdentifier
@property (readonly, nonatomic) NSObject<PUDisplayAssetCollection> *_transientAssetCollection; // ivar: __transientAssetCollection


-(BOOL)isEmpty;
-(NSInteger)numberOfSubItemsAtIndexPath:(id)arg0 ;
-(id)_uuidAtIndexPath:(id)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetCollectionAtIndexPath:(id)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)assetReferenceForAssetReference:(id)arg0 ;
-(id)badgeInfoPromiseForAssetAtIndexPath:(id)arg0 ;
-(id)convertIndexPath:(id)arg0 fromAssetsDataSource:(id)arg1 ;
-(id)indexPathForAssetCollection:(id)arg0 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)initWithUUIDs:(id)arg0 mapping:(id)arg1 representativeMapping:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)startingAssetReference;


@end


#endif