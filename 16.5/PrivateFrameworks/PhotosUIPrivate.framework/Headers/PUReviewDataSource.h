// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUREVIEWDATASOURCE_H
#define PUREVIEWDATASOURCE_H

@class NSMutableArray, NSMutableDictionary, NSHashTable, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PUReviewDataSource : NSObject

@property (readonly, nonatomic) NSMutableArray *_assetIdentifiers; // ivar: __assetIdentifiers
@property (readonly, nonatomic) NSMutableDictionary *_assetsByIdentifier; // ivar: __assetsByIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier; // ivar: __enqueuedBurstAssetIdentifiersByBurstIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier; // ivar: __enqueuedBurstAssetsByAssetIdentifier
@property (nonatomic, setter=_setNestedPerformChanges:) NSInteger _nestedPerformChanges; // ivar: __nestedPerformChanges
@property (readonly, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier; // ivar: __representativeAssetsByBurstIdentifier
@property (readonly, nonatomic) NSMutableSet *_updatedAssetIdentifiers; // ivar: __updatedAssetIdentifiers


-(id)assetsByIdentifier;
-(id)description;
-(id)existingAssetForIdentifier:(id)arg0 ;
-(id)existingRepresentativeAssetForBurstIdentifier:(id)arg0 ;
-(id)init;
-(id)orderedIdentifiers;
-(void)enqueuePendingBurstAsset:(id)arg0 ;
-(void)insertAsset:(id)arg0 ;
-(void)insertAsset:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertAssets:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)processPendingBurstAssets;
-(void)registerChangeObserver:(id)arg0 ;
-(void)removeAllAssets;
-(void)removeAssetWithIdentifier:(id)arg0 ;
-(void)removeRepresentativeAssetForBurstIdentifier:(id)arg0 ;
-(void)replaceAsset:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif