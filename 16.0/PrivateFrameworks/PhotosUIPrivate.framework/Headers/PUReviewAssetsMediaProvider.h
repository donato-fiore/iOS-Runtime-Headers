// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWASSETSMEDIAPROVIDER_H
#define PUREVIEWASSETSMEDIAPROVIDER_H

@class PHConcurrentMapTable;


#import "PUEditableMediaProvider.h"

@interface PUReviewAssetsMediaProvider : PUEditableMediaProvider {
    uint8_t _nextRequestIdentifier;
}


@property (readonly, nonatomic) PHConcurrentMapTable *_mediaRequests; // ivar: __mediaRequests
@property (readonly, nonatomic) CGFloat _screenScale; // ivar: __screenScale


-(id)_resizeImageAtURL:(id)arg0 imageUTI:(id)arg1 targetSize:(struct CGSize )arg2 bakeInOrientation:(BOOL)arg3 error:(*id)arg4 ;
-(id)init;
-(int)_incrementRequestIdentifier;
-(int)_requestAdjustmentDataForAsset:(id)arg0 resultHandler:(id)arg1 ;
-(int)requestAVAssetForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestAsynchronousVideoURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(void)cancelImageRequest:(int)arg0 ;


@end


#endif