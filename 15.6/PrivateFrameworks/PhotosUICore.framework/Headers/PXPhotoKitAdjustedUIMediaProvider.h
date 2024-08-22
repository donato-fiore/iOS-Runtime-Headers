// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITADJUSTEDUIMEDIAPROVIDER_H
#define PXPHOTOKITADJUSTEDUIMEDIAPROVIDER_H

@class NSMutableDictionary, PHCachingImageManager;
@protocol OS_dispatch_queue;


#import "PXUIMediaProvider.h"

@interface PXPhotoKitAdjustedUIMediaProvider : PXUIMediaProvider {
    uint8_t _nextRequestID;
    NSMutableDictionary *_requestsByIdentifier;
    NSMutableDictionary *_unadjustedRequestIdentifiersByIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PHCachingImageManager *_imageManager;
}


@property (nonatomic) BOOL cachesUnadjustedImageForRequestedAssets; // ivar: _cachesUnadjustedImageForRequestedAssets
@property (nonatomic) BOOL delayRenders; // ivar: _delayRenders
@property (nonatomic) BOOL useCachedRenders; // ivar: _useCachedRenders


+(void)clearCachedRenders;
-(NSInteger)_nextRequestID;
-(NSInteger)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestCGImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestURLForImage:(id)arg0 pairingIdentifier:(id)arg1 options:(id)arg2 reaultHandler:(id)arg3 ;
-(NSInteger)requestURLForVideo:(id)arg0 pairingIdentifier:(id)arg1 options:(id)arg2 reaultHandler:(id)arg3 ;
-(NSInteger)requestURLsForLivePhoto:(id)arg0 pairingIdentifier:(id)arg1 options:(id)arg2 reaultHandler:(id)arg3 ;
-(id)cachedImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 ;
-(id)init;
-(void)_handleRequestCompletedWithID:(NSInteger)arg0 info:(id)arg1 ;
-(void)_removeRequestforID:(NSInteger)arg0 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif