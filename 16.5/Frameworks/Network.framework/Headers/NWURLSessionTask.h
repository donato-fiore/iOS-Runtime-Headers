// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSIONTASK_H
#define NWURLSESSIONTASK_H

@class NSURLRequest, NSError, NSHTTPCookieStorage, NSURLSessionTaskMetrics, NSString, NSArray, NSURL, NSDate, NSURLSessionDataTask, NSURLSessionTask, NSProgress, NSURLResponse;
@protocol NWURLLoaderClient, NSCopying, OS_dispatch_queue, NWURLLoader, NWURLSessionResponseConsumer, NSURLSessionTaskDelegate, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "NWURLSessionDelegateWrapper.h"
#import "NWURLSessionMultipartParser.h"
#import "NWURLSession.h"
#import "NWURLSessionTaskConfiguration.h"
#import "NWURLSessionRequestBodyInfo.h"

@interface NWURLSessionTask : NSObject <NWURLLoaderClient, NSCopying>

 {
    BOOL _suspended;
    BOOL _pendingRead;
    BOOL _explicitlySetCookieStorage;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_publicDelegateWrapper;
    NWURLSessionDelegateWrapper *_internalDelegateWrapper;
    id<NWURLLoader> *_loader;
    NWURLSessionMultipartParser *_multipartParser;
    NSInteger _internalState;
    NWURLSession *_session;
    NWURLSessionTaskConfiguration *_configuration;
    NWURLSessionRequestBodyInfo *_requestBody;
    id<NWURLSessionResponseConsumer> *_responseConsumer;
    NSHTTPCookieStorage *_cookieStorage;
    NSURLSessionTaskMetrics *_metrics;
}


@property NSInteger _bytesPerSecondLimit; // ivar: __bytesPerSecondLimit
@property (nonatomic) BOOL _callCompletionHandlerInline; // ivar: __callCompletionHandlerInline
@property (copy, nonatomic) id *_cookieTransformCallback; // ivar: __cookieTransformCallback
@property (readonly) NSURLSessionTaskMetrics *_incompleteTaskMetrics;
@property (retain, nonatomic) NSObject<NSURLSessionTaskDelegate> *_internalDelegate;
@property (nonatomic) BOOL _isTopLevelNavigation; // ivar: __isTopLevelNavigation
@property (nonatomic) BOOL _keepDownloadTaskFile; // ivar: __keepDownloadTaskFile
@property (retain, nonatomic) NSObject<OS_nw_activity> *_nw_activity; // ivar: __nw_activity
@property (copy, nonatomic) NSString *_pathToDownloadTaskFile; // ivar: __pathToDownloadTaskFile
@property (nonatomic) BOOL _preconnect; // ivar: __preconnect
@property (readonly, nonatomic) NSArray *_resolvedCNAMEChain;
@property (copy, nonatomic) NSURL *_siteForCookies; // ivar: __siteForCookies
@property (copy, nonatomic) NSString *_storagePartitionIdentifier; // ivar: __storagePartitionIdentifier
@property (nonatomic) NSInteger countOfBytesClientExpectsToReceive; // ivar: _countOfBytesClientExpectsToReceive
@property (nonatomic) NSInteger countOfBytesClientExpectsToSend; // ivar: _countOfBytesClientExpectsToSend
@property (readonly, nonatomic) NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property (readonly, nonatomic) NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property (readonly, nonatomic) NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property (readonly, nonatomic) NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property (readonly, copy, nonatomic) NSURLRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *earliestBeginDate; // ivar: _earliestBeginDate
@property (readonly, copy) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURLSessionDataTask *loaderDataTask;
@property (readonly, nonatomic) NSURLSessionTask *loaderTask;
@property (readonly, copy, nonatomic) NSURLRequest *originalRequest;
@property BOOL prefersIncrementalDelivery; // ivar: _prefersIncrementalDelivery
@property float priority; // ivar: _priority
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly) NSInteger state;
@property (readonly) Class superclass;
@property (copy) NSString *taskDescription; // ivar: _taskDescription
@property (readonly, nonatomic) NSUInteger taskIdentifier; // ivar: _taskIdentifier


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)_timingData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_adoptEffectiveConfiguration:(id)arg0 ;
-(void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(void)cancel;
-(void)completeTaskWithError:(id)arg0 ;
-(void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(id)arg0 ;
-(void)loaderBetterPathAvailable;
-(void)loaderDidFail:(id)arg0 ;
-(void)loaderDidReceiveChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)loaderDidReceiveClientCertificateChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)loaderDidReceiveServerTrustChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)loaderNeedsBodyProviderFromOffset:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loaderRunDelegateBlock:(id)arg0 ;
-(void)loaderWaitingForConnectivity;
-(void)loaderWillCacheResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)loaderWillPerformHSTSUpgrade;
-(void)loaderWillPerformHTTPRedirection:(id)arg0 newRequest:(id)arg1 ;
-(void)loaderWillPerformHTTPRedirection:(id)arg0 newRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)resume;
-(void)startNextLoad;
-(void)suspend;


@end


#endif