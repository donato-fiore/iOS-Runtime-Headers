// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEWRAPPEDMEDIAPROVIDER_H
#define AEWRAPPEDMEDIAPROVIDER_H

@class PXUIMediaProvider, PUMediaProvider;



@interface AEWrappedMediaProvider : PXUIMediaProvider

@property (readonly, nonatomic) PUMediaProvider *_internalMediaProvider; // ivar: __internalMediaProvider


-(NSInteger)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)initWithMediaProvider:(id)arg0 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;


@end


#endif