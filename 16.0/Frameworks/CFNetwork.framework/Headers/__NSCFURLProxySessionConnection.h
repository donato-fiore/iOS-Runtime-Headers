// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFURLPROXYSESSIONCONNECTION_H
#define __NSCFURLPROXYSESSIONCONNECTION_H

@class NSCFURLSessionConnection, NSArray, NSString;
@protocol NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal;


#import "NSURLSessionTask.h"
#import "NSCachedURLResponse.h"
#import "NSURLRequest.h"

@interface __NSCFURLProxySessionConnection : NSCFURLSessionConnection <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal>

 {
    NSURLSessionTask *_proxyTask;
    NSURLSessionTask *_cacheTask;
    BOOL _shouldCancelOnCacheTaskCompletion;
    BOOL _clientWantsCacheOnly;
    BOOL _completedLocalCacheLookup;
    BOOL _requestIsUncacheable;
    BOOL _handledNeedNewBodyStream;
    NSCachedURLResponse *_cachedResponseForConditionalRequest;
    NSURLRequest *_conditionalRequest;
    NSArray *_cachedResponseDataArray;
    NSString *_originalUploadFilePath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTask:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 _didReceiveData:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _isWaitingForConnectionWithReason:(NSInteger)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_URLSession:(id)arg0 task:(id)arg1 getAuthHeadersForResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)expectedProgressTargetChanged;
-(void)resume;
-(void)setIsDownload:(BOOL)arg0 ;
-(void)setPoolPriority:(NSInteger)arg0 ;
-(void)setPriorityHint:(float)arg0 incremental:(BOOL)arg1 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)suspend;


@end


#endif