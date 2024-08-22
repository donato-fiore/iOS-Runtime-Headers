// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWURLSESSIONTASK_H
#define NWURLSESSIONTASK_H

@class NSURLSessionTaskMetrics, NSString, NSArray, NSURL, NSURLRequest, NSDate, NSError, NSProgress, NSURLResponse;
@protocol NSCopying, OS_dispatch_queue, NWURLSessionRequestBodyProvider, OS_nw_connection, OS_nw_content_context, NWURLSessionResponseConsumer, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "NWURLSession.h"
#import "NWURLSessionRequestBodyInfo.h"

@interface NWURLSessionTask : NSObject <NSCopying>

 {
    unsigned int _qos;
    NWURLSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    id<NWURLSessionRequestBodyProvider> *_requestBodyProvider;
    NSUInteger _suspendCount;
    NSInteger _internalState;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_content_context> *_requestContext;
    NWURLSessionRequestBodyInfo *_requestBody;
    id<NWURLSessionResponseConsumer> *_responseConsumer;
    NSURLSessionTaskMetrics *_metrics;
}


@property (copy, nonatomic) id *_cookieTransformCallback; // ivar: __cookieTransformCallback
@property (readonly) NSURLSessionTaskMetrics *_incompleteTaskMetrics;
@property (nonatomic) BOOL _isTopLevelNavigation; // ivar: __isTopLevelNavigation
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
@property (readonly, copy, nonatomic) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (copy, nonatomic) NSDate *earliestBeginDate; // ivar: _earliestBeginDate
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSURLRequest *originalRequest; // ivar: _originalRequest
@property float priority; // ivar: _priority
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSURLResponse *response; // ivar: _response
@property (readonly, nonatomic) NSInteger state;
@property (copy) NSString *taskDescription; // ivar: _taskDescription
@property (readonly, nonatomic) NSUInteger taskIdentifier; // ivar: _taskIdentifier


-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)_timingData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(void)cancel;
-(void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif