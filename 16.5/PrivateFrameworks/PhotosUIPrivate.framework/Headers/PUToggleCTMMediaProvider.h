// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTOGGLECTMMEDIAPROVIDER_H
#define PUTOGGLECTMMEDIAPROVIDER_H



#import "PUEditableMediaProvider.h"
#import "PUMediaProvider.h"
#import "PUBrowsingViewModel.h"

@interface PUToggleCTMMediaProvider : PUEditableMediaProvider

@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(BOOL)_shouldToggleCTMForAsset:(id)arg0 ;
-(id)_ctmImageResourceForAsset:(id)arg0 ;
-(id)_ctmPairedVideoResourceForAsset:(id)arg0 ;
-(id)_ctmVideoResourceForAsset:(id)arg0 ;
-(id)_imageWithSize:(struct CGSize )arg0 string:(id)arg1 ;
-(id)_requestOptions;
-(id)_resourceOfType:(NSInteger)arg0 forAsset:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 mediaProvider:(id)arg1 ;
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