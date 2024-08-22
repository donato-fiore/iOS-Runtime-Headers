// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSURLBACKGROUNDSESSION_H
#define __NSURLBACKGROUNDSESSION_H

@class NSXPCConnection, NSMutableDictionary, NSMutableArray, NSMutableSet, NSURL, NSError, NSString;
@protocol NDBackgroundSessionClient, NSURLSessionSubclass, NDBackgroundSessionProtocol, OS_dispatch_queue;


#import "NSURLSession.h"

@interface __NSURLBackgroundSession : NSURLSession <NDBackgroundSessionClient, NSURLSessionSubclass>

 {
    NSUInteger _identSeed;
    id<NDBackgroundSessionProtocol> *_remoteSession;
    NSXPCConnection *_xpcConn;
    NSMutableDictionary *_tasks;
    NSMutableArray *_taskIDsToFailOnReconnection;
    NSMutableSet *_taskIDsGettingAuthHeaders;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    id *_invalidateCallback;
    SmartBlockWithArgs<bool> _backgroundSessionDidFinishAppWakeBlock;
    NSURL *_downloadDirectory;
    NSURL *_assetDownloadDirectory;
    BOOL _isPrivileged;
    BOOL _isInvalid;
    BOOL _companionAvailable;
    NSError *_invalidationError;
    BOOL _tryToReconnect;
    BOOL _immediatelyReconnectAfterInterruption;
    int _notifyToken;
}


@property (copy) NSString *appWakeUUID; // ivar: _appWakeUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg0 mediaSelections:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg0 assetTitle:(id)arg1 assetArtworkData:(id)arg2 options:(id)arg3 downloadConfiguration:(id)arg4 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(id)_AVAssetDownloadTaskForURL:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(id)_dataTaskWithTaskForClass:(id)arg0 ;
-(id)_downloadTaskWithTaskForClass:(id)arg0 ;
-(id)_uploadTaskWithTaskForClass:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 delegateDispatchQueue:(id)arg3 ;
-(id)webSocketTaskForRequest:(id)arg0 ;
-(id)webSocketTaskForURL:(id)arg0 protocols:(id)arg1 ;
-(void)_onqueue_completeInvalidation:(BOOL)arg0 ;
-(void)_onqueue_flushWithCompletionHandler:(id)arg0 ;
-(void)_onqueue_getTasksWithCompletionHandler:(id)arg0 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(id)arg0 ;
-(void)_useTLSSessionCacheFromSession:(id)arg0 ;
-(void)appWasLaunchedForBackgroundSession:(id)arg0 ;
-(void)backgroundAVAssetDownloadTask:(NSUInteger)arg0 didFinishDownloadForMediaSelectionPropertyList:(id)arg1 ;
-(void)backgroundAVAssetDownloadTask:(NSUInteger)arg0 didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3 forMediaSelectionPropertyList:(id)arg4 ;
-(void)backgroundAVAssetDownloadTask:(NSUInteger)arg0 didReceiveDownloadToken:(NSUInteger)arg1 ;
-(void)backgroundAVAssetDownloadTask:(NSUInteger)arg0 didResolveMediaSelectionProperyList:(id)arg1 reply:(id)arg2 ;
-(void)backgroundAVAssetDownloadTask:(NSUInteger)arg0 willDownloadToURL:(id)arg1 ;
-(void)backgroundAVAssetDownloadTask:(NSUInteger)arg0 willDownloadVariants:(id)arg1 reply:(id)arg2 ;
-(void)backgroundAVAssetDownloadTaskDidUpdateProgress:(NSUInteger)arg0 totalBytesWritten:(NSUInteger)arg1 totalBytesExpectedToWrite:(NSUInteger)arg2 ;
-(void)backgroundDataTask:(NSUInteger)arg0 didReceiveData:(id)arg1 withReply:(id)arg2 ;
-(void)backgroundDataTaskDidBecomeDownloadTask:(NSUInteger)arg0 ;
-(void)backgroundDownloadTask:(NSUInteger)arg0 didFinishDownloadingToURL:(id)arg1 response:(id)arg2 reply:(id)arg3 ;
-(void)backgroundDownloadTask:(NSUInteger)arg0 didResumeAtOffset:(NSInteger)arg1 expectedTotalBytes:(NSInteger)arg2 ;
-(void)backgroundDownloadTask:(NSUInteger)arg0 didWriteData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)backgroundSessionDidFinishAppWake:(id)arg0 reply:(id)arg1 ;
-(void)backgroundSessionDidStartAppWake:(id)arg0 reply:(id)arg1 ;
-(void)backgroundTask:(NSUInteger)arg0 _willSendRequestForEstablishedConnection:(id)arg1 reply:(id)arg2 ;
-(void)backgroundTask:(NSUInteger)arg0 didCompleteWithError:(id)arg1 taskMetrics:(id)arg2 info:(id)arg3 reply:(id)arg4 ;
-(void)backgroundTask:(NSUInteger)arg0 didReceiveChallenge:(id)arg1 reply:(id)arg2 ;
-(void)backgroundTask:(NSUInteger)arg0 didReceiveResponse:(id)arg1 transactionMetrics:(id)arg2 ;
-(void)backgroundTask:(NSUInteger)arg0 didReceiveResponse:(id)arg1 transactionMetrics:(id)arg2 reply:(id)arg3 ;
-(void)backgroundTask:(NSUInteger)arg0 didSendBodyData:(NSInteger)arg1 totalBytesSent:(NSInteger)arg2 totalBytesExpectedToSend:(NSInteger)arg3 ;
-(void)backgroundTask:(NSUInteger)arg0 getAuthHeadersForResponse:(id)arg1 reply:(id)arg2 ;
-(void)backgroundTask:(NSUInteger)arg0 hasConnectionWaitingWithError:(id)arg1 ;
-(void)backgroundTask:(NSUInteger)arg0 hasConnectionWaitingWithReason:(NSInteger)arg1 ;
-(void)backgroundTask:(NSUInteger)arg0 needNewBodyStream:(BOOL)arg1 withReply:(id)arg2 ;
-(void)backgroundTask:(NSUInteger)arg0 willBeginDelayedRequest:(id)arg1 reply:(id)arg2 ;
-(void)backgroundTask:(NSUInteger)arg0 willPerformHTTPRedirection:(id)arg1 withNewRequest:(id)arg2 reply:(id)arg3 ;
-(void)backgroundTaskDidResume:(NSUInteger)arg0 ;
-(void)backgroundTaskDidSuspend:(NSUInteger)arg0 ;
-(void)backgroundTaskHasConnectionWaiting:(NSUInteger)arg0 ;
-(void)cameIntoForeground:(id)arg0 ;
-(void)credStorage_allCredentialsWithReply:(id)arg0 ;
-(void)credStorage_credentialsForProtectionSpace:(id)arg0 reply:(id)arg1 ;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg0 reply:(id)arg1 ;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(id)arg0 ;
-(void)credStorage_removeCredential:(id)arg0 forProtectionSpace:(id)arg1 ;
-(void)credStorage_setCredential:(id)arg0 forProtectionSpace:(id)arg1 ;
-(void)credStorage_setDefaultCredential:(id)arg0 forProtectionSpace:(id)arg1 ;
-(void)dealloc;
-(void)openFileAtPath:(id)arg0 mode:(int)arg1 withReply:(id)arg2 ;
-(void)wentToBackground:(id)arg0 ;
-(void)willRetryBackgroundDataTask:(NSUInteger)arg0 withError:(id)arg1 transactionMetrics:(id)arg2 ;


@end


#endif