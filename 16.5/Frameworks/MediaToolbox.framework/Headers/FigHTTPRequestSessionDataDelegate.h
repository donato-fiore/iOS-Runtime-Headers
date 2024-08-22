// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGHTTPREQUESTSESSIONDATADELEGATE_H
#define FIGHTTPREQUESTSESSIONDATADELEGATE_H

@class NSMutableDictionary, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface FigHTTPRequestSessionDataDelegate : NSObject <NSURLSessionDataDelegate>

 {
    NSMutableDictionary *_taskToFigHTTPRequest;
    *OpaqueFigReentrantMutex _taskToFigHTTPRequestMutex;
    unsigned char _doesIgnoreDidReceiveResponseDisposition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)adoptVoucherFromRetainProxy:(struct FigRetainProxy *)arg0 ;
-(id)init;
-(id)initWithResponseDispositionOption:(BOOL)arg0 ;
-(struct FigRetainProxy *)_copyAndLockRequestForTask:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)_deregisterFigHTTPRequestForDataTask:(id)arg0 ;
-(void)_registerFigHTTPRequest:(struct OpaqueFigHTTPRequest *)arg0 forDataTask:(id)arg1 ;
-(void)dealloc;
-(void)restoreVoucher:(id)arg0 ;


@end


#endif