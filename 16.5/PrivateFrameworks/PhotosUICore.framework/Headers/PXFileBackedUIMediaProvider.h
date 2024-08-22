// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFILEBACKEDUIMEDIAPROVIDER_H
#define PXFILEBACKEDUIMEDIAPROVIDER_H

@class NSOperationQueue, NSCache;


#import "PXUIMediaProvider.h"

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider {
    NSOperationQueue *_queue;
    NSCache *_cache;
}




-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_createImageForKey:(id)arg0 error:(*id)arg1 ;
-(id)_resizeImageAtURL:(id)arg0 imageUTI:(id)arg1 targetSize:(struct CGSize )arg2 bakeInOrientation:(BOOL)arg3 error:(*id)arg4 ;
-(id)init;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)_handleImageCreated:(id)arg0 imageKey:(id)arg1 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;


@end


#endif