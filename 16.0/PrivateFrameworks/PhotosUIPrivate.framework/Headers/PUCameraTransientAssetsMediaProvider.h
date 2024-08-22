// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCAMERATRANSIENTASSETSMEDIAPROVIDER_H
#define PUCAMERATRANSIENTASSETSMEDIAPROVIDER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PUTransientImageManager;


#import "PUMediaProvider.h"

@interface PUCameraTransientAssetsMediaProvider : PUMediaProvider {
    uint8_t _latestRequestId;
    NSObject<OS_dispatch_queue> *_videoFrameGeneratorQueue;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_livePhotoRequestQueue; // ivar: __livePhotoRequestQueue
@property (readonly, nonatomic) NSMutableDictionary *_livePhotoRequestsByRequestID; // ivar: __livePhotoRequestsByRequestID
@property (readonly, nonatomic) NSObject<PUTransientImageManager> *_transientImageManager; // ivar: __transientImageManager
@property (copy, nonatomic) id *supplementaryLivePhotoImageSource; // ivar: _supplementaryLivePhotoImageSource


-(BOOL)_requestLivePhotoWithSupplementaryImageSourceIfPossibleWithAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(id)_livePhotoRequestWithID:(int)arg0 ;
-(id)_playerItemForVideoURL:(id)arg0 ;
-(id)_videoCompositionForAVAsset:(id)arg0 filterName:(id)arg1 ;
-(id)init;
-(id)initWithTransientImageManager:(id)arg0 supplementaryLivePhotoImageSource:(id)arg1 ;
-(int)_nextRequestId;
-(int)_requestLivePhotoForTransientAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestAVAssetForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(void)_handleDelegateImageRequestResultWithImage:(id)arg0 info:(id)arg1 requestID:(int)arg2 ;
-(void)_handleLivePhotoPairedVideoRequestResultURL:(id)arg0 filterName:(id)arg1 stillDisplayTime:(struct ? )arg2 error:(id)arg3 requestID:(int)arg4 ;
-(void)_removeLivePhotoRequestWithID:(int)arg0 ;
-(void)_requestAVAssetForVideoURL:(id)arg0 resultHandler:(id)arg1 ;
-(void)_setLivePhotoRequest:(id)arg0 forRequestID:(int)arg1 ;
-(void)_updateResultForLivePhotoRequestID:(int)arg0 ;
-(void)cancelImageRequest:(int)arg0 ;


@end


#endif