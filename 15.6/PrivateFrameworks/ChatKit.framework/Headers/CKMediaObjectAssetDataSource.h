// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEDIAOBJECTASSETDATASOURCE_H
#define CKMEDIAOBJECTASSETDATASOURCE_H

@class PXAssetsDataSource, NSDictionary, NSArray, NSURL, NSString;
@protocol PXDisplayAssetCollection;



@interface CKMediaObjectAssetDataSource : PXAssetsDataSource {
    BOOL _hasCheckedForMomentShareURL;
    BOOL _hasCollectedItemsCount;
}


@property (retain, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) ? assetTypeCounts; // ivar: _assetTypeCounts
@property (retain, nonatomic) NSDictionary *chatItemGUIDMap; // ivar: _chatItemGUIDMap
@property (retain, nonatomic) NSArray *chatItems; // ivar: _chatItems
@property (retain, nonatomic) NSArray *displayAssets; // ivar: _displayAssets
@property (readonly, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (readonly, nonatomic) NSURL *momentShareURL; // ivar: _momentShareURL
@property (retain, nonatomic) NSString *parentChatItemGUID; // ivar: _parentChatItemGUID


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)assetReferenceForMediaObject:(id)arg0 ;
-(id)chatItemForAsset:(id)arg0 ;
-(id)chatItemForAssetReference:(id)arg0 ;
-(id)copyRefreshingAssetsAtIndexes:(id)arg0 ;
-(id)initWithChatItems:(id)arg0 parentChatItemGUID:(id)arg1 ;
-(id)initWithChatItems:(id)arg0 parentChatItemGUID:(id)arg1 displayAssets:(id)arg2 chatItemGUIDMap:(id)arg3 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectsInIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)temporaryChatItemForAssetReference:(id)arg0 ;
-(struct PXSimpleIndexPath )_indexPathForMediaObject:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif