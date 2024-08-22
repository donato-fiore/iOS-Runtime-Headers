// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXMEDIAPROVIDER_H
#define PUPXMEDIAPROVIDER_H

@class PXUIMediaProvider;


#import "PUMediaProvider.h"

@interface PUPXMediaProvider : PUMediaProvider

@property (readonly, nonatomic) PXUIMediaProvider *underlyingMediaProvider; // ivar: _underlyingMediaProvider


-(id)init;
-(id)initWithUnderlyingMediaProvider:(id)arg0 ;
-(int)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(void)cancelImageRequest:(int)arg0 ;


@end


#endif