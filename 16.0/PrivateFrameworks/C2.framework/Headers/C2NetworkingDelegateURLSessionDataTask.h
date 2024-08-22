// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2NETWORKINGDELEGATEURLSESSIONDATATASK_H
#define C2NETWORKINGDELEGATEURLSESSIONDATATASK_H

@class NSURLRequest, NSURLResponse, NSError, NSString, NSDictionary;
@protocol NSURLSessionAppleIDContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "C2RequestOptions.h"
#import "C2NetworkingDelegateURLSession.h"

@interface C2NetworkingDelegateURLSessionDataTask : NSObject

@property (copy, setter=_setAppleIDContext:) NSObject<NSURLSessionAppleIDContext> *_appleIDContext; // ivar: __appleIDContext
@property CGFloat _timeoutIntervalForResource; // ivar: __timeoutIntervalForResource
@property (retain, nonatomic) C2RequestOptions *c2RequestOptions; // ivar: _c2RequestOptions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property NSInteger countOfBytesClientExpectsToReceive; // ivar: _countOfBytesClientExpectsToReceive
@property NSInteger countOfBytesClientExpectsToSend; // ivar: _countOfBytesClientExpectsToSend
@property NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property (copy) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (copy) NSURLRequest *originalRequest; // ivar: _originalRequest
@property (copy) NSURLResponse *response; // ivar: _response
@property (weak, nonatomic) C2NetworkingDelegateURLSession *session; // ivar: _session
@property NSInteger state; // ivar: _state
@property (retain) NSError *syntheticError; // ivar: _syntheticError
@property (copy) NSString *taskDescription; // ivar: _taskDescription
@property (readonly) NSUInteger taskIdentifier; // ivar: _taskIdentifier
@property (retain, nonatomic) NSDictionary *timingData; // ivar: _timingData


-(id)init;
-(void)_drainInputStream:(id)arg0 sinkData:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)handleCompletion;
-(void)handleResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)processRequest:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(void)resume;
-(void)setupRequest:(id)arg0 ;
-(void)setupRequestBodyForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)streamResponseBody:(id)arg0 offset:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)willSendRequest:(id)arg0 ;


@end


#endif