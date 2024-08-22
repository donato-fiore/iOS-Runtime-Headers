// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYGRPCCHANNEL_H
#define OSPREYGRPCCHANNEL_H

@class NSURLSession, NSURL, NSMapTable, NSString;
@protocol NSURLSessionTaskDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OspreyMessageWriter.h"
#import "AbsintheAuthenticationDurations.h"

@interface OspreyGRPCChannel : NSObject <NSURLSessionTaskDelegate>

 {
    NSURLSession *_session;
    NSURL *_baseURL;
    OspreyMessageWriter *_messageWriter;
    NSMapTable *_taskToContext;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) AbsintheAuthenticationDurations *absintheDurations; // ivar: _absintheDurations
@property (copy, nonatomic) id *connectionMetricsHandler; // ivar: _connectionMetricsHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)bidirectionalStreamingRequest:(id)arg0 streamingResponseHandler:(id)arg1 completion:(unk)arg2  ;
// -(id)clientStreamingContextForRequest:(id)arg0 streamingResponseHandler:(id)arg1 completion:(unk)arg2  ;
// -(id)clientStreamingRequest:(id)arg0 responseHandler:(id)arg1 streamingContext:(unk)arg2  ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 queue:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)_startTask:(id)arg0 ;
-(void)bidirectionalStreamingRequest:(id)arg0 streamingContext:(id)arg1 ;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)preconnect;
// -(void)serverStreamingRequest:(id)arg0 requestData:(id)arg1 streamingResponseHandler:(id)arg2 completion:(unk)arg3  ;
-(void)setAbsintheTimestampForKey:(id)arg0 ;
-(void)unaryRequest:(id)arg0 requestData:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif