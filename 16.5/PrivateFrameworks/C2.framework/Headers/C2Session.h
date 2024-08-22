// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef C2SESSION_H
#define C2SESSION_H

@class NSString, NSMutableSet, NSOperationQueue, NSURLSession, NSMutableDictionary;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionTaskDelegate, C2SessionDelegate;

#import <Foundation/Foundation.h>

#import "C2RequestOptions.h"

@interface C2Session : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *didCompleteWithErrorRunningTasks; // ivar: _didCompleteWithErrorRunningTasks
@property (nonatomic) NSInteger emptyTimestamp; // ivar: _emptyTimestamp
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isComplete; // ivar: _isComplete
@property (readonly, copy, nonatomic) C2RequestOptions *options; // ivar: _options
@property (retain, nonatomic) NSString *originalHost; // ivar: _originalHost
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) NSString *routeHost; // ivar: _routeHost
@property (nonatomic) CGFloat routeLastUpdated; // ivar: _routeLastUpdated
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly, nonatomic) NSString *sessionConfigurationName; // ivar: _sessionConfigurationName
@property (retain, nonatomic) NSObject<C2SessionDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (readonly) Class superclass;
@property (copy, nonatomic) id *testBehavior_callbackHung; // ivar: _testBehavior_callbackHung
@property (copy, nonatomic) id *testBehavior_cleanupRetainCycle; // ivar: _testBehavior_cleanupRetainCycle
@property (copy, nonatomic) id *testBehavior_sessionInvalidated_cfnetwork; // ivar: _testBehavior_sessionInvalidated_cfnetwork
@property (copy, nonatomic) id *testBehavior_sessionInvalidated_shouldInvalidate; // ivar: _testBehavior_sessionInvalidated_shouldInvalidate
@property (readonly, nonatomic) NSMutableDictionary *wrappedTaskByTaskDescription; // ivar: _wrappedTaskByTaskDescription


+(id)portFromURL:(id)arg0 ;
-(BOOL)shouldInvalidateAndCancel;
-(id)addTask:(id)arg0 withDescription:(id)arg1 request:(id)arg2 ;
-(id)createTaskWithOptions:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSessionConfigurationName:(id)arg0 routeHost:(id)arg1 options:(id)arg2 sessionDelegate:(id)arg3 ;
-(void)C2Session:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)C2Session:(id)arg0 sessionTask:(id)arg1 updatedRoute:(id)arg2 ;
-(void)C2Session:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 _taskIsWaitingForConnection:(id)arg1 ;
-(void)URLSession:(id)arg0 _willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_recalculateSessionDelegateQueuePriority;
-(void)cleanupRetainCycle;
-(void)dealloc;
-(void)invalidateAndCancel;
-(void)removeTask:(id)arg0 ;
-(void)sessionTaskDelegateCallbackHelper:(id)arg0 task:(id)arg1 block:(id)arg2 ;
-(void)testBehavior_triggerCallbackHang;
-(void)testBehavior_triggerSessionExpiry;


@end


#endif