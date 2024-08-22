// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSURLSESSIONMANAGER_H
#define TPSURLSESSIONMANAGER_H

@class NSMutableDictionary, NSString, NSURLSession, PPCRedirect;
@protocol NSURLSessionDelegate, NSURLSessionDataDelegate, OS_dispatch_queue, TPSURLSessionCustomAuthHandling, TPSURLSessionDelegate, TPSURLSessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface TPSURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>

 {
    TPSURLSessionDelegateResponds _defaultSessionDelegateResponds;
    NSObject<OS_dispatch_queue> *_sessionTaskQueue;
    NSObject<OS_dispatch_queue> *_sessionMapQueue;
}


@property (retain, nonatomic) NSMutableDictionary *URLSessionMap; // ivar: _URLSessionMap
@property (retain, nonatomic) NSObject<TPSURLSessionCustomAuthHandling> *authenticationHandler; // ivar: _authenticationHandler
@property (nonatomic) BOOL coalesceRequests; // ivar: _coalesceRequests
@property (retain, nonatomic) NSMutableDictionary *coalesceTaskURLMap; // ivar: _coalesceTaskURLMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSURLSessionDelegate> *defaultSessionDelegate; // ivar: _defaultSessionDelegate
@property (retain, nonatomic) NSURLSession *defaultURLSession; // ivar: _defaultURLSession
@property (weak, nonatomic) NSObject<TPSURLSessionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL respondsToDidReceiveChallenge; // ivar: _respondsToDidReceiveChallenge
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *uncoalesceTaskMap; // ivar: _uncoalesceTaskMap
@property (retain, nonatomic) PPCRedirect *urlRedirector; // ivar: _urlRedirector


+(id)defaultManager;
-(BOOL)allowsNetworkAttribution;
-(id)URLSessionForAttributionIdentifier:(id)arg0 ;
-(id)_mappedURLRequest:(id)arg0 ;
-(id)init;
-(id)newURLSessionItemWithRequest:(id)arg0 identifier:(id)arg1 attributionIdentifier:(id)arg2 requestType:(id)arg3 completionHandler:(id)arg4 ;
-(id)newURLSessionItemWithRequest:(id)arg0 identifier:(id)arg1 attributionIdentifier:(id)arg2 requestType:(id)arg3 networkDelegate:(id)arg4 completionHandler:(id)arg5 ;
-(id)sessionTaskForTask:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancelSessionItem:(id)arg0 ;
-(void)dealloc;
-(void)removeTaskFromMap:(id)arg0 ;
-(void)resumeSessionItem:(id)arg0 ;
-(void)sessionTask:(id)arg0 didCompleteWithError:(id)arg1 ;


@end


#endif