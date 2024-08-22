// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSIMAGECACHE_H
#define STSIMAGECACHE_H

@class NSOperationQueue, NSURLSession, NSURLCache, NSMutableDictionary, NSString, UIImage;
@protocol NSURLSessionDownloadDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STSImageCache : NSObject <NSURLSessionDownloadDelegate>

 {
    NSOperationQueue *_operationQueue;
    NSURLSession *_imageSession;
    NSURLCache *_urlCache;
    NSMutableDictionary *_staticImageCache;
    NSMutableDictionary *_firstFrameImageCache;
    NSMutableDictionary *_imageInfoCache;
    NSMutableDictionary *_downloadOperationInfos;
    NSMutableDictionary *_cancelledDownloadOperationInfos;
    NSObject<OS_dispatch_queue> *_queuedOperationsInfoQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *searchProviderImage; // ivar: _searchProviderImage
@property (readonly) Class superclass;


+(id)sharedCache;
-(BOOL)_allowImageInfoCaching;
-(id)_imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)_imageInfoUsingAVAssetReaderWithFileURL:(id)arg0 ;
-(id)_imageInfoWithData:(id)arg0 ;
-(id)_imageSession;
-(id)fetchCachedImageInfoForURL:(id)arg0 ;
-(id)fetchCachedStaticImageForURL:(id)arg0 ;
-(id)fetchCachedStaticImageForURL:(id)arg0 hasMultipleFrames:(*BOOL)arg1 ;
-(id)init;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)cancelAllDownloads;
-(void)cancelQueuedDownloadForURL:(id)arg0 ;
-(void)clearInMemoryCache;
// -(void)fetchImageDataWithURL:(id)arg0 priority:(NSInteger)arg1 isSource:(BOOL)arg2 begin:(id)arg3 progress:(unk)arg4 completion:(id)arg5  ;
// -(void)fetchImageWithURL:(id)arg0 priority:(NSInteger)arg1 isSource:(BOOL)arg2 begin:(id)arg3 progress:(unk)arg4 completion:(id)arg5  ;
-(void)setPriority:(NSInteger)arg0 forQueuedDownloadWithURL:(id)arg1 ;


@end


#endif