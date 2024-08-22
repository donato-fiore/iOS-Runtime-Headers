// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSURLSESSIONTASK_H
#define NSURLSESSIONTASK_H

@class NSProgress, NSString, NSDictionary, NSData, NSURL, NSArray, NSUUID, NSDate, NSError;
@protocol NSCopying, NSProgressReporting, NSURLSessionAppleIDContext, STExtractor, OS_nw_endpoint, NSURLSessionTaskDelegate, OS_nw_activity, __NSURLSessionTaskGroupForConfiguration, OS_voucher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "__NSCFURLSessionDelegateWrapper.h"
#import "__CFN_TransactionMetrics.h"
#import "NSURLSessionConfiguration.h"
#import "__CFN_TaskMetrics.h"
#import "NSURLSessionTaskHTTPAuthenticator.h"
#import "NSURLRequest.h"
#import "NSURLSessionTaskDependencyTree.h"
#import "NSURLResponse.h"
#import "NSURLSession.h"
#import "NSURLSessionTaskDependency.h"

@interface NSURLSessionTask : NSObject <NSCopying, NSProgressReporting>

 {
    NSProgress *_uploadProgress;
    NSProgress *_downloadProgress;
    *__CFDictionary _atsStateCache;
    os_unfair_lock_s _unfair_lock;
    BOOL _isInUpload;
    BOOL _undeterminedUploadProgressState;
    BOOL _undeterminedDownloadProgressState;
    BOOL _progressReportingFinished;
    BOOL _seenFirstResume;
    BOOL _prefersIncrementalDeliveryAPIStorage;
    float _priorityAPIStorage;
    __NSCFURLSessionDelegateWrapper *_publicDelegateWrapper;
    __NSCFURLSessionDelegateWrapper *_internalDelegateWrapper;
}


@property (copy, nonatomic) NSString *_APSRelayTopic; // ivar: _APSRelayTopic
@property (copy) NSDictionary *_DuetActivityProperties; // ivar: _DuetActivityProperties
@property (copy) NSData *_TCPConnectionMetadata; // ivar: __TCPConnectionMetadata
@property unsigned short _TLSMaximumSupportedProtocolVersion; // ivar: __TLSMaximumSupportedProtocolVersion
@property unsigned short _TLSMinimumSupportedProtocolVersion; // ivar: __TLSMinimumSupportedProtocolVersion
@property (readonly) unsigned short _TLSNegotiatedCipherSuite; // ivar: _TLSNegotiatedCipherSuite
@property NSUInteger _allowedProtocolTypes; // ivar: _allowedProtocolTypes
@property BOOL _allowsCellular; // ivar: _allowsCellular
@property int _allowsCellularOverride; // ivar: _allowsCellularOverride
@property int _allowsConstrainedOverride; // ivar: _allowsConstrainedOverride
@property int _allowsExpensiveOverride; // ivar: _allowsExpensiveOverride
@property (nonatomic) BOOL _allowsQUIC; // ivar: _allowsQUIC
@property BOOL _appSSOFallback; // ivar: _appSSOFallback
@property (copy, setter=_setAppleIDContext:) NSObject<NSURLSessionAppleIDContext> *_appleIDContext; // ivar: _appleIDContext
@property BOOL _appleIDContextRedirect; // ivar: _appleIDContextRedirect
@property BOOL _assumesHTTP3Capable; // ivar: _assumesHTTP3Capable
@property NSUInteger _attribution; // ivar: _attribution
@property BOOL _authenticatorConfiguredViaTaskProperty; // ivar: _authenticatorConfiguredViaTaskProperty
@property (retain, nonatomic) NSURL *_backgroundPublishingURL; // ivar: _backgroundPublishingURL
@property (retain) __CFN_TransactionMetrics *_backgroundTransactionMetrics; // ivar: _backgroundTransactionMetrics
@property (retain, nonatomic) NSData *_backtrace; // ivar: _backtrace
@property (copy) NSString *_boundInterfaceIdentifier; // ivar: _boundInterfaceIdentifier
@property NSInteger _bytesPerSecondLimit; // ivar: _bytesPerSecondLimitValue
@property BOOL _cacheOnly; // ivar: _cacheOnly
@property NSUInteger _cachePolicy; // ivar: _cachePolicy
@property (copy) NSDictionary *_cachedSocketStreamProperties; // ivar: _cachedSocketStreamProperties
@property (nonatomic) BOOL _callCompletionHandlerInline; // ivar: _callCompletionHandlerInline
@property (retain) *_CFURLCache _cfCache; // ivar: _cfCache
@property (retain) *OpaqueCFHTTPCookieStorage _cfCookies; // ivar: _cfCookies
@property (retain) *_CFURLCredentialStorage _cfCreds; // ivar: _cfCreds
@property (retain) *_CFHSTSPolicy _cfHSTS; // ivar: _cfHSTS
@property (setter=_setConnectionIsCellular:) BOOL _connectionIsCellular; // ivar: _connectionIsCellular
@property BOOL _connectionIsCompanionLink; // ivar: _connectionIsCompanionLink
@property int _cookieAcceptPolicy; // ivar: _cookieAcceptPolicy
@property (copy, nonatomic) id *_cookieTransformCallback; // ivar: _cookieTransformCallback
@property NSInteger _countOfBytesReceivedEncoded; // ivar: __countOfBytesReceivedEncoded
@property NSInteger _countOfPendingBytesReceivedEncoded; // ivar: __countOfPendingBytesReceivedEncoded
@property unsigned int _darkWakePowerAssertion; // ivar: _darkWakePowerAssertion
@property (retain, nonatomic) NSDictionary *_dependencyInfo; // ivar: _dependencyInfo_ivar
@property (readonly, nonatomic) NSString *_description;
@property BOOL _disallowCellular; // ivar: _disallowCellular
@property (nonatomic) NSInteger _discretionaryOverride; // ivar: _discretionaryOverride
@property (nonatomic) BOOL _doesSZExtractorConsumeExtractedData; // ivar: _doesSZExtractorConsumeExtractedData
@property (readonly, copy) NSURLSessionConfiguration *_effectiveConfiguration;
@property (copy, nonatomic) NSURLSessionConfiguration *_effectiveConfiguration; // ivar: _effectiveConfiguration
@property (nonatomic) NSUInteger _expectedProgressTarget; // ivar: _expectedProgressTargetValue
@property (retain, nonatomic, setter=set_extractor:) NSObject<STExtractor> *_extractor; // ivar: _extractor
@property BOOL _extractorFinishedDecoding; // ivar: _extractorFinishedDecoding
@property BOOL _extractorPreparedForExtraction; // ivar: _extractorPreparedForExtraction
@property (nonatomic) BOOL _hasSZExtractor; // ivar: _hasSZExtractor
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *_hostOverride; // ivar: _hostOverride
@property (copy, nonatomic) id *_httpConnectionInfoCompletionBlock; // ivar: _httpConnectionInfoCompletionBlock
@property (retain, nonatomic) NSObject<NSURLSessionTaskDelegate> *_internalDelegate;
@property (readonly, nonatomic) BOOL _isAVAssetTask;
@property BOOL _isKnownTracker; // ivar: _isKnownTracker
@property BOOL _isTopLevelNavigation; // ivar: _isTopLevelNavigation
@property (nonatomic) BOOL _keepDownloadTaskFile;
@property (copy) NSDictionary *_legacySocketStreamProperties; // ivar: _legacySocketStreamProperties
@property CGFloat _loadingPriority;
@property CGFloat _loadingPriorityValue; // ivar: _loadingPriorityValue
@property (readonly, nonatomic) NSString *_loggableDescription; // ivar: _loggableDescription
@property (retain) __CFN_TaskMetrics *_metrics; // ivar: _metrics
@property int _networkServiceType; // ivar: _networkServiceType
@property (retain) NSObject<OS_nw_activity> *_nw_activity; // ivar: _nw_activity
@property (copy) NSString *_pathToDownloadTaskFile; // ivar: _pathToDownloadTaskFile
@property unsigned int _powerAssertion; // ivar: _powerAssertion
@property (nonatomic) BOOL _preconnect; // ivar: _preconnect
@property BOOL _preventsAppSSO; // ivar: _preventsAppSSO
@property BOOL _preventsIdleSystemSleep; // ivar: _preventsIdleSystemSleep
@property BOOL _preventsSystemHTTPProxyAuthentication; // ivar: _preventsSystemHTTPProxyAuthentication
@property NSInteger _priority;
@property NSInteger _priorityValue; // ivar: _priorityValue
@property BOOL _privacyProxyFailClosed; // ivar: _privacyProxyFailClosed
@property BOOL _privacyProxyFailClosedForUnreachableNonMainHosts; // ivar: _privacyProxyFailClosedForUnreachableNonMainHosts
@property (retain) NSObject<OS_nw_activity> *_private_nw_activity; // ivar: _private_nw_activity
@property BOOL _prohibitAuthUI; // ivar: _prohibitAuthUI
@property BOOL _prohibitPrivacyProxy; // ivar: _prohibitPrivacyProxy
@property (nonatomic) id *_protocolForTask; // ivar: _protocolForTask
@property BOOL _proxyHandshakePending; // ivar: _proxyHandshakePending
@property (copy) NSDictionary *_proxySettings; // ivar: _proxySettings
@property (retain, nonatomic) NSURL *_publishingURL; // ivar: _publishingURL
@property (nonatomic) unsigned int _qos; // ivar: _qos
@property NSInteger _requestPriority; // ivar: _requestPriority
@property int _requiresDNSSECValidation; // ivar: _requiresDNSSECValidation
@property BOOL _requiresSecureHTTPSProxyConnection; // ivar: _requiresSecureHTTPSProxyConnection
@property (readonly, nonatomic) NSArray *_resolvedCNAMEChain; // ivar: _resolvedCNAMEChain
@property BOOL _shouldHandleCookies; // ivar: _shouldHandleCookies
@property BOOL _shouldPipelineHTTP; // ivar: _shouldPipelineHTTP
@property BOOL _shouldSkipPipelineProbe; // ivar: _shouldSkipPipelineProbe
@property BOOL _shouldSkipPreferredClientCertificateLookup; // ivar: _shouldSkipPreferredClientCertificateLookup
@property BOOL _shouldUsePipelineHeuristics; // ivar: _shouldUsePipelineHeuristics
@property (retain) NSURL *_siteForCookies; // ivar: _siteForCookies
@property (copy) NSDictionary *_sslSettings; // ivar: _sslSettings
@property (copy) NSString *_storagePartitionIdentifier; // ivar: _storagePartitionIdentifier
@property BOOL _strictContentLength; // ivar: _strictContentLength
@property NSInteger _suspensionThreshhold; // ivar: _suspensionThreshhold
@property (readonly, retain) NSObject<__NSURLSessionTaskGroupForConfiguration> *_taskGroup; // ivar: __taskGroup
@property CGFloat _timeWindowDelay; // ivar: _timeWindowDelay
@property CGFloat _timeWindowDuration; // ivar: _timeWindowDuration
@property CGFloat _timeoutInterval; // ivar: _timeoutInterval
@property CGFloat _timeoutIntervalForResource; // ivar: _timeoutIntervalForResource_ivar
@property (copy) NSString *_trackerContext; // ivar: _trackerContext
@property (retain, nonatomic) NSDictionary *_trailers; // ivar: _trailers
@property (copy) NSUUID *_uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain) NSObject<OS_voucher> *_voucher; // ivar: _voucher
@property (copy) NSURLSessionTaskHTTPAuthenticator *authenticator; // ivar: _authenticator
@property NSInteger countOfBytesClientExpectsToReceive; // ivar: _countOfBytesClientExpectsToReceive
@property NSInteger countOfBytesClientExpectsToSend; // ivar: _countOfBytesClientExpectsToSend
@property NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property (copy) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (readonly, retain) NSURL *currentRequest_URL;
@property (readonly, retain) NSURL *currentRequest_mainDocumentURL;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (retain, nonatomic) NSURLSessionTaskDependencyTree *dependencyTree; // ivar: _dependencyTree
@property (readonly, copy) NSString *description;
@property (copy) NSDate *earliestBeginDate; // ivar: earliestBeginDate
@property (copy) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (copy) NSURLRequest *originalRequest; // ivar: _originalRequest
@property BOOL prefersIncrementalDelivery;
@property float priority;
@property (readonly) NSProgress *progress; // ivar: _progress
@property (copy) NSURLResponse *response; // ivar: _response
@property (readonly, retain) NSURLSession *session;
@property CGFloat startTime; // ivar: _startTime
@property NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSessionTaskDependency *taskDependency; // ivar: _taskDependency
@property (copy) NSString *taskDescription; // ivar: _taskDescription
@property NSUInteger taskIdentifier; // ivar: _taskIdentifier
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;


+(id)new;
-(BOOL)_needSendingMetrics;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(NSInteger)computeAdjustedPoolPriority;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(id)_incompleteTaskMetrics;
-(id)_timingData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOriginalRequest:(id)arg0 ident:(NSUInteger)arg1 taskGroup:(id)arg2 ;
-(id)initWithTask:(id)arg0 ;
-(id)initWithTaskGroup:(id)arg0 ;
-(struct XCookieStorage *)_createXCookieStorage;
-(struct XCredentialStorage *)_createXCredentialStorage;
-(struct _CFHSTSPolicy *)_copyHSTSPolicy;
-(struct __CFDictionary *)_copyATSState;
-(struct __CFDictionary *)_copySocketStreamProperties;
-(struct __CFSet *)_getAuthenticatorStatusCodes;
-(void)_adoptEffectiveConfiguration:(id)arg0 ;
-(void)_appendCountOfPendingBytesReceivedEncoded:(NSInteger)arg0 ;
-(void)_completeUploadProgress;
-(void)_consumePendingBytesReceivedEncoded;
-(void)_didSendMetrics;
-(void)_finishProgressReporting;
-(void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg0 completionHandler:(id)arg1 ;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_adjustBytesPerSecondLimit:(NSInteger)arg0 ;
-(void)_onqueue_adjustPriorityHint:(float)arg0 incremental:(BOOL)arg1 ;
-(void)_onqueue_adoptEffectiveConfiguration:(id)arg0 ;
-(void)_onqueue_releasePowerAsssertion;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(void)_setConnectionCacheKey:(*void)arg0 ;
-(void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg0 ;
-(void)_setSocketProperties:(struct __CFDictionary *)arg0 connectionProperties:(struct __CFDictionary *)arg1 ;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_withXURLCache:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)didReceiveInformationalResponse:(id)arg0 ;
-(void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(id)arg0 ;
-(void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg0 statusCodes:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)resume;
-(void)suspend;
-(void)updateCurrentRequest:(id)arg0 ;


@end


#endif