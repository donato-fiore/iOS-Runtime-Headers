// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXJOININGMEDIAPROVIDER_H
#define PXJOININGMEDIAPROVIDER_H

@class NSArray, NSDictionary, NSCountedSet, NSMutableDictionary;


#import "PXMediaProvider.h"

@interface PXJoiningMediaProvider : PXMediaProvider

@property (readonly, nonatomic) NSArray *allMediaProviders; // ivar: _allMediaProviders
@property (readonly, nonatomic) NSDictionary *mediaProvidersByAssetClassName; // ivar: _mediaProvidersByAssetClassName
@property (readonly, nonatomic) NSCountedSet *requestCountByCacheSpec; // ivar: _requestCountByCacheSpec
@property (readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec; // ivar: _requestIDByCacheSpec


-(NSInteger)_externalRequestIDForMediaProvider:(id)arg0 mediaProviderRequestID:(NSInteger)arg1 ;
-(NSInteger)requestCGImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(NSInteger)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)_mediaProviderForAsset:(id)arg0 ;
-(id)init;
-(id)initWithMediaProvidersByAssetClassName:(id)arg0 ;
-(id)thumbnailDataForAsset:(id)arg0 targetSize:(struct CGSize )arg1 onlyFromCache:(BOOL)arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg3 ;
-(void)cancelImageRequest:(NSInteger)arg0 ;
-(void)startCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(void)stopCachingImagesForAllAssets;
-(void)stopCachingImagesForAssets:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif