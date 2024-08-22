// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWCCHATTERBOXRESOLVER_H
#define _SWCCHATTERBOXRESOLVER_H

@class NSURLComponents, NSURLSessionDataTask, NSURLSession, NSURL;

#import <Foundation/Foundation.h>


@interface _SWCChatterboxResolver : NSObject {
    NSURLComponents *_URLComponents;
    NSURLSessionDataTask *_task;
    NSURLSession *_session;
    id *_completionHandler;
}


@property (readonly, copy) NSURL *originalURL;


+(BOOL)_looksLikeAppleErrorPageURLResponse:(id)arg0 ;
+(BOOL)_looksLikeChatterboxURLComponents:(id)arg0 ;
+(id)_queue;
+(id)_resolverForTask:(id)arg0 ;
+(id)_session;
+(id)new;
+(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
+(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
+(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
+(void)_invokeCompletionHandlerForTask:(id)arg0 result:(id)arg1 error:(id)arg2 ;
+(void)_setResolver:(id)arg0 forTask:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;
-(void)resolveWithCompletionHandler:(id)arg0 ;


@end


#endif