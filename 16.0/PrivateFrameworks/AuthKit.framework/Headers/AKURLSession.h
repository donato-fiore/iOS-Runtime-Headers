// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKURLSESSION_H
#define AKURLSESSION_H

@class NSURLSession, NSMutableDictionary, NSString;
@protocol NSURLSessionDelegate, NSURLSessionDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>

 {
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
}


@property (nonatomic) BOOL _usesAppleIDContext; // ivar: __usesAppleIDContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_createURLSessionUsesAppleIDContext:(BOOL)arg0 ;
+(id)_urlBagCache;
+(id)sharedAnisetteFreeURLSession;
+(id)sharedCacheEnabledAnisetteFreeSession;
+(id)sharedCacheEnabledURLSession;
+(id)sharedCacheReliantAnisetteFreeSession;
+(id)sharedURLSession;
+(void)removeAllCachedResponses;
-(BOOL)_unsafe_retryTaskIfPossible:(id)arg0 ;
-(BOOL)isRecoverableError:(id)arg0 ;
-(id)_URLSession;
-(id)beginAuthenticationDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)beginDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)defaultSessionObjectWithConfiguration:(id)arg0 ;
-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_unsafe_completeTask:(id)arg0 withError:(id)arg1 ;
-(void)cancelDataTask:(id)arg0 ;


@end


#endif