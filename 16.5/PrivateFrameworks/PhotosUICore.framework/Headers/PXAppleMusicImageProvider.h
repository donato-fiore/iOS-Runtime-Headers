// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXAPPLEMUSICIMAGEPROVIDER_H
#define PXAPPLEMUSICIMAGEPROVIDER_H



#import "PXAudioAssetImageProvider.h"

@interface PXAppleMusicImageProvider : PXAudioAssetImageProvider



-(id)createImageLoaderForRequest:(id)arg0 ;
-(id)imageCacheKeyForRequest:(id)arg0 ;
-(id)imageLoaderCoalescingKeyForRequest:(id)arg0 ;
-(id)resultForCompletedImageLoader:(id)arg0 request:(id)arg1 error:(*id)arg2 ;


@end


#endif