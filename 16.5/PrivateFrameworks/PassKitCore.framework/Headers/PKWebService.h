// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICE_H
#define PKWEBSERVICE_H

@class ACAccountStore, NSString, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSURLSession, NSSet, NSURLSessionConfiguration;
@protocol NSURLSessionTaskDelegate, NSURLSessionDataDelegate, OS_dispatch_queue, PKTapToRadarDelegate;

#import <Foundation/Foundation.h>


@interface PKWebService : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

 {
    ACAccountStore *_accountStore;
    NSUInteger _taskIDCounter;
    NSString *_webServiceSessionMarker;
    NSOperationQueue *_delegateOperationQueue;
    NSMutableDictionary *_webServiceTasks;
    NSMutableDictionary *_diagnosticReasonsByTaskID;
    NSMutableDictionary *_tasksMetadata;
    NSMutableArray *_diagnosticReasons;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_diagnosticReasonsQueue;
    os_unfair_lock_s _stateLock;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSSet *_sensitiveKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSURLSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PKTapToRadarDelegate> *tapToRadarDelegate; // ivar: _tapToRadarDelegate
@property (readonly, nonatomic) NSString *webServiceSessionMarker;


+(id)_sharedCookieStorage;
-(BOOL)_evaluateTrust:(struct __SecTrust *)arg0 ;
-(BOOL)canBypassTrustValidation;
-(NSInteger)logFacilityType;
-(NSUInteger)nextTaskID;
-(NSUInteger)webServiceTaskIdentifierForTaskIdentifier:(NSInteger)arg0 ;
-(id)_accountStore;
-(id)_redactLogsWithData:(id)arg0 ;
-(id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg0 forTaskID:(NSUInteger)arg1 ;
-(id)_urlRequestTaggedWithUniqueRequestIdentifier:(id)arg0 ;
-(id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg0 ;
-(id)_urlRequestWithCustomHeaders:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)forbiddenErrorWithResponse:(id)arg0 ;
-(id)initWithTapToRadarDelegate:(id)arg0 ;
-(id)urlSession;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1 ;
-(void)_associateDiagnosticReasonsWithTaskID:(NSUInteger)arg0 ;
-(void)_cleanUpDiagnosticReasonsForTaskID:(NSUInteger)arg0 ;
-(void)_redactLogsFromJSONObject:(id)arg0 ;
-(void)addDiagnosticReason:(id)arg0 ;
-(void)diagnosticSessionWithReason:(id)arg0 sessionHandler:(id)arg1 ;
-(void)handleAuthenticationFailureWithCompletionHandler:(id)arg0 ;
-(void)handleResponse:(id)arg0 withError:(id)arg1 data:(id)arg2 task:(id)arg3 completionHandler:(id)arg4 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg0 originalRequest:(id)arg1 redirectHandler:(id)arg2 ;
-(void)invalidate;
-(void)logRequest:(id)arg0 ;
-(void)logResponse:(id)arg0 withData:(id)arg1 ;
-(void)performRequest:(id)arg0 taskIdentifier:(NSUInteger)arg1 cacheResponse:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)performRequest:(id)arg0 taskIdentifier:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)performRequest:(id)arg0 taskIdentifier:(NSUInteger)arg1 retries:(NSUInteger)arg2 authHandling:(BOOL)arg3 cacheResponse:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)performRequest:(id)arg0 taskIdentifier:(NSUInteger)arg1 retries:(NSUInteger)arg2 authHandling:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)processRetryRequest:(id)arg0 responseData:(id)arg1 orginalRequest:(id)arg2 completion:(id)arg3 ;
-(void)refreshSessionWithConfiguration:(id)arg0 ;
-(void)removeDiagnosticReason:(id)arg0 ;
-(void)setUrlSession:(id)arg0 ;


@end


#endif