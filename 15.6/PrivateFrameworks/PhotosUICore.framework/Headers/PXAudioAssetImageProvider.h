// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAUDIOASSETIMAGEPROVIDER_H
#define PXAUDIOASSETIMAGEPROVIDER_H

@class NSString, NSCache, NSMutableDictionary, NSCountedSet;
@protocol PXUIImageProvider, OS_os_log;

#import <Foundation/Foundation.h>


@interface PXAudioAssetImageProvider : NSObject <PXUIImageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (readonly, nonatomic) NSMutableDictionary *imageLoaderByIdentifier; // ivar: _imageLoaderByIdentifier
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSMutableDictionary *requestByClientID; // ivar: _requestByClientID
@property (readonly, nonatomic) NSCountedSet *requestCountByCacheSpec; // ivar: _requestCountByCacheSpec
@property (nonatomic) NSInteger requestCounter; // ivar: _requestCounter
@property (readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec; // ivar: _requestIDByCacheSpec
@property (readonly, nonatomic) NSMutableDictionary *requestsByImageLoaderIdentifier; // ivar: _requestsByImageLoaderIdentifier
@property (readonly) Class superclass;


-(NSInteger)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(id)createImageLoaderForRequest:(id)arg0 ;
-(id)imageCacheKeyForRequest:(id)arg0 ;
-(id)imageLoaderCoalescingKeyForRequest:(id)arg0 ;
-(id)init;
-(id)resultForCompletedImageLoader:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(void)_handleImageLoaderCompletionForIdentifier:(id)arg0 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif