// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONNECTION_SESSIONTASK_H
#define CONNECTION_SESSIONTASK_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "NSMutableURLRequest.h"
#import "NSURLRequest.h"
#import "NSURLSession.h"
#import "NSURLSessionConfiguration.h"
#import "__CFN_TaskMetrics.h"

@interface CONNECTION_SessionTask : NSObject {
    *_CFURLRequest _originalRequest;
    *_CFURLRequest _currentRequest;
    CGFloat _startTime;
    *__CFDictionary _connectionProperties;
    *__CFDictionary _socketProperties;
    NSMutableURLRequest *_nsCurrentRequest;
    NSURLRequest *_nsOriginalRequest;
    NSURLSession *_session_ivar;
    NSURLSessionConfiguration *_effectiveConfiguration;
    NSUUID *_uniqueIdentifier;
    BOOL _is_cellular;
    Class _my_protocolForTask;
    BOOL __shouldSkipPreferredClientCertificateLookup;
    *__CFDictionary _atsStateCache;
    BOOL _preventsAppSSO;
    BOOL _appSSOFallback;
    BOOL _appleIDContextRedirect;
}


@property (retain, nonatomic) __CFN_TaskMetrics *_metrics; // ivar: _metrics


-(?)_DuetActivityProperties;
-(?)_TCPConnectionMetadata;
-(BOOL)_allowsQUIC;
-(BOOL)_appSSOFallback;
-(BOOL)_appleIDContextRedirect;
-(BOOL)_cacheOnly;
-(BOOL)_connectionIsCompanionLink;
-(BOOL)_isTopLevelNavigation;
-(BOOL)_preconnect;
-(BOOL)_preventsAppSSO;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(BOOL)hasExtractor;
-(BOOL)prefersIncrementalDelivery;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(CGFloat)_timeoutInterval;
-(CGFloat)startTime;
-(NSInteger)_bytesPerSecondLimit;
-(NSInteger)_discretionaryOverrride;
-(NSInteger)_requestPriority;
-(NSInteger)_suspensionThreshhold;
-(NSUInteger)_allowedProtocolTypes;
-(NSUInteger)_cachePolicy;
-(NSUInteger)_expectedProgressTarget;
-(float)priority;
-(id)_APSRelayTopic;
-(id)_allowsCellular;
-(id)_allowsCellularOverride;
-(id)_allowsConstrainedOverride;
-(id)_allowsExpensiveOverride;
-(id)_assumesHTTP3Capable;
-(id)_attribution;
-(id)_backgroundTransactionMetrics;
-(id)_backtrace;
-(id)_boundInterfaceIdentifier;
-(id)_cfCache;
-(id)_cfCookies;
-(id)_cfCreds;
-(id)_cfHSTS;
-(id)_connectionPropertyDuet;
-(id)_contentDispositionFallbackArray;
-(id)_cookieTransformCallback;
-(id)_countOfBytesReceivedEncoded;
-(id)_countOfPendingBytesReceivedEncoded;
-(id)_description;
-(id)_disallowCellular;
-(id)_effectiveConfiguration;
-(id)_expectedWorkload;
-(id)_hostOverride;
-(id)_httpConnectionInfoCompletionBlock;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(id)_incompleteTaskMetrics;
-(id)_isKnownTracker;
-(id)_loggableDescription;
-(id)_networkServiceType;
-(id)_priorityValue;
-(id)_privacyProxyFailClosed;
-(id)_private_nw_activity;
-(id)_prohibitAuthUI;
-(id)_protocolForTask;
-(id)_resolvedCNAMEChain;
-(id)_shouldHandleCookies;
-(id)_siteForCookies;
-(id)_storagePartitionIdentifier;
-(id)_timeWindowDelay;
-(id)_timeWindowDuration;
-(id)_trackerContext;
-(id)_trailers;
-(id)_uniqueIdentifier;
-(id)countOfBytesExpectedToReceive;
-(id)countOfBytesExpectedToSend;
-(id)countOfBytesReceived;
-(id)countOfBytesSent;
-(id)currentRequest;
-(id)error;
-(id)initWithRequest:(struct _CFURLRequest *)arg0 mutableCurrent:(struct _CFURLRequest *)arg1 connProps:(struct __CFDictionary *)arg2 sockProps:(struct __CFDictionary *)arg3 session:(id)arg4 ;
-(id)originalRequest;
-(id)session;
-(id)state;
-(id)taskIdentifier;
-(id)workQueue;
-(int)_cookieAcceptPolicy;
-(struct XCookieStorage *)_createXCookieStorage;
-(struct XCredentialStorage *)_createXCredentialStorage;
-(struct _CFHSTSPolicy *)_copyHSTSPolicy;
-(struct __CFDictionary *)_copyATSState;
-(struct __CFDictionary *)_copySocketStreamProperties;
-(struct __CFDictionary *)_dependencyInfo;
-(struct __CFDictionary *)_proxySettings;
-(struct __CFDictionary *)_sslSettings;
-(struct __CFSet *)_getAuthenticatorStatusCodes;
-(struct __CFURL *)currentRequest_URL;
-(struct __CFURL *)currentRequest_mainDocumentURL;
-(unsigned char)_preventsIdleSystemSleep;
-(unsigned char)_proxyHandshakePending;
-(unsigned char)_shouldPipelineHTTP;
-(unsigned char)_shouldSkipPipelineProbe;
-(unsigned char)_shouldUsePipelineHeuristics;
-(unsigned char)_strictContentLength;
-(unsigned short)_TLSMaximumSupportedProtocolVersion;
-(unsigned short)_TLSMinimumSupportedProtocolVersion;
-(unsigned short)_TLSNegotiatedCipherSuite;
-(void)_adoptEffectiveConfiguration:(id)arg0 ;
-(void)_appendCountOfPendingBytesReceivedEncoded:(NSInteger)arg0 ;
-(void)_consumePendingBytesReceivedEncoded;
-(void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg0 completionHandler:(id)arg1 ;
-(void)_processConnectionProperties;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(void)_setAppleIDContext:(id)arg0 ;
-(void)_setConnectionCacheKey:(*void)arg0 ;
-(void)_setConnectionIsCellular:(BOOL)arg0 ;
-(void)_setSocketProperties:(struct __CFDictionary *)arg0 connectionProperties:(struct __CFDictionary *)arg1 ;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_withXURLCache:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveInformationalResponse:(id)arg0 ;
-(void)set_TCPConnectionMetadata:(id)arg0 ;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg0 ;
-(void)set_allowsQUIC:(BOOL)arg0 ;
-(void)set_appSSOFallback:(BOOL)arg0 ;
-(void)set_connectionIsCompanionLink:(BOOL)arg0 ;
-(void)set_discretionaryOverride:(NSInteger)arg0 ;
-(void)set_expectedProgressTarget:(NSUInteger)arg0 ;
-(void)set_preconnect:(BOOL)arg0 ;
-(void)set_preventsAppSSO:(BOOL)arg0 ;
-(void)set_protocolForTask:(id)arg0 ;
-(void)set_proxyHandshakePending:(BOOL)arg0 ;
-(void)set_resolvedCNAMEChain:(id)arg0 ;
-(void)set_trailers:(id)arg0 ;
-(void)updateCurrentRequest:(id)arg0 ;


@end


#endif