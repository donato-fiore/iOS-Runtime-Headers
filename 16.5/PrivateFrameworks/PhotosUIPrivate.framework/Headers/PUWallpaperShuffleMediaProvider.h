// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERSHUFFLEMEDIAPROVIDER_H
#define PUWALLPAPERSHUFFLEMEDIAPROVIDER_H

@class PXMediaProvider, PXMediaProviderImageCacher, NSCache, NSOperationQueue, NSMutableDictionary;


#import "PUWallpaperShuffleResourceManager.h"

@interface PUWallpaperShuffleMediaProvider : PXMediaProvider {
    uint8_t _requestIDCounter;
    os_unfair_lock_s _operationsByIDLock;
}


@property (readonly, nonatomic) PXMediaProviderImageCacher *imageCacher; // ivar: _imageCacher
@property (readonly, nonatomic) NSCache *memoryCache; // ivar: _memoryCache
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSMutableDictionary *operationsByRequestID; // ivar: _operationsByRequestID
@property (readonly, nonatomic) PUWallpaperShuffleResourceManager *resourceManager; // ivar: _resourceManager


-(NSInteger)_nextRequestID;
-(NSInteger)requestCGImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(id)initWithResourceManager:(id)arg0 ;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)_handleOperationCompletedWithID:(NSInteger)arg0 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif