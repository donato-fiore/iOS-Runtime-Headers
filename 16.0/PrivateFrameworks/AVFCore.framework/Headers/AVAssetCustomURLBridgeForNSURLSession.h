// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETCUSTOMURLBRIDGEFORNSURLSESSION_H
#define AVASSETCUSTOMURLBRIDGEFORNSURLSESSION_H

@class NSMutableDictionary, NSString, NSURLSession;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate>

 {
    NSMutableDictionary *_taskToRequest;
    *OpaqueFigCustomURLHandler _handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)_lookupRequestForDataTask:(id)arg0 ;
-(id)init;
-(id)initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(int)_cancelRequestID:(NSUInteger)arg0 ;
-(int)_handleRequest:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 canHandleRequestOut:(*BOOL)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)_registerRequest:(struct __CFDictionary *)arg0 id:(NSUInteger)arg1 forDataTask:(id)arg2 ;
-(void)_unregisterRequestForDataTask:(id)arg0 ;
-(void)dealloc;


@end


#endif