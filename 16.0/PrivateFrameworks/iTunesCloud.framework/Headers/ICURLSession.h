// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLSESSION_H
#define ICURLSESSION_H

@class NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSURLSession, NSString;
@protocol NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ICURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_oversizeLoggingQueue;
    NSUInteger _pendingRequestsProcessingCounter;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableSet *_activeRequests;
    NSMutableDictionary *_completionHandlers;
    BOOL _paused;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    NSURLSession *_urlSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxConcurrentRequests; // ivar: _maxConcurrentRequests
@property (readonly) Class superclass;


+(NSUInteger)defaultMaximumConcurrentRequests;
-(CGFloat)_timeoutForRequest:(id)arg0 ;
-(id)_createURLSessionTaskForRequest:(id)arg0 usingSession:(id)arg1 ;
-(id)_createURLSessionWithConfiguration:(id)arg0 ;
-(id)_newResponseForRequest:(id)arg0 ;
-(id)_requestForTask:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 maxConcurrentRequests:(NSUInteger)arg1 ;
-(id)initWithConfiguration:(id)arg0 maxConcurrentRequests:(NSUInteger)arg1 qualityOfService:(NSInteger)arg2 ;
-(void)URLSession:(id)arg0 avAssetDownloadTask:(id)arg1 didReceiveAVAssetDownloadToken:(NSUInteger)arg2 ;
-(void)URLSession:(id)arg0 avAssetDownloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_checkRequestTimeouts;
-(void)_enqueueRequest:(id)arg0 ;
-(void)_finishRequest:(id)arg0 ;
-(void)_processPendingRequests;
-(void)_processRequest:(id)arg0 ;
-(void)_scheduleNextRequestTimeoutCheck;
-(void)_updateProgressForSessionTask:(id)arg0 withTotalBytesWritten:(NSInteger)arg1 totalBytesExpectedToWrite:(NSInteger)arg2 ;
-(void)cancelRequest:(id)arg0 ;
-(void)cancelRequest:(id)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)enqueueDataRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)enqueueDownloadRequest:(id)arg0 toDestination:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)enqueueDownloadRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)enqueueUploadRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)pause;
-(void)pauseRequest:(id)arg0 ;
-(void)resume;
-(void)resumeRequest:(id)arg0 ;


@end


#endif