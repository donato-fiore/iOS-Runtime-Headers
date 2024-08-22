// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITUIMEDIAPROVIDER_H
#define PXPHOTOKITUIMEDIAPROVIDER_H

@class NSArray, NSMutableArray, PHAssetResourceQualityClass, PHCachingImageManager, PHImageManager;
@protocol OS_dispatch_queue;


#import "PXUIMediaProvider.h"
#import "PXPhotoKitThumbnailCache.h"

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider {
    NSArray *_thumbnailQualityClasses;
    NSArray *_thumbnailCaches;
    CGSize _masterThumbnailSize;
    uint8_t _lastActivity;
    os_unfair_lock_s _preheatlock;
    NSMutableArray *_preheatLock_preheatStates;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    NSUInteger _preheatQueue_state;
    os_unfair_lock_s _lock;
    CGSize _lock_lastTargetSize;
    NSInteger _lock_lastQualityClassIndex;
    PHAssetResourceQualityClass *_lock_lastResourceQualityClass;
    PXPhotoKitThumbnailCache *_lock_lastThumbnailCache;
}


@property (readonly, nonatomic) PHCachingImageManager *cachingImageManager; // ivar: _cachingImageManager
@property (readonly, nonatomic) PHImageManager *imageManager; // ivar: _imageManager


+(id)_defaultImageManager;
+(id)_defaultLoadingStatusManager;
+(id)mediaProviderWithLibrary:(id)arg0 ;
-(NSInteger)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestURLForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_preheatInfoForQualityClassIndex:(NSInteger)arg0 ;
-(id)_thumbnailDataForAsset:(id)arg0 qualityClass:(id)arg1 cache:(id)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4 ;
-(id)init;
-(id)initWithImageManager:(id)arg0 ;
-(id)initWithImageManager:(id)arg0 library:(id)arg1 ;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(struct CGSize )masterThumbnailSize;
-(void)_getQualityClass:(*id)arg0 cache:(*id)arg1 qualityClassIndex:(*NSInteger)arg2 forTargetSize:(struct CGSize )arg3 ;
-(void)_noteActivity;
-(void)_preheatQueue_schedulePreheat;
-(void)_preheatQueue_scheduleUpdateAfterDelay;
-(void)_preheatQueue_update;
-(void)_schedulePreheat;
-(void)_setPreheatInfo:(id)arg0 forQualityClassIndex:(NSInteger)arg1 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)enumerateAvailableThumbnailDataFormats:(id)arg0 ;
-(void)preheatThumbnailDataForAssets:(id)arg0 origin:(NSInteger)arg1 targetSize:(struct CGSize )arg2 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif