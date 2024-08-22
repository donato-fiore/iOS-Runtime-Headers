// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFILMSTRIPMEDIAPROVIDER_H
#define PUFILMSTRIPMEDIAPROVIDER_H

@class NSMutableDictionary, NSMutableArray, NSCache, AVAssetImageGenerator, AVAsset, UIImage, AVVideoComposition;
@protocol OS_dispatch_queue;


#import "PUMediaProvider.h"

@interface PUFilmstripMediaProvider : PUMediaProvider {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSMutableDictionary *_ivarQueue_resultsByRequestNumber;
    NSMutableDictionary *_ivarQueue_completionHandlersByRequestNumber;
    NSMutableArray *_ivarQueue_pendingResults;
}


@property (retain, nonatomic, setter=_setImageCache:) NSCache *_imageCache; // ivar: __imageCache
@property (retain, nonatomic, setter=_setImageGenerator:) AVAssetImageGenerator *_imageGenerator; // ivar: __imageGenerator
@property (nonatomic, setter=_setRequestNumber:) NSInteger _requestNumber; // ivar: __requestNumber
@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (nonatomic) BOOL deliversImagesInOrder; // ivar: _deliversImagesInOrder
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) CGFloat timeTolerance; // ivar: _timeTolerance
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition


-(id)init;
-(id)initWithAVAsset:(id)arg0 videoComposition:(id)arg1 ;
-(int)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(void)_deliverPendingResults;
-(void)_deliverPlaceholderImage;
-(void)_deliverResult:(id)arg0 ;
-(void)_didGenerateImage:(id)arg0 error:(id)arg1 requestedTime:(struct ? )arg2 actualTime:(struct ? )arg3 generatorResult:(NSInteger)arg4 forResult:(id)arg5 ;
-(void)_generateImageForResult:(id)arg0 ;
-(void)_handleSourceTimeLoadedForAsset:(id)arg0 time:(CGFloat)arg1 targetSize:(struct CGSize )arg2 contentMode:(NSInteger)arg3 requestNumber:(NSInteger)arg4 ;
-(void)_performIvarRead:(id)arg0 ;
-(void)_performIvarWrite:(id)arg0 ;
-(void)cancelAllRequests;
-(void)cancelImageRequest:(int)arg0 ;
-(void)dealloc;


@end


#endif