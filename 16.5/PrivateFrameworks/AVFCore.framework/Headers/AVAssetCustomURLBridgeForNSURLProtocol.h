// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETCUSTOMURLBRIDGEFORNSURLPROTOCOL_H
#define AVASSETCUSTOMURLBRIDGEFORNSURLPROTOCOL_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {
    NSMutableDictionary *_requestIDToDownload;
    *OpaqueFigCustomURLHandler _handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}




-(BOOL)_willSendRequest:(id)arg0 request:(struct _CFURLRequest *)arg1 redirectionResponse:(struct _CFURLResponse *)arg2 ;
-(id)initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(int)_handleRequest:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 ;
-(void)_cancelAndFinishRequest:(id)arg0 error:(struct __CFError *)arg1 ;
-(void)_cancelPendingRequests;
-(void)_cancelRequestID:(NSUInteger)arg0 ;
-(void)_didFinish:(id)arg0 error:(struct __CFError *)arg1 ;
-(void)_didReceiveData:(id)arg0 data:(struct __CFData *)arg1 ;
-(void)_didReceiveResponse:(id)arg0 response:(struct _CFURLResponse *)arg1 ;
-(void)dealloc;


@end


#endif