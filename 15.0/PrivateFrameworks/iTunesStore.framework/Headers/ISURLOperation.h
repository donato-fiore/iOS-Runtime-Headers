// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISURLOPERATION_H
#define ISURLOPERATION_H

@class NSMutableData, NSCountedSet, SSMutableURLRequestProperties, SSURLSessionManager, NSURLSessionTask, SSHTTPArchive, NSURLCache, NSString, NSNumber, NSURLRequest, SSAuthenticationContext, SSBag, NSArray, NSData, SSURLRequestProperties, NSURLResponse;
@protocol SSURLSessionManagerDelegate, OS_dispatch_queue, ISURLOperationDelegate;


#import "ISOperation.h"
#import "ISURLRequestPerformance.h"
#import "ISDataProvider.h"

@interface ISURLOperation : ISOperation <SSURLSessionManagerDelegate>

 {
    NSMutableData *_dataBuffer;
    NSInteger _networkRetryCount;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    SSURLSessionManager *_urlSessionManager;
    NSURLSessionTask *_urlSessionTask;
    NSObject<OS_dispatch_queue> *_dataBufferAccessQueue;
    SSHTTPArchive *_httpArchive;
    ISURLRequestPerformance *_performanceMetrics;
}


@property (readonly) SSHTTPArchive *HTTPArchive;
@property (readonly, nonatomic) NSURLCache *URLCache;
@property (readonly, nonatomic) NSString *URLCacheID;
@property (retain, nonatomic, setter=_setAccountDSIDOverride:) NSNumber *_accountDSIDOverride; // ivar: __accountDSIDOverride
@property (retain, setter=_setActiveURLRequest:) NSURLRequest *_activeURLRequest;
@property (getter=_loadsHTTPFailures, setter=_setLoadsHTTPFailures:) BOOL _loadsHTTPFailures; // ivar: _loadsHTTPFailures
@property (getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies; // ivar: _shouldSetCookies
@property (getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore; // ivar: _usesPrivateCookieStore
@property (readonly, copy) NSURLRequest *activeURLRequest; // ivar: _activeURLRequest
@property (retain) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, nonatomic) SSBag *bag;
@property (retain) ISDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<ISURLOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isURLBagRequest;
@property (retain) NSString *logKey; // ivar: _logKey
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (retain, nonatomic) NSArray *passThroughErrors; // ivar: _passThroughErrors
@property (readonly) ISURLRequestPerformance *performanceMetrics;
@property (readonly, nonatomic) NSData *rawResponseData;
@property (copy) SSURLRequestProperties *requestProperties;
@property (retain) NSURLResponse *response; // ivar: _response
@property (readonly, nonatomic) BOOL shouldDisableCellular;
@property (readonly, nonatomic) BOOL shouldRequireCellular;
@property (readonly, nonatomic) BOOL shouldSetCookies;
@property (readonly, nonatomic) NSData *sourceAppAuditTokenData;
@property (readonly, nonatomic) NSString *sourceAppBundleID;
@property (readonly) Class superclass;
@property BOOL tracksPerformanceMetrics;
@property (nonatomic, getter=isUploadProgressRequested) BOOL uploadProgressRequested; // ivar: _uploadProgressRequested


+(id)copyUserAgent;
+(struct __CFURLStorageSession *)_sharedCacheStorageSession;
-(BOOL)_isExternalURL:(id)arg0 ;
-(BOOL)_isPassThroughStatus:(NSInteger)arg0 ;
-(BOOL)_processResponseData:(id)arg0 error:(*id)arg1 ;
-(BOOL)_runRequestWithURL:(id)arg0 dataConnectionServiceType:(struct __CFString *)arg1 ;
-(BOOL)_shouldFollowRedirectWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_validateContentLength:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)handleRedirectFromDataProvider:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldFollowRedirectWithRequest:(id)arg0 returningError:(*id)arg1 ;
-(NSInteger)_defaultAuthChallengeDispositionForChallenge:(id)arg0 ;
-(id)URLSession:(id)arg0 task:(id)arg1 decodedDataForResponseData:(id)arg2 ;
-(id)_accountIdentifier;
-(id)_activeURL;
-(id)_copyAuthenticationContext;
-(id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString *)arg0 ;
-(id)_copyQueryStringDictionaryForRedirect:(id)arg0 ;
-(id)_decodedDataForData:(id)arg0 ;
-(id)_errorWithDefaultStringsForError:(id)arg0 ;
-(id)_errorWithDomain:(id)arg0 code:(NSInteger)arg1 ;
-(id)_handleRedirectRequest:(id)arg0 response:(id)arg1 ;
-(id)_sanitizedDescriptionForObject:(id)arg0 ;
-(id)_sanitizedStringForString:(id)arg0 ;
-(id)_sanitizedURLForURL:(id)arg0 ;
-(id)_stringForCachePolicy:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSessionManager:(id)arg0 ;
-(id)newRequestWithURL:(id)arg0 ;
-(id)request;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithEvent:(id)arg2 error:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCreatingHTTPArchive:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_handleFinishedLoading;
-(void)_handleReceivedData:(id)arg0 ;
-(void)_handleReceivedResponse:(id)arg0 ;
-(void)_logRequest:(id)arg0 ;
-(void)_logResponseBody:(id)arg0 ;
-(void)_performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)_retry;
-(void)_run;
-(void)_sendContentLengthToDelegate:(NSInteger)arg0 ;
-(void)_sendOutputToDelegate:(id)arg0 ;
-(void)_sendRequestToDelegate:(id)arg0 ;
-(void)_sendResponseToDelegate:(id)arg0 ;
-(void)_stopConnection;
-(void)_stopIfCancelled;
-(void)_updateProgress;
-(void)_willSendRequest:(id)arg0 ;
-(void)dealloc;
-(void)handleResponse:(id)arg0 ;
-(void)run;
-(void)setRequest:(id)arg0 ;


@end


#endif