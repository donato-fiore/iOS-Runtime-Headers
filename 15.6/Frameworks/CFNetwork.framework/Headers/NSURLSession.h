// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLSESSION_H
#define NSURLSESSION_H

@class NSDictionary, NSOperationQueue, NSUUID, NSMutableDictionary, NSString;
@protocol NSCopying, __NSURLSessionTaskGroupForConfiguration, OS_dispatch_queue, NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "__CFN_ConnectionContextManager.h"
#import "__NSCFURLSessionDelegateWrapper.h"
#import "NSURLSessionConfiguration.h"
#import "__CFN_SessionMetrics.h"
#import "NSURLSession.h"

@interface NSURLSession : NSObject <NSCopying, __NSURLSessionTaskGroupForConfiguration>

 {
    __CFN_ConnectionContextManager *_nwContextManager;
    shared_ptr<NSObject<OS_nw_context>> _nwContext;
    NSDictionary *_atsState_ivar;
    os_unfair_lock_s _lock;
    BOOL _invalid_ivar;
    BOOL _isSharedSession_ivar;
    __NSCFURLSessionDelegateWrapper *_delegateWrapper;
    NSOperationQueue *_delegateQueue_ivar;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    NSURLSessionConfiguration *_local_immutable_configuration_ivar;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid_ivar;
    NSMutableDictionary *_httpFallbackHosts;
    NSMutableDictionary *_coalescing;
    __CFN_SessionMetrics *_metrics;
}


@property (readonly, weak) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly, weak) NSURLSession *_groupSession;
@property (copy, nonatomic) NSString *_tlsSessionCachePrefix; // ivar: _tlsSessionCachePrefix
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) NSObject<NSURLSessionDelegate> *delegate; // ivar: _delegate_ivar
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger nextSeed;
@property (copy) NSString *sessionDescription; // ivar: _sessionDescription_ivar
@property (readonly) Class superclass;


+(BOOL)_backgroundServiceAvailable;
+(id)_sessionWithConfiguration:(id)arg0 delegate:(id)arg1 delegateDispatchQueue:(id)arg2 ;
+(id)new;
+(id)sessionWithConfiguration:(id)arg0 ;
+(id)sessionWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
+(id)sharedSession;
+(void)_disableATS;
+(void)_disableAppSSO;
+(void)_enumerateHTTPHeaderFieldsWithCFHTTPMessage:(struct __CFHTTPMessage *)arg0 usingBlock:(id)arg1 ;
+(void)_enumerateHTTPHeaderFieldsWithRequest:(id)arg0 usingBlock:(id)arg1 ;
+(void)_getActiveSessionIdentifiersWithCompletionHandler:(id)arg0 ;
+(void)_obliterateAllBackgroundSessionsWithCompletionHandler:(id)arg0 ;
+(void)_releaseProcessAssertionForSessionIdentifier:(id)arg0 ;
+(void)_sendPendingCallbacksForSessionIdentifier:(id)arg0 ;
+(void)_setEventDelegate:(id)arg0 queue:(id)arg1 ;
+(void)_setHTTPRewriter:(id)arg0 ;
+(void)_strictTrustEvaluate:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(id)_AVAssetDownloadTaskWithURL:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(id)_dataTaskWithTaskForClass:(id)arg0 ;
-(id)_downloadTaskWithRequest:(id)arg0 downloadFilePath:(id)arg1 ;
-(id)_downloadTaskWithTaskForClass:(id)arg0 ;
-(id)_uploadTaskWithTaskForClass:(id)arg0 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg0 mediaSelections:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)assetDownloadTaskWithConfiguration:(id)arg0 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg0 assetTitle:(id)arg1 assetArtworkData:(id)arg2 options:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg0 ;
-(id)dataTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)defaultTaskGroup;
-(id)downloadTaskWithRequest:(id)arg0 ;
-(id)downloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithResumeData:(id)arg0 ;
-(id)downloadTaskWithResumeData:(id)arg0 completionHandler:(id)arg1 ;
-(id)downloadTaskWithURL:(id)arg0 ;
-(id)downloadTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 delegateDispatchQueue:(id)arg3 ;
-(id)streamTaskWithHostName:(id)arg0 port:(NSInteger)arg1 ;
-(id)streamTaskWithNetService:(id)arg0 ;
-(id)taskGroupWithConfiguration:(id)arg0 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 completionHandler:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 completionHandler:(id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg0 ;
-(id)webSocketTaskWithRequest:(id)arg0 ;
-(id)webSocketTaskWithURL:(id)arg0 ;
-(id)webSocketTaskWithURL:(id)arg0 protocols:(id)arg1 ;
-(void)_setEventDelegate:(id)arg0 ;
-(void)_useTLSSessionCacheFromSession:(id)arg0 ;
-(void)dealloc;
-(void)finishTasksAndInvalidate;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getAllTasksWithCompletionHandler:(id)arg0 ;
-(void)getTasksWithCompletionHandler:(id)arg0 ;
-(void)invalidateAndCancel;
-(void)resetWithCompletionHandler:(id)arg0 ;


@end


#endif