// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFLOCALSESSIONTASK_H
#define __NSCFLOCALSESSIONTASK_H

@class NSURL, NSInputStream, NSOutputStream, NSOperationQueue, NSString;
@protocol NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, __NSCFURLSessionConnectionDelegate, OS_dispatch_data, OS_dispatch_source;


#import "NSURLSessionTask.h"
#import "__NSCFURLSessionConnection.h"

@interface __NSCFLocalSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, __NSCFURLSessionConnectionDelegate>

 {
    NSURL *_uploadFile;
    NSObject<OS_dispatch_data> *_dataTaskData;
    id *_dataTaskCompletion;
    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    NSUInteger _suspendCount;
    id *_async_initialization;
    NSObject<OS_dispatch_source> *_resourceTimeout;
    os_unfair_lock_s _connKeyLock;
    *void _connKey;
    CGFloat _startTimeoutTime;
    NSObject<OS_dispatch_source> *_startTimeoutTimer;
    NSObject<OS_dispatch_source> *_payloadTransmissionTimer;
    NSObject<OS_dispatch_source> *_willSendRequestTimer;
    NSInputStream *_socketReadStreamForUpgrade;
    NSOutputStream *_socketWriteStreamForUpgrade;
    ? _connectionForUpgrade;
    NSObject<OS_dispatch_data> *_extraBytes;
    NSOperationQueue *_connectionWorkQueue;
    int _connectionWorkQueueSuspensionCount;
    BOOL _pendingResponseDisposition;
    BOOL _pendingResponseDisposition_didFinish;
    BOOL _didIssueWaitingForConnectivity;
    BOOL _didIssueDidFinish;
    BOOL _suspendedForDisposition;
    BOOL _didCheckMixedReplace;
    BOOL _isMixedReplace;
    BOOL _sentDidFinishCollectingMetrics;
}


@property (retain) __NSCFURLSessionConnection *cfConn; // ivar: _cfConn
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needSendingMetrics;
-(id)_onqueue_strippedMutableRequest;
-(id)error:(id)arg0 code:(NSInteger)arg1 ;
-(id)initWithBackgroundTaskInfo:(id)arg0 taskGroup:(id)arg1 ;
-(id)initWithOriginalRequest:(id)arg0 ident:(NSUInteger)arg1 taskGroup:(id)arg2 ;
-(id)resourceTimeoutError;
-(void)_askForConnectedSocketLater;
-(void)_didSendMetrics;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_adjustBytesPerSecondLimit:(NSInteger)arg0 ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_adjustPriorityHint:(float)arg0 incremental:(BOOL)arg1 ;
-(void)_onqueue_cancel;
-(void)_onqueue_cancel_with_error:(id)arg0 ;
-(void)_onqueue_completeInitialization;
-(void)_onqueue_conditionalRequirementsChanged:(BOOL)arg0 ;
-(void)_onqueue_connectionWaitingWithReason:(NSInteger)arg0 ;
-(void)_onqueue_didFinishWithError:(id)arg0 ;
-(void)_onqueue_didReceiveChallenge:(id)arg0 request:(id)arg1 withCompletion:(id)arg2 ;
-(void)_onqueue_didReceiveDispatchData:(id)arg0 completion:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg0 completion:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg0 redirectRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)_onqueue_didSendBodyBytes:(NSInteger)arg0 totalBytesSent:(NSInteger)arg1 totalBytesExpectedToSend:(NSInteger)arg2 ;
-(void)_onqueue_expectedProgressTargetChanged;
-(void)_onqueue_needConnectedSocketToHost:(id)arg0 port:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)_onqueue_needNewBodyStream:(id)arg0 withCompletion:(id)arg1 ;
-(void)_onqueue_resume;
-(void)_onqueue_setupNextEffectiveConfigurationWithCompletionHandler:(id)arg0 ;
-(void)_onqueue_suspend;
-(void)_onqueue_willCacheResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg0 withCompletion:(id)arg1 ;
-(void)_private_onqueue_didReceiveResponseDisposition:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_setConnectionCacheKey:(*void)arg0 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel_with_error:(id)arg0 ;
-(void)connection:(id)arg0 _conditionalRequirementsChanged:(BOOL)arg1 ;
-(void)connection:(id)arg0 _willSendRequestForEstablishedConnection:(id)arg1 completion:(id)arg2 ;
-(void)connection:(id)arg0 challenged:(id)arg1 authCallback:(id)arg2 ;
-(void)connection:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 completion:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 completion:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveSocketInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveTCPConnection:(struct shared_ptr<TransportConnection> )arg1 extraBytes:(id)arg2 ;
-(void)connection:(id)arg0 needConnectedSocketToHost:(id)arg1 port:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)connection:(id)arg0 request:(id)arg1 needsNewBodyStreamCallback:(id)arg2 ;
-(void)connection:(id)arg0 sentBodyBytes:(id)arg1 totalBytes:(id)arg2 expectedBytes:(id)arg3 ;
-(void)connection:(id)arg0 waitingWithReason:(NSInteger)arg1 ;
-(void)connection:(id)arg0 wasRedirected:(id)arg1 newRequest:(id)arg2 responseCallback:(id)arg3 ;
-(void)connection:(id)arg0 willCacheResponse:(id)arg1 responseCallback:(id)arg2 ;
-(void)connectionWillFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveInformationalResponse:(id)arg0 ;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)set_timeoutIntervalForResource:(CGFloat)arg0 ;
-(void)startResourceTimer;


@end


#endif