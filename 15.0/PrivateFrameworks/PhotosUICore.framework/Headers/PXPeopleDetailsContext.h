// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEDETAILSCONTEXT_H
#define PXPEOPLEDETAILSCONTEXT_H

@class NSString, PHFetchResult;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXPhotosDetailsContext.h"

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_fetchingQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *keyFaceAssetFetchResult; // ivar: _keyFaceAssetFetchResult
@property (readonly) Class superclass;


+(id)assetCollectionListFetchResultForPeople:(id)arg0 assetCount:(*NSUInteger)arg1 ;
+(id)photosDetailsContextForAsset:(id)arg0 parentContext:(id)arg1 ;
+(id)photosDetailsContextForAssetCollection:(id)arg0 assets:(id)arg1 keyAssets:(id)arg2 enableCuration:(BOOL)arg3 enableKeyAssets:(BOOL)arg4 viewSourceOrigin:(NSInteger)arg5 ;
+(id)photosDetailsContextForAssetCollection:(id)arg0 assets:(id)arg1 viewSourceOrigin:(NSInteger)arg2 ;
-(BOOL)shouldUseKeyFace;
-(id)_displayTitleForPeople:(id)arg0 ;
-(id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg0 ;
-(id)initWithPeople:(id)arg0 parentContext:(id)arg1 ;
-(id)initWithPeople:(id)arg0 parentContext:(id)arg1 assetCollectionsFetch:(id)arg2 ;
-(id)initWithPhotosDataSource:(id)arg0 displayTitleInfo:(id)arg1 parentContext:(id)arg2 keyAssetsFetchResult:(id)arg3 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_updateKeyFaceAssetFetchResult;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;


@end


#endif