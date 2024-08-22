// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXPHOTOKITADJUSTEDPHLIVEPHOTOREQUEST_H
#define _PXPHOTOKITADJUSTEDPHLIVEPHOTOREQUEST_H

@class PXPhotoKitAdjustedUIMediaRequest, UIImage, NSDictionary, AVPlayerItem, PHLivePhotoRequestOptions;


#import "_PXPhotoKitAdjustedUIImageRequest.h"
#import "_PXPhotoKitAdjustedVideoRequest.h"

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : PXPhotoKitAdjustedUIMediaRequest {
    _PXPhotoKitAdjustedUIImageRequest *_imageRequest;
    _PXPhotoKitAdjustedVideoRequest *_videoRequest;
    UIImage *_image;
    NSDictionary *_imageResultInfo;
    AVPlayerItem *_playerItem;
    NSDictionary *_playerItemResultInfo;
}


@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, nonatomic) PHLivePhotoRequestOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)initWithRenderQueue:(id)arg0 asset:(id)arg1 targetSize:(struct CGSize )arg2 contentMode:(NSInteger)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(id)arg6 ;
-(void)_handleImageRequestResult:(id)arg0 info:(id)arg1 ;
-(void)_handleVideoRequestResult:(id)arg0 info:(id)arg1 ;
-(void)_prepareLivePhotoIfPossible;
-(void)cancel;
-(void)start;


@end


#endif