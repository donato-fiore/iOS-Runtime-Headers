// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSYNTHETICUIMEDIAPROVIDER_H
#define PXSYNTHETICUIMEDIAPROVIDER_H

@class NSCache;
@protocol OS_dispatch_queue;


#import "PXUIMediaProvider.h"

@interface PXSyntheticUIMediaProvider : PXUIMediaProvider

@property (readonly, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSCache *urlCache; // ivar: _urlCache


-(NSInteger)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_imageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 outInfo:(*id)arg4 ;
-(id)init;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;


@end


#endif