// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACSURLSESSION_H
#define ACSURLSESSION_H

@class NSOperationQueue, NSDictionary, NSURLSession, NSMutableDictionary, NSURLSessionConfiguration, NSString;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate, ACSURLSessionDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionStreamDelegate>



@property (retain) NSObject<ACSURLSessionDelegate> *_clientDelegate; // ivar: __clientDelegate
@property (retain) NSOperationQueue *_clientDelegateOpQueue; // ivar: __clientDelegateOpQueue
@property (retain) NSDictionary *_locateOptions; // ivar: __locateOptions
@property (retain) NSObject<OS_os_log> *_logHandle; // ivar: __logHandle
@property (retain) NSURLSession *_nsurlSession; // ivar: __nsurlSession
@property int _phase; // ivar: __phase
@property (retain) NSObject<OS_dispatch_queue> *_queue; // ivar: __queue
@property (retain) NSMutableDictionary *_tasks; // ivar: __tasks
@property BOOL canUseCachingServer; // ivar: _canUseCachingServer
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) NSObject<ACSURLSessionDelegate> *delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *locateOptions;
@property (copy) NSString *sessionDescription;
@property (readonly) Class superclass;


+(id)sessionWithConfiguration:(id)arg0 canUseCachingServer:(BOOL)arg1 locateOptions:(id)arg2 ;
+(id)sessionWithConfiguration:(id)arg0 canUseCachingServer:(BOOL)arg1 locateOptions:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
+(id)sharedSession;
-(BOOL)_resumeData:(id)arg0 toNSURLResumeData:(*id)arg1 originalRequest:(*id)arg2 currentRequest:(*id)arg3 error:(*id)arg4 ;
-(id)_downloadTaskWithResumeData:(id)arg0 completionHandler:(id)arg1 ;
-(id)_errorWithResumeDataFromError:(id)arg0 originalRequest:(id)arg1 currentRequest:(id)arg2 ;
-(id)_keyForNSURLTask:(id)arg0 ;
-(id)_linkedLocationWithLocation:(id)arg0 ;
-(id)_onqueue_taskForNSURLTask:(id)arg0 ;
-(id)_onqueue_uniqueTasks;
-(id)_resumeDataWithNSURLResumeData:(id)arg0 originalRequest:(id)arg1 currentRequest:(id)arg2 error:(*id)arg3 ;
-(id)dataTaskWithRequest:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg0 ;
-(id)dataTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg0 ;
-(id)downloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg0 ;
-(id)downloadTaskWithResumeData:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg0 ;
-(id)downloadTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 canUseCachingServer:(BOOL)arg1 locateOptions:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 completionHandler:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 completionHandler:(id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg0 ;
-(void)URLSession:(id)arg0 betterRouteDiscoveredForStreamTask:(id)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(NSInteger)arg2 expectedTotalBytes:(NSInteger)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 readClosedForStreamTask:(id)arg1 ;
-(void)URLSession:(id)arg0 streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1 ;
-(void)URLSession:(id)arg0 writeClosedForStreamTask:(id)arg1 ;
-(void)_addTask:(id)arg0 ;
-(void)_cancelDownloadTask:(id)arg0 byProducingResumeData:(id)arg1 ;
-(void)_cancelTask:(id)arg0 ;
-(void)_copyAttributesFromNSURLTask:(id)arg0 toNSURLTask:(id)arg1 ;
-(void)_dataTask:(id)arg0 completedWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)_downloadTask:(id)arg0 completedWithLocation:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)_locateCachingServerForURL:(id)arg0 isUpload:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_onqueue_addTask:(id)arg0 forNSURLTask:(id)arg1 ;
-(void)_onqueue_removeTaskForNSURLTask:(id)arg0 ;
-(void)_onqueue_resumeTask:(id)arg0 ;
-(void)_onqueue_task:(id)arg0 willUseCachingServer:(BOOL)arg1 newRequest:(id)arg2 completionHandler:(id)arg3 ;
-(void)_removeTask:(id)arg0 ;
-(void)_resumeTask:(id)arg0 ;
-(void)_suspendTask:(id)arg0 ;
-(void)dealloc;
-(void)finishTasksAndInvalidate;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getAllTasksWithCompletionHandler:(id)arg0 ;
-(void)getTasksWithCompletionHandler:(id)arg0 ;
-(void)invalidateAndCancel;
-(void)resetWithCompletionHandler:(id)arg0 ;


@end


#endif