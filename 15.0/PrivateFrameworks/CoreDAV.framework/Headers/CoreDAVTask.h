// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVTASK_H
#define COREDAVTASK_H

@class NSHTTPURLResponse, NSURLSession, NSURLSessionDataTask, NSURLRequest, NSDate, NSError, NSMutableDictionary, NSMutableArray, NSData, NSString, NSThread, NSDictionary, NSURL, NSRunLoop;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, CoreDAVSubmittable, CoreDAVAccountInfoProvider, CoreDAVTaskDelegate, CoreDAVResponseBodyParser, CoreDAVTaskManager;

#import <Foundation/Foundation.h>

#import "CoreDAVRequestLogger.h"
#import "CoreDAVErrorItem.h"
#import "CoreDAVItem.h"

@interface CoreDAVTask : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, CoreDAVSubmittable>

 {
    NSInteger _numDownloadedElements;
    NSHTTPURLResponse *_response;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSURLRequest *_request;
    NSDate *_dateConnectionWentOut;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _finished;
    BOOL _receivedBadPasswordResponse;
    BOOL _triedRenewingCredential;
    BOOL _justTriedTokenAuth;
    BOOL _everTriedTokenAuth;
    BOOL _shouldRetryWithClientToken;
    BOOL _didRetryWithClientToken;
    BOOL _requestIsCompressed;
    BOOL _compressedRequestFailed;
    NSError *_passwordNotificationError;
    CoreDAVRequestLogger *_logger;
    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    CoreDAVErrorItem *_forbiddenErrorItem;
    NSString *_uniqueID;
    NSThread *_callbackThread;
    BOOL _callbackThreadSet;
}


@property (weak, nonatomic) NSObject<CoreDAVAccountInfoProvider> *accountInfoProvider; // ivar: _accountInfoProvider
@property (nonatomic) BOOL allowAutomaticRedirects; // ivar: _allowAutomaticRedirects
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int depth; // ivar: _depth
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresGuardianRestrictions; // ivar: _ignoresGuardianRestrictions
@property (copy, nonatomic) id *requestProgressBlock; // ivar: _requestProgressBlock
@property (retain, nonatomic) NSDictionary *requestProperties; // ivar: _requestProperties
@property (retain, nonatomic) NSObject<CoreDAVResponseBodyParser> *responseBodyParser; // ivar: _responseBodyParser
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) id *responseProgressBlock; // ivar: _responseProgressBlock
@property (nonatomic) NSInteger responseStatusCode; // ivar: _responseStatusCode
@property (readonly, nonatomic) CoreDAVItem *rootElement;
@property (nonatomic) BOOL simulated; // ivar: _simulated
@property (retain, nonatomic) NSMutableDictionary *simulatedResponseHeaders; // ivar: _simulatedResponseHeaders
@property (retain, nonatomic) CoreDAVItem *simulatedRootElement; // ivar: _simulatedRootElement
@property (nonatomic) NSInteger simulatedStatusCode; // ivar: _simulatedStatusCode
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CoreDAVTaskManager> *taskManager; // ivar: _taskManager
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (nonatomic) NSUInteger totalBytesReceived; // ivar: _totalBytesReceived
@property BOOL totalBytesWasProcessedAsAbnormallyLarge; // ivar: _totalBytesWasProcessedAsAbnormallyLarge
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSRunLoop *workRunLoop;


+(id)stringFromDepth:(int)arg0 ;
+(unsigned int)uniqueQueryID;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg0 ;
-(BOOL)_handleUnauthorizedAccessError:(id)arg0 ;
-(BOOL)_includeGeneralHeaders;
-(BOOL)_shouldCreateCredentialForBasicOrDigestAuthChallenge:(id)arg0 ;
-(BOOL)_shouldHandleStatusCode:(NSInteger)arg0 ;
-(BOOL)markAsFinished;
-(BOOL)shouldLogResponseBody;
-(BOOL)validate:(*id)arg0 ;
-(NSInteger)numDownloadedElements;
-(NSUInteger)cachePolicy;
-(id)_applyAuthenticationChain:(struct __CFArray *)arg0 toRequest:(id)arg1 ;
-(id)_applyStorageSession:(struct __CFURLStorageSession *)arg0 toRequest:(id)arg1 ;
-(id)_compressBodyData:(id)arg0 ;
-(id)_createBodyData;
-(id)_requestForLogging;
-(id)_sessionForLogging;
-(id)additionalHeaderValues;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)credentialForClientCertificateChallenge:(id)arg0 ;
-(id)credentialForOAuthChallenge:(id)arg0 ;
-(id)httpMethod;
-(id)initWithURL:(id)arg0 ;
-(id)lastRedirectURL;
-(id)redactedDescription;
-(id)requestBody;
-(id)requestBodyStream;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_assignConnectionProperties:(id)arg0 toSessionConfiguration:(id)arg1 ;
-(void)_didReceiveAuthenticationChallenge:(id)arg0 forTask:(id)arg1 completionHandler:(id)arg2 ;
-(void)_failImmediately;
-(void)_handleAuthenticationChallenge:(id)arg0 task:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleBadPasswordResponse;
-(void)_logSantizedRequest:(id)arg0 withTaskID:(id)arg1 ;
-(void)_runOnCallbackThread:(id)arg0 ;
-(void)_runOnThisThread:(id)arg0 ;
-(void)_sendTimeSpentInNetworkingToProvider;
-(void)_session:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)_session:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)_session:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_task:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_taskFinishedLoading:(id)arg0 ;
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;
-(void)finishEarlyWithError:(id)arg0 ;
-(void)handleWebLoginRequestWithCompletionBlock:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)overrideRequestHeader:(id)arg0 withValue:(id)arg1 ;
-(void)performCoreDAVTask;
-(void)reportStatusWithError:(id)arg0 ;
-(void)reset;
-(void)startModal;
-(void)submitWithTaskManager:(id)arg0 ;
-(void)tearDownResources;


@end


#endif