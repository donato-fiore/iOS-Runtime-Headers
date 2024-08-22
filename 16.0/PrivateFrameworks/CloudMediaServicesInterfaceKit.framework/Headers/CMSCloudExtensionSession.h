// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSCLOUDEXTENSIONSESSION_H
#define CMSCLOUDEXTENSIONSESSION_H

@class NSURLRequest, NSURLSessionDataTask, NSError, NSString, NSMutableDictionary, NSMutableArray, NSURLSession;
@protocol NSURLSessionDelegate, OS_dispatch_queue, CMSCloudExtensionAuthProviderDelegate;

#import <Foundation/Foundation.h>

#import "CMSCloudExtensionConfiguration.h"
#import "CMSPlayerContext.h"

@interface CMSCloudExtensionSession : NSObject <NSURLSessionDelegate>

 {
    os_unfair_lock_s _requestQueueLock;
    NSObject<OS_dispatch_queue> *_requestDispatch;
    BOOL _connected;
    BOOL _waiting;
    NSURLRequest *_lastRequest;
    NSURLSessionDataTask *_dataTask;
    NSError *_closeError;
    id<CMSCloudExtensionAuthProviderDelegate> *_authProvider;
    id *_closeCompletion;
}


@property (nonatomic) BOOL allowExplicitContent; // ivar: _allowExplicitContent
@property (copy, nonatomic) NSString *authHeader; // ivar: _authHeader
@property (retain, nonatomic) NSMutableDictionary *completions; // ivar: _completions
@property (retain, nonatomic) CMSCloudExtensionConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *durations; // ivar: _durations
@property (copy, nonatomic) NSString *endpointIdentifier; // ivar: _endpointIdentifier
@property (retain, nonatomic) NSMutableDictionary *exceptions; // ivar: _exceptions
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CMSPlayerContext *intentPlayerContext; // ivar: _intentPlayerContext
@property (nonatomic) id *prepareRequestHook; // ivar: _prepareRequestHook
@property (nonatomic) unsigned int qosClass; // ivar: _qosClass
@property (retain, nonatomic) NSMutableArray *requestQueue; // ivar: _requestQueue
@property (copy, nonatomic) NSString *requesterHomeUserID; // ivar: _requesterHomeUserID
@property (retain, nonatomic) NSMutableDictionary *results; // ivar: _results
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) BOOL shuffledPlayback; // ivar: _shuffledPlayback
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (nonatomic) CGFloat totalDuration; // ivar: _totalDuration
@property (nonatomic) BOOL updateUserTasteProfile; // ivar: _updateUserTasteProfile


-(BOOL)_handleURLResponseCode:(NSInteger)arg0 error:(id)arg1 before:(id)arg2 request:(id)arg3 networkActivity:(id)arg4 retryHandler:(id)arg5 ;
-(BOOL)_updateDynamicHeadersOnRequest:(id)arg0 withDeadline:(id)arg1 ;
-(CGFloat)durationForMethod:(id)arg0 ;
-(id)_constraintsDefinition;
-(id)_parsedObjectFromData:(id)arg0 inResponse:(id)arg1 error:(*id)arg2 ;
-(id)_queuePlayMediaForActivity:(id)arg0 ;
-(id)_requestForMethods:(id)arg0 before:(id)arg1 error:(*id)arg2 ;
-(id)_resultsFromData:(id)arg0 inResponse:(id)arg1 error:(*id)arg2 ;
-(id)_sessionDescriptionWithDeadline:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 authProviderDelegate:(id)arg1 ;
-(id)peekResponseForMethod:(id)arg0 exception:(*id)arg1 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)_connectSession;
-(void)_handleURLResponse:(id)arg0 before:(id)arg1 networkActivity:(id)arg2 request:(id)arg3 data:(id)arg4 error:(id)arg5 ;
-(void)_performActivityUpdate:(id)arg0 completion:(id)arg1 ;
-(void)_retryRequest:(id)arg0 before:(id)arg1 networkActivity:(id)arg2 completionHandler:(id)arg3 ;
-(void)_retryRequestAfterAuthTokenRenewal:(id)arg0 parentNetworkActivity:(id)arg1 before:(id)arg2 completionHandler:(id)arg3 ;
-(void)closeWithForce:(BOOL)arg0 ;
-(void)getAlbumArtDataFromURL:(id)arg0 networkActivity:(id)arg1 completionHandler:(id)arg2 ;
-(void)getContentProtectionKeyForAssetIdentifier:(id)arg0 usingKeySystem:(id)arg1 andKeyRequest:(id)arg2 playerContext:(id)arg3 userActivityDictionary:(id)arg4 networkActivity:(id)arg5 completionHandler:(id)arg6 ;
-(void)getFairplayCertificateUsingNetworkActivity:(id)arg0 completionHandler:(id)arg1 ;
-(void)getQueueSegmentFromURL:(id)arg0 referrer:(id)arg1 networkActivity:(id)arg2 completion:(id)arg3 ;
-(void)performMethod:(id)arg0 withParams:(id)arg1 networkActivity:(id)arg2 completion:(id)arg3 ;
-(void)publishContentFailure:(id)arg0 forActivity:(id)arg1 whilePlaying:(id)arg2 previousContentURL:(id)arg3 nextContentURL:(id)arg4 networkActivity:(id)arg5 completion:(id)arg6 ;
-(void)report:(NSUInteger)arg0 forActivity:(id)arg1 nowPlaying:(id)arg2 previous:(id)arg3 timestamp:(id)arg4 completion:(id)arg5 ;
-(void)reportContentFailure:(id)arg0 forActivity:(id)arg1 whilePlaying:(id)arg2 timestamp:(id)arg3 completion:(id)arg4 ;
-(void)requestQueueForActivity:(id)arg0 networkActivity:(id)arg1 completion:(id)arg2 ;
-(void)setCloseCompletion:(id)arg0 ;


@end


#endif