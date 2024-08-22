// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDURLREQUEST_H
#define CKDURLREQUEST_H

@class NSData, NSString, NSDictionary, C2RequestOptions, NSMutableDictionary, NSDate, NSError, NSURL, NSNumber, NSMutableArray, NSURLRequest, NSInputStream, NSArray, NSHTTPURLResponse, NSMutableSet, CKTapToRadarRequest, CKSignpost, NSURLSession, NSURLSessionDataTask;
@protocol C2RequestDelegate, CKDZoneGatekeeperWaiter, OS_os_activity, C2NetworkingDelegate, OS_dispatch_queue, OS_voucher;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"
#import "CKDOperationMetrics.h"
#import "CKDOperation.h"
#import "CKDResponseBodyParser.h"
#import "CKDProtobufStreamWriter.h"
#import "CKDTrafficLogger.h"
#import "CKDProtocolTranslator.h"

@interface CKDURLRequest : NSObject <C2RequestDelegate, CKDZoneGatekeeperWaiter>

 {
    BOOL _didSendRequest;
    BOOL _didFinishLoading;
    BOOL _finished;
    BOOL _didRetrySignature;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    NSObject<OS_os_activity> *_osActivity;
    NSObject<OS_os_activity> *_transmissionActivity;
}


@property (readonly, nonatomic) NSString *acceptContentType;
@property (readonly, nonatomic) NSDictionary *additionalHeaderValues;
@property (nonatomic) BOOL allowAutomaticRedirects; // ivar: _allowAutomaticRedirects
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (retain, nonatomic) NSString *automatedDeviceGroup; // ivar: _automatedDeviceGroup
@property (retain, nonatomic) NSObject<C2NetworkingDelegate> *c2NetworkingDelegate; // ivar: _c2NetworkingDelegate
@property (retain) C2RequestOptions *c2RequestOptions; // ivar: _c2RequestOptions
@property (nonatomic) NSInteger cachedPartitionType; // ivar: _cachedPartitionType
@property (nonatomic) NSInteger cachedServerType; // ivar: _cachedServerType
@property (getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSDictionary *clientProvidedAdditionalHeaderValues; // ivar: _clientProvidedAdditionalHeaderValues
@property (retain, nonatomic) NSString *cloudKitAuthToken; // ivar: _cloudKitAuthToken
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) CKDContainer *container; // ivar: _container
@property (retain, nonatomic) NSMutableDictionary *countsByRequestOperationType; // ivar: _countsByRequestOperationType
@property (readonly, nonatomic) NSInteger databaseScope;
@property (retain) NSDate *dateRequestWentOut; // ivar: _dateRequestWentOut
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL didFetchNilAuthToken; // ivar: _didFetchNilAuthToken
@property (nonatomic) BOOL didReceiveResponseBodyData; // ivar: _didReceiveResponseBodyData
@property (nonatomic) BOOL didRetryAuth; // ivar: _didRetryAuth
@property (readonly, nonatomic) NSUInteger duetPreClearedMode;
@property (retain) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL expectsResponseBody;
@property (retain, nonatomic) NSDictionary *fakeResponseOperationResultByItemID; // ivar: _fakeResponseOperationResultByItemID
@property (readonly, nonatomic) BOOL handlesAnonymousCKUserIDPropagation;
@property (readonly, nonatomic) BOOL hasRequestBody;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveCachedPartitionType; // ivar: _haveCachedPartitionType
@property (nonatomic) BOOL haveCachedServerType; // ivar: _haveCachedServerType
@property (readonly, nonatomic) NSString *httpMethod;
@property (retain, nonatomic) NSString *iCloudAuthToken; // ivar: _iCloudAuthToken
@property (readonly) BOOL isFinished;
@property BOOL isHandlingAuthRetry; // ivar: _isHandlingAuthRetry
@property BOOL isWaitingOnAuthRenew; // ivar: _isWaitingOnAuthRenew
@property (readonly, nonatomic) int isolationLevel;
@property (readonly, nonatomic) NSURL *lastRedirectURL;
@property (retain, nonatomic) NSError *lastRetryAuthError; // ivar: _lastRetryAuthError
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleQueue; // ivar: _lifecycleQueue
@property (retain, nonatomic) CKDOperationMetrics *metrics; // ivar: _metrics
@property BOOL needsAuthRetry; // ivar: _needsAuthRetry
@property (readonly, nonatomic) NSUInteger networkServiceType;
@property (nonatomic) NSUInteger numDownloadedElements; // ivar: _numDownloadedElements
@property (weak, nonatomic) CKDOperation *operation; // ivar: _operation
@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) NSNumber *operationGroupQuantity;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) NSString *operationIDForProtobuf;
@property (readonly, nonatomic) int operationType;
@property (retain, nonatomic) NSMutableDictionary *overriddenHeaders; // ivar: _overriddenHeaders
@property (readonly, nonatomic) NSInteger partitionType;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) NSString *protobufOperationName;
@property (readonly, nonatomic) NSInteger qualityOfService;
@property (retain, nonatomic) NSMutableArray *redirectHistory; // ivar: _redirectHistory
@property (retain) NSURLRequest *request; // ivar: _request
@property (readonly, nonatomic) NSInputStream *requestBodyStream;
@property (readonly, nonatomic) NSString *requestContentType;
@property (readonly, nonatomic) BOOL requestGETPreAuth;
@property (readonly, nonatomic) NSArray *requestOperationClasses;
@property (readonly, nonatomic) NSArray *requestOperations; // ivar: _requestOperations
@property (readonly, nonatomic) int requestOriginator; // ivar: _requestOriginator
@property (copy, nonatomic) id *requestProgressBlock; // ivar: _requestProgressBlock
@property (retain, nonatomic) NSDictionary *requestProperties; // ivar: _requestProperties
@property (readonly, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (readonly, nonatomic) BOOL requiresCKAnonymousUserIDs;
@property (readonly, nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;
@property (readonly, nonatomic) NSUInteger resolvedDiscretionaryNetworkBehavior;
@property (retain) NSHTTPURLResponse *response; // ivar: _response
@property (retain, nonatomic) CKDResponseBodyParser *responseBodyParser; // ivar: _responseBodyParser
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSMutableSet *responseObjectUUIDs; // ivar: _responseObjectUUIDs
@property (copy, nonatomic) id *responseProgressBlock; // ivar: _responseProgressBlock
@property (readonly, nonatomic) NSInteger responseStatusCode; // ivar: _responseStatusCode
@property (readonly, nonatomic) BOOL sendRequestAnonymously;
@property (copy, nonatomic) NSString *serverProvidedAutoBugCaptureReason; // ivar: _serverProvidedAutoBugCaptureReason
@property (retain, nonatomic) NSString *serverProvidedAutoSysdiagnoseCollectionReason; // ivar: _serverProvidedAutoSysdiagnoseCollectionReason
@property (retain, nonatomic) CKTapToRadarRequest *serverProvidedTapToRadarRequest; // ivar: _serverProvidedTapToRadarRequest
@property (readonly, nonatomic) NSInteger serverType;
@property (readonly, nonatomic) BOOL shouldCompressBody;
@property (readonly, nonatomic) CKSignpost *signpost; // ivar: _signpost
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) CKDProtobufStreamWriter *streamWriter; // ivar: _streamWriter
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *timingData; // ivar: _timingData
@property (retain, nonatomic) CKDTrafficLogger *trafficLogger; // ivar: _trafficLogger
@property (retain, nonatomic) CKDProtocolTranslator *translator; // ivar: _translator
@property (retain, nonatomic) NSDictionary *unitTestOverrides; // ivar: _unitTestOverrides
@property (readonly, nonatomic) NSURL *url;
@property (retain) NSURLSession *urlSession; // ivar: _urlSession
@property (retain) NSURLSessionDataTask *urlSessionTask; // ivar: _urlSessionTask
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher; // ivar: _voucher


-(BOOL)_onLifecycleQueue;
-(BOOL)allowsAnonymousAccount;
-(BOOL)allowsAuthedAccount;
-(BOOL)expectDelayBeforeRequestBegins;
-(BOOL)expectsSingleObject;
-(BOOL)includeContainerServerInfo;
-(BOOL)markAsFinished;
-(BOOL)parsingStandaloneMessage;
-(BOOL)performOnLifecycleQueueIfNotFinished:(id)arg0 ;
-(BOOL)requiresAppPartitionURL;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresTokenRegistration;
-(BOOL)requiresUserPartitionURL;
-(BOOL)shouldLogResponseBody;
-(BOOL)usesCloudKitAuthToken;
-(BOOL)validate:(*id)arg0 ;
-(CGFloat)timeoutIntervalForRequest;
-(CGFloat)timeoutIntervalForResource;
-(Class)expectedResponseClass;
-(NSInteger)_handlePlistResult:(id)arg0 ;
-(NSInteger)_handleServerJSONResult:(id)arg0 ;
-(NSInteger)_handleServerProtobufResult:(id)arg0 rawData:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)_CFNetworkTaskIdentifierString;
-(id)_jsonObjectParsedBlock:(SEL)arg0 ;
-(id)_protobufObjectParsedBlock:(SEL)arg0 ;
-(id)_wrapErrorIfNecessary:(id)arg0 ;
-(id)_xmlObjectParsedBlock:(SEL)arg0 ;
-(id)ckShortDescription;
-(id)createAssetAuthorizeGetRequestOptionsHeaderInfoWithKey:(id)arg0 value:(id)arg1 ;
-(id)defaultParserForContentType:(id)arg0 ;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 ;
-(id)operationRequestWithType:(int)arg0 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)statusReportWithIndent:(NSUInteger)arg0 ;
-(id)zoneIDsToLock;
-(void)URLSession:(id)arg0 _taskIsWaitingForConnection:(id)arg1 ;
-(void)URLSession:(id)arg0 _willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_acquireZoneGates;
-(void)_authTokenWithCompletionHandler:(id)arg0 ;
-(void)_fetchContainerScopedUserID;
-(void)_fetchDeviceID;
-(void)_finishOnLifecycleQueueWithError:(id)arg0 ;
-(void)_handleAuthFailure;
-(void)_loadRequest:(id)arg0 ;
-(void)_performRequest;
-(void)_prepareAuthTokens;
-(void)_prepareCloudKitAuthToken;
-(void)_registerPushTokens;
-(void)_registerRequestOperationTypesForOperations:(id)arg0 ;
-(void)_renewAuthTokenWithCompletionHandler:(id)arg0 ;
-(void)_setupConfiguration;
-(void)_setupPrivateDatabaseURL;
-(void)_setupPublicDatabaseURL;
-(void)_tearDownStreamWriter;
-(void)_triggerAutoBugCaptureWithErrorPayload:(id)arg0 ;
-(void)addSignatureForRequestOperation:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)overrideRequestHeader:(id)arg0 withValue:(id)arg1 ;
-(void)performASyncOnLifecycleQueueIfNotFinished:(id)arg0 ;
-(void)performRequest;
-(void)prepareRequestWithCompletion:(id)arg0 ;
-(void)requestDidParse509CertObject:(id)arg0 ;
-(void)requestDidParseJSONObject:(id)arg0 ;
-(void)requestDidParseNodeFailure:(id)arg0 ;
-(void)requestDidParsePlaintextObject:(id)arg0 ;
-(void)requestDidParsePlistObject:(id)arg0 ;
-(void)tearDownResources;
-(void)tearDownResourcesAndReleaseTheZoneLocks:(BOOL)arg0 ;
-(void)validateAnonymousUserIDPropagation;


@end


#endif