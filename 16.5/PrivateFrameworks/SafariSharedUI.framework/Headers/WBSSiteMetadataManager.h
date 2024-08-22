// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSITEMETADATAMANAGER_H
#define WBSSITEMETADATAMANAGER_H

@class WKProcessPool, NSMutableSet, NSMutableArray, NSOperationQueue, NSCountedSet, NSMutableDictionary, NSString, NSURL;
@protocol WBSSiteMetadataProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSiteMetadataManager : NSObject <WBSSiteMetadataProviderDelegate>

 {
    WKProcessPool *_processPool;
    NSMutableSet *_usedWebViews;
    NSMutableSet *_reusableWebViews;
    NSMutableArray *_siteMetadataProviders;
    NSObject<OS_dispatch_queue> *_siteMetadataProvidersAccessQueue;
    NSOperationQueue *_operationQueue;
    NSCountedSet *_activeOperations;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableSet *_tokens;
    NSMutableDictionary *_requestsToRequestInfos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *injectedBundleURL; // ivar: _injectedBundleURL
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended;


-(BOOL)_requestIsCancelledForToken:(id)arg0 ;
-(BOOL)_updateOperationForRequestIfPossible:(id)arg0 ;
-(NSInteger)_highestRequestPriorityForRequest:(id)arg0 ;
-(NSUInteger)_numberOfConcurrentRequests;
-(id)_makeWebViewOfSize:(struct CGSize )arg0 withConfiguration:(id)arg1 ;
-(id)_popReusableWebView;
-(id)_processPool;
-(id)_providerForRequest:(id)arg0 ;
-(id)init;
-(id)initWithInjectedBundleURL:(id)arg0 ;
-(id)registerOneTimeRequest:(id)arg0 priority:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(id)registerRequest:(id)arg0 priority:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(id)siteMetadataProvider:(id)arg0 registerOneTimeRequest:(id)arg1 priority:(NSInteger)arg2 responseHandler:(id)arg3 ;
-(id)siteMetadataProvider:(id)arg0 registerRequest:(id)arg1 priority:(NSInteger)arg2 responseHandler:(id)arg3 ;
-(void)_discardWebViewSoon:(id)arg0 ;
-(void)_internalCancelRequestWithToken:(id)arg0 ;
-(void)_internalSetPriority:(NSInteger)arg0 ofRequestWithToken:(id)arg1 ;
-(void)_registerToken:(id)arg0 withProvider:(id)arg1 ;
-(void)_reprioritizeOperationForRequest:(id)arg0 ;
-(void)_scheduleDelayedResponse:(id)arg0 forRequestToken:(id)arg1 ;
-(void)_sendRequiresDownloadResponse:(id)arg0 toResponseHandlersForRequest:(id)arg1 ;
-(void)_sendResponse:(id)arg0 toResponseHandlersForRequest:(id)arg1 didReceiveNewData:(BOOL)arg2 ;
-(void)_setUpOperationForRequest:(id)arg0 withSiteMetadataProvider:(id)arg1 usingOperationBlock:(id)arg2 ;
-(void)cancelRequestWithToken:(id)arg0 ;
-(void)cancelRequestsWithTokens:(id)arg0 ;
-(void)cancelRequestsWithTokens:(id)arg0 completionHandler:(id)arg1 ;
-(void)emptyProviderCaches;
-(void)emptyProviderCachesIncludingFavicons:(BOOL)arg0 ;
-(void)preloadRequest:(id)arg0 withPriority:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)preloadRequests:(id)arg0 withPriority:(NSInteger)arg1 responseHandler:(id)arg2 ;
-(void)registerSiteMetadataProvider:(id)arg0 ;
-(void)savePendingProviderChangesBeforeTermination;
-(void)savePendingProviderChangesWithCompletion:(id)arg0 ;
-(void)setPriority:(NSInteger)arg0 ofRequestWithToken:(id)arg1 ;
-(void)setPriority:(NSInteger)arg0 ofRequestsWithTokens:(id)arg1 ;
-(void)siteMetadataProvider:(id)arg0 cancelRequestsWithTokens:(id)arg1 ;
-(void)siteMetadataProvider:(id)arg0 didFinishUsingWebView:(id)arg1 ;
-(void)siteMetadataProvider:(id)arg0 didReceiveResponse:(id)arg1 forRequest:(id)arg2 beginOperationUsingBlock:(id)arg3 ;
-(void)siteMetadataProvider:(id)arg0 didReceiveResponse:(id)arg1 ofType:(NSInteger)arg2 didReceiveNewData:(BOOL)arg3 forRequest:(id)arg4 ;
-(void)siteMetadataProvider:(id)arg0 getWebViewOfSize:(struct CGSize )arg1 withConfiguration:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif