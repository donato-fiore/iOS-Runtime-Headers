// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETRESOURCELOADER_H
#define AVASSETRESOURCELOADER_H

@class NSURLSession, NSOperationQueue, NSString;
@protocol NSURLAuthenticationChallengeSender, NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVAssetResourceLoaderInternal.h"

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender>

 {
    AVAssetResourceLoaderInternal *_resourceLoader;
}


@property (retain, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) NSObject<NSURLSessionDataDelegate> *URLSessionDataDelegate;
@property (readonly, nonatomic) NSOperationQueue *URLSessionDataDelegateQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<AVAssetResourceLoaderDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preloadsEligibleContentKeys;
@property (readonly) Class superclass;


-(id)URLRequestHelper;
-(id)_getDelegateOnStateQueue;
-(id)asset;
-(id)cachedContentInformationForURL:(id)arg0 ;
-(id)init;
-(id)initWithURLRequestHelper:(id)arg0 asset:(id)arg1 ;
-(id)initWithURLRequestHelper:(id)arg0 asset:(id)arg1 remoteCustomURLHandlerContext:(id)arg2 ;
-(id)remoteCustomURLHandlerContextForPID:(int)arg0 ;
-(id)stateQueue;
-(struct OpaqueFigCustomURLHandler *)_authHandler;
-(struct OpaqueFigCustomURLHandler *)_contentKeySessionCustomURLHandler;
-(struct OpaqueFigCustomURLHandler *)_customURLHandler;
-(struct OpaqueFigCustomURLLoader *)_customURLLoader;
-(void)_cancelRequest:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 ;
-(void)_cancelRequestWithKey:(id)arg0 fallbackHandler:(id)arg1 ;
-(void)_handleRequest:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 willHandleRequest:(*BOOL)arg2 ;
-(void)_issueLoadingRequestWithKey:(id)arg0 loadingRequest:(id)arg1 isRenewalRequest:(BOOL)arg2 fallbackHandler:(id)arg3 ;
-(void)_noteFinishingOfRequest:(id)arg0 ;
-(void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg0 delegateCallbackBlock:(id)arg1 ;
-(void)_performDelegateSelector:(SEL)arg0 withObject:(id)arg1 representingNewRequest:(BOOL)arg2 key:(id)arg3 fallbackHandler:(id)arg4 ;
-(void)_poseAuthenticationChallengeWithKey:(id)arg0 challenge:(id)arg1 fallbackHandler:(id)arg2 ;
-(void)_poseAuthenticationChallengeWithRequestInfo:(struct __CFDictionary *)arg0 requestID:(NSUInteger)arg1 challenge:(id)arg2 ;
-(void)_sendAuthResponseForChallenge:(id)arg0 disposition:(NSInteger)arg1 credential:(id)arg2 error:(id)arg3 ;
-(void)_setContentKeySessionCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg0 ;
-(void)cacheContentInformation:(id)arg0 forURL:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)cancelLoading;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif