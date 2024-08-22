// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTMEDIAPROVIDER_H
#define PXIMPORTMEDIAPROVIDER_H

@class NSMutableDictionary;


#import "PXMediaProvider.h"
#import "PXImportImageCache.h"
#import "PXLoadingStatusManager.h"

@interface PXImportMediaProvider : PXMediaProvider

@property (retain, nonatomic) NSMutableDictionary *extensionPlaceholderCachesByRequestSize; // ivar: _extensionPlaceholderCachesByRequestSize
@property (readonly, nonatomic) CGSize gridItemSize;
@property (nonatomic) BOOL hasBeenIdle; // ivar: _hasBeenIdle
@property (retain, nonatomic) PXImportImageCache *imageCache; // ivar: _imageCache
@property (nonatomic) NSInteger imageRequestsInflight; // ivar: _imageRequestsInflight
@property (nonatomic) NSInteger lastRequestsInflight; // ivar: _lastRequestsInflight
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: loadingStatusManager
@property (nonatomic) NSInteger nextRequestID; // ivar: _nextRequestID
@property (readonly, nonatomic) unsigned short thumbnailImageFormat; // ivar: _thumbnailImageFormat
@property (retain, nonatomic) NSMutableDictionary *thumbnailRequestsByID; // ivar: _thumbnailRequestsByID


-(BOOL)thumbnailExistsForModel:(id)arg0 ;
-(BOOL)thumbnailExistsForModel:(id)arg0 atSize:(NSUInteger)arg1 ;
-(CGFloat)idleTimeOut;
-(NSInteger)imageOfSize:(NSUInteger)arg0 forModel:(id)arg1 localCacheOnly:(BOOL)arg2 priority:(unsigned char)arg3 completion:(id)arg4 ;
-(NSInteger)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestCGImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestImageForImportItem:(id)arg0 ofSize:(NSUInteger)arg1 completion:(id)arg2 ;
-(NSInteger)requestImageForImportItem:(id)arg0 ofSize:(NSUInteger)arg1 priority:(unsigned char)arg2 completion:(id)arg3 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(NSInteger)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_newPlaceholderImageForItemWithExtension:(id)arg0 size:(struct CGSize )arg1 ;
-(id)_placeholderExtensionForItem:(id)arg0 ;
-(id)_placeholderForItem:(id)arg0 size:(NSUInteger)arg1 ;
-(id)cachedImageForModel:(id)arg0 atSize:(NSUInteger)arg1 ;
-(id)initWithImageFormat:(unsigned short)arg0 ;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)enumerateAvailableThumbnailDataFormats:(id)arg0 ;
-(void)performIdleProcessingIfNecessary;
-(void)ppt_sendMediaProviderDidProcessAsset:(id)arg0 ;
-(void)sendMediaProviderThumbnailingBecameIdle;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif