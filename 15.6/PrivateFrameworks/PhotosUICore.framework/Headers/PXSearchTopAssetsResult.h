// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHTOPASSETSRESULT_H
#define PXSEARCHTOPASSETSRESULT_H

@class NSArray, NSString, NSDictionary, PHFetchResult;
@protocol PHPhotoLibraryChangeObserver, PXSearchResultItem, PXSearchTopAssetsResultChangeDelegate;

#import <Foundation/Foundation.h>


@interface PXSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PXSearchResultItem>



@property (readonly, nonatomic) NSArray *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugDictionary;
@property (weak, nonatomic) NSObject<PXSearchTopAssetsResultChangeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *hiddenObjects; // ivar: _hiddenObjects
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly, copy, nonatomic) NSString *priorityAssetUUID; // ivar: _priorityAssetUUID
@property (readonly, copy, nonatomic) NSArray *removedObjects; // ivar: _removedObjects
@property (readonly) Class superclass;
@property (copy, nonatomic) id *topAssetFilter; // ivar: _topAssetFilter
@property (readonly, nonatomic) PHFetchResult *topAssetsFetchResult; // ivar: _topAssetsFetchResult


+(id)_fetchAssetsForAssetUUIDs:(id)arg0 ;
+(id)_fetchResultForTopAssets:(id)arg0 ;
+(id)sampledAssetUUIDsFrom:(id)arg0 numberOfTopAssets:(NSInteger)arg1 maxNumberToSample:(NSInteger)arg2 rangeToSample:(NSInteger)arg3 ;
+(id)sortedPreviewAssetsFrom:(id)arg0 priorityAssetUUID:(id)arg1 numberOfTopAssets:(NSInteger)arg2 ;
-(BOOL)_shouldRecurateForChangeDetails:(id)arg0 ;
-(NSUInteger)numberOfTopAssets;
-(id)init;
-(id)initWithAssetUUIDs:(id)arg0 priorityAssetUUID:(id)arg1 ;
-(void)_curateThumbnailAssets;
-(void)_filterTopAssets:(id)arg0 ;
-(void)_notifyDelegateOfAssetChanges:(id)arg0 newCuration:(BOOL)arg1 ;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif