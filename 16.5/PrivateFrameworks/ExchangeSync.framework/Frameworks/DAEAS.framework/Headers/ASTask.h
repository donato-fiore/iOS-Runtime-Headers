// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTASK_H
#define ASTASK_H

@class NSHTTPURLResponse, NSURLSession, NSURLSessionDataTask, NSURLRequest, NSString, NSError, NSDate, DATaskManager, NSThread, NSTimer;
@protocol DATask, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>

#import "ASItem.h"
#import "ASParseContext.h"

@interface ASTask : NSObject <DATask, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

 {
    BOOL _haveSwitchedCodePage;
    BOOL _haveParsedCommand;
    NSHTTPURLResponse *_response;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
    NSURLRequest *_request;
    BOOL _isFakingIt;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _didReset;
    BOOL _finished;
    BOOL _finishedByTimeoutEnforcer;
    int _numBadPasswordResponses;
    BOOL _haveCheckedForTopLevelError;
    BOOL _handledTopLevelError;
    int _taskID;
    int _modalReason;
    int _modalPushCount;
    NSString *_lastKnownPolicyKey;
    NSError *_passwordNotificationError;
    NSDate *_dateConnectionWentOut;
    BOOL _retry;
    int _serverRequestedRetryCount;
}


@property (nonatomic) BOOL askedToCancelWhileModal; // ivar: _askedToCancelWhileModal
@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) ASItem *currentlyParsingItem; // ivar: _currentlyParsingItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int interfaceBinding; // ivar: _interfaceBinding
@property (nonatomic) BOOL isExclusive; // ivar: _isExclusive
@property (nonatomic) BOOL isLoadedOnMainThread; // ivar: _isLoadedOnMainThread
@property (retain, nonatomic) NSString *lastKnownPassword; // ivar: _lastKnownPassword
@property (readonly, nonatomic) ASParseContext *parseContext; // ivar: _parseContext
@property (nonatomic) NSInteger receivedBytesCount; // ivar: _receivedBytesCount
@property (nonatomic) NSInteger sentBytesCount; // ivar: _sentBytesCount
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (retain, nonatomic) DATaskManager *strongTaskManagerDuringDelegateCallout; // ivar: _strongTaskManagerDuringDelegateCallout
@property (readonly) Class superclass;
@property (weak, nonatomic) DATaskManager *taskManager; // ivar: _taskManager
@property (retain, nonatomic) NSThread *thread; // ivar: _thread
@property (retain, nonatomic) NSTimer *timeoutEnforcer; // ivar: _timeoutEnforcer


+(void)_restoreDefaultTaskTimeout;
+(void)_setDefaultTaskTimeout:(CGFloat)arg0 failureFallbackTimeout:(CGFloat)arg1 ;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg0 ;
-(BOOL)_handleCertificateError:(id)arg0 ;
-(BOOL)_handleRedirect:(id)arg0 ;
-(BOOL)_isWBXML;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg0 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg0 ;
-(BOOL)_shouldUseUsernamePasswordForAuthenticationMethod:(id)arg0 ;
-(BOOL)attemptRetryWithStatus:(NSInteger)arg0 error:(id)arg1 ;
-(BOOL)checkForErrorInContext:(id)arg0 ;
-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)isInCallOutToDelegate;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)requiresEASVersionUpdate;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldHandleServerErrorRetryLater;
-(BOOL)shouldHoldPowerAssertion;
-(BOOL)shouldLogIncomingData;
-(BOOL)shouldReportTimeInNetwork;
-(BOOL)shouldStallAfterConnectionLost;
-(CGFloat)percentComplete;
-(CGFloat)timeoutInterval;
-(NSInteger)taskStatusForError:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)_HTTPMethodForRequest:(id)arg0 ;
-(id)_applyAuthenticationChain:(id)arg0 toRequest:(id)arg1 ;
-(id)_easVersion;
-(id)_getCredential:(id)arg0 ;
-(id)_policyKey;
-(id)_requestForLogging;
-(id)_sessionForLogging;
-(id)_url;
-(id)command;
-(id)contentType;
-(id)httpMethod;
-(id)init;
-(id)onBehalfOfBundleIdentifier;
-(id)parameterData;
-(id)requestBody;
-(id)requestBodyStreamOutKnownSize:(*int)arg0 ;
-(id)responseContentType;
-(int)commandCode;
-(int)numDownloadedElements;
-(int)taskID;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_URLSessionDataTaskDidReceiveData:(id)arg0 ;
-(void)_URLSessionDidBecomeInvalidWithError:(id)arg0 ;
-(void)_URLSessionTaskDidCompleteWithError:(id)arg0 ;
-(void)_addAuthToRequest:(id)arg0 ;
-(void)_assignConnectionProperties:(id)arg0 toSessionConfiguration:(id)arg1 ;
-(void)_continuePerformTask;
-(void)_failImmediately;
-(void)_handleAuthenticationChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleBadPasswordResponse;
-(void)_handleCompletion;
-(void)_handleCompletionError:(id)arg0 ;
-(void)_handleCredentialRenewalResult:(id)arg0 ;
-(void)_initFakeParseContext;
-(void)_popModal;
-(void)_pushModalForReason:(int)arg0 ;
-(void)_setHTTPParametersOnRequest:(id)arg0 outBodyStream:(*id)arg1 outBodyData:(*id)arg2 ;
-(void)_tearDownResourcesHelper;
-(void)_timeoutEnforcerFired:(id)arg0 ;
-(void)_unitTestFinished;
-(void)cancelTaskWithReason:(int)arg0 underlyingError:(id)arg1 ;
-(void)dealloc;
-(void)didCallOutToDelegate;
-(void)didProcessContext:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 afterDelegateCallout:(id)arg1 ;
-(void)handleTopLevelErrorStatus:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)performTask;
-(void)reportStatusWithError:(id)arg0 ;
-(void)reset;
-(void)startModal;
-(void)tearDownResources;
-(void)tearDownResourcesAndCancelTask;
-(void)tearDownResourcesButLeaveSessionAlone;
-(void)willCallOutToDelegate;
-(void)willProcessContext;


@end


#endif