// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPROXYPROTOCOL_H
#define APPROXYPROTOCOL_H

@class NSURLProtocol, NSThread, NSString, NSArray, NSURLSessionDataTask;
@protocol NSURLSessionTaskDelegate, NSURLSessionDataDelegate;


#import "APNSURLSessionDemultiplexer.h"

@interface APProxyProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (retain) NSThread *clientThread; // ivar: _clientThread
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSArray *modes; // ivar: _modes
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (retain) APNSURLSessionDemultiplexer *sessionDemux; // ivar: _sessionDemux
@property CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain) NSURLSessionDataTask *task; // ivar: _task


+(BOOL)canInitWithRequest:(id)arg0 ;
+(id)canonicalRequestForRequest:(id)arg0 ;
+(id)properties;
+(void)initialize;
+(void)invalidateProxyDemultiplexerSessionForId:(id)arg0 ;
+(void)setProxyURL:(id)arg0 ;
+(void)start;
+(void)stop;
-(id)_currentRunLoopModes;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;


@end


#endif