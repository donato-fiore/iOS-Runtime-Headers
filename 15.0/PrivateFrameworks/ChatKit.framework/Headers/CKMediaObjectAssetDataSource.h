// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMEDIAOBJECTASSETDATASOURCE_H
#define CKMEDIAOBJECTASSETDATASOURCE_H

@class PXAssetsDataSource, NSDictionary, NSArray, NSString;
@protocol PXDisplayAssetCollection;



@interface CKMediaObjectAssetDataSource : PXAssetsDataSource

@property (nonatomic) ? additionalItemsCount; // ivar: _additionalItemsCount
@property (retain, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSDictionary *chatItemGUIDMap; // ivar: _chatItemGUIDMap
@property (retain, nonatomic) NSArray *chatItems; // ivar: _chatItems
@property (retain, nonatomic) NSArray *displayAssets; // ivar: _displayAssets
@property (retain, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (retain, nonatomic) NSString *parentChatItemGUID; // ivar: _parentChatItemGUID


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)assetReferenceForMediaObject:(id)arg0 ;
-(id)chatItemForAsset:(id)arg0 ;
-(id)chatItemForAssetReference:(id)arg0 ;
-(id)copyRefreshingAssetsAtIndexes:(id)arg0 ;
-(id)initWithChatItems:(id)arg0 parentChatItemGUID:(id)arg1 additionalItemsCount:(struct ? )arg2 ;
-(id)initWithChatItems:(id)arg0 parentChatItemGUID:(id)arg1 displayAssets:(id)arg2 chatItemGUIDMap:(id)arg3 additionalItemsCount:(struct ? )arg4 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)temporaryChatItemForAssetReference:(id)arg0 ;
-(struct PXSimpleIndexPath )_indexPathForMediaObject:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif