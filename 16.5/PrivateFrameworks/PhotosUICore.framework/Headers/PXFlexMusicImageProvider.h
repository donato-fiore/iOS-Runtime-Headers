// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFLEXMUSICIMAGEPROVIDER_H
#define PXFLEXMUSICIMAGEPROVIDER_H

@protocol OS_dispatch_queue;


#import "PXAudioAssetImageProvider.h"

@interface PXFlexMusicImageProvider : PXAudioAssetImageProvider

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // ivar: _imageLoadingQueue


-(id)createImageLoaderForRequest:(id)arg0 ;
-(id)imageCacheKeyForRequest:(id)arg0 ;
-(id)imageLoaderCoalescingKeyForRequest:(id)arg0 ;
-(id)init;
-(id)resultForCompletedImageLoader:(id)arg0 request:(id)arg1 error:(*id)arg2 ;


@end


#endif