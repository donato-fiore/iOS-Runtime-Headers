// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSURLSESSION_H
#define AMSURLSESSION_H

@class NSURLSessionConfiguration, NSString, NSOperationQueue, NSURLSession;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate><AMSURLProtocolDelegate, OS_dispatch_queue, AMSURLHandling, AMSRequestEncoding, AMSResponseDecoding;

#import <Foundation/Foundation.h>

#import "AMSURLDelegateProxy.h"
#import "AMSURLSecurityPolicy.h"

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (readonly, nonatomic) NSURLSessionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSURLSessionDelegate><AMSURLProtocolDelegate> *delegate;
@property (retain, nonatomic) AMSURLDelegateProxy *delegateProxy; // ivar: _delegateProxy
@property (readonly, nonatomic) NSOperationQueue *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lazyDataTaskCreationQueue; // ivar: _lazyDataTaskCreationQueue
@property (retain, nonatomic) NSObject<AMSURLHandling> *protocolHandler; // ivar: _protocolHandler
@property (retain, nonatomic) NSObject<AMSRequestEncoding> *requestEncoder; // ivar: _requestEncoder
@property (retain, nonatomic) NSObject<AMSResponseDecoding> *responseDecoder; // ivar: _responseDecoder
@property (retain, nonatomic) AMSURLSecurityPolicy *securityPolicy; // ivar: _securityPolicy
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)defaultSession;
+(id)imageSession;
+(id)sharedAuthKitSession;
-(id)_createSharedDataForTask:(id)arg0 properties:(id)arg1 completionHandler:(id)arg2 ;
-(id)_formatError:(id)arg0 task:(id)arg1 decodedObject:(id)arg2 ;
-(id)_handleURLAction:(id)arg0 task:(id)arg1 error:(*id)arg2 ;
-(id)_prepareRequest:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(id)dataTaskPromiseWithRequest:(id)arg0 ;
-(id)dataTaskPromiseWithRequestPromise:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg0 signpostID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_completeTask:(id)arg0 decodedObject:(id)arg1 error:(id)arg2 ;
-(void)_retryTask:(id)arg0 action:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)finishTasksAndInvalidate;
-(void)invalidateAndCancel;


@end


#endif