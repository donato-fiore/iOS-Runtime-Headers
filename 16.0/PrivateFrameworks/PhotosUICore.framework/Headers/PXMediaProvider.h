// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEDIAPROVIDER_H
#define PXMEDIAPROVIDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PXLoadingStatusManager.h"

@interface PXMediaProvider : NSObject {
    NSArray *_availableThumbnailSizes;
}


@property (readonly, nonatomic) NSArray *availableThumbnailSizes;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (readonly, nonatomic) CGSize masterThumbnailSize;


+(id)preheatQueue;
-(NSInteger)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestCGImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestURLForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)enumerateAvailableThumbnailDataFormats:(id)arg0 ;
-(void)preheatThumbnailDataForAssets:(id)arg0 origin:(NSInteger)arg1 targetSize:(struct CGSize )arg2 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif