// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSURLSESSIONLOCAL_H
#define __NSURLSESSIONLOCAL_H

@class NSMutableDictionary, NSMutableArray, NSHashTable, NSString;
@protocol NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal, NSURLSessionSubclass, __NSURLSessionTaskGroupForConfiguration, OS_dispatch_queue;


#import "NSURLSession.h"
#import "NSURLSessionConfiguration.h"

@interface __NSURLSessionLocal : NSURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal, NSURLSessionSubclass, __NSURLSessionTaskGroupForConfiguration>

 {
    NSUInteger _identSeed;
    *void _tubeManager;
    NSMutableDictionary *_connectionsToTasks;
    NSMutableArray *_outstandingTasks;
    NSHashTable *_unownedUnresumedTasks;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    id *_invalidateCallback;
    *XCookieStorage _xCookies;
    *XCredentialStorage _xCreds;
    BOOL _xCookiesInitComplete;
    BOOL _xCredsInitComplete;
    mutex _xCookieStorageInitLock;
    mutex _xCredStorageInitLock;
    BOOL _isInvalid;
    NSURLSessionConfiguration *_proxyConfig;
    NSURLSession *_proxySession;
    BOOL _shouldRecreateProxySession;
    NSURLSession *_sessionForCacheLookups;
    os_unfair_lock_s _unownedUnresumedTasksLock;
}


@property (readonly, weak) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly, weak) NSURLSession *_groupSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)nextSeed;
-(id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg0 mediaSelections:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg0 assetTitle:(id)arg1 assetArtworkData:(id)arg2 options:(id)arg3 downloadConfiguration:(id)arg4 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(id)_AVAssetDownloadTaskForURL:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(id)_dataTaskWithTaskForClass:(id)arg0 ;
-(id)_downloadTaskWithTaskForClass:(id)arg0 ;
-(id)_uploadTaskWithTaskForClass:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 delegateDispatchQueue:(id)arg3 ;
-(id)webSocketTaskForRequest:(id)arg0 ;
-(id)webSocketTaskForURL:(id)arg0 protocols:(id)arg1 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)_onqueue_completeInvalidation:(BOOL)arg0 ;
-(void)_onqueue_flushWithCompletionHandler:(id)arg0 ;
-(void)_onqueue_getTasksWithCompletionHandler:(id)arg0 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(id)arg0 ;
-(void)_useTLSSessionCacheFromSession:(id)arg0 ;
-(void)dealloc;


@end


#endif