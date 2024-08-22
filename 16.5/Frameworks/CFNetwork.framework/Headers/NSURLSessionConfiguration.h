// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLSESSIONCONFIGURATION_H
#define NSURLSESSIONCONFIGURATION_H

@class NSDictionary, NSString, NSData, NSSet, NSURL, NSNumber, NSArray;
@protocol NSMutableCopying, NSSecureCoding, NSCopying, NSURLSessionAppleIDContext, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NSHTTPCookieStorage.h"
#import "NSURLCache.h"
#import "NSURLCredentialStorage.h"
#import "_NSHTTPAlternativeServicesStorage.h"
#import "_NSHSTSStorage.h"

@interface NSURLSessionConfiguration : NSObject <NSMutableCopying, NSSecureCoding, NSCopying>

 {
    HTTPConnectionCacheLimits _limits;
}


@property (copy) NSDictionary *HTTPAdditionalHeaders; // ivar: _HTTPAdditionalHeaders
@property NSUInteger HTTPCookieAcceptPolicy; // ivar: _HTTPCookieAcceptPolicy
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property NSInteger HTTPMaximumConnectionsPerHost;
@property BOOL HTTPShouldSetCookies; // ivar: _HTTPShouldSetCookies
@property BOOL HTTPShouldUsePipelining; // ivar: _HTTPShouldUsePipelining
@property int TLSMaximumSupportedProtocol; // ivar: _TLSMaximumSupportedProtocol
@property unsigned short TLSMaximumSupportedProtocolVersion;
@property int TLSMinimumSupportedProtocol; // ivar: _TLSMinimumSupportedProtocol
@property unsigned short TLSMinimumSupportedProtocolVersion;
@property (retain) NSURLCache *URLCache;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (copy) NSString *_CTDataConnectionServiceType; // ivar: _CTDataConnectionServiceType
@property NSInteger _IDSMessageTimeout; // ivar: _IDSMessageTimeout
@property NSUInteger _TCPAdaptiveReadTimeout; // ivar: _TCPAdaptiveReadTimeout
@property NSUInteger _TCPAdaptiveWriteTimeout; // ivar: _TCPAdaptiveWriteTimeout
@property BOOL _allowTCPIOConnectionStreamTask; // ivar: _allowTCPIOConnectionStreamTask
@property BOOL _allowsConstrainedNetworkAccess;
@property BOOL _allowsExpensiveAccess;
@property BOOL _allowsHSTSWithUntrustedRootCertificate; // ivar: _allowsHSTSWithUntrustedRootCertificate
@property BOOL _allowsHTTP3;
@property int _allowsHTTP3Internal; // ivar: _allowsHTTP3Internal
@property BOOL _allowsIndefiniteConnections; // ivar: _allowsIndefiniteConnections
@property BOOL _allowsMultipathTCP; // ivar: _allowsMultipathTCP
@property BOOL _allowsPowerNapScheduling; // ivar: _allowsPowerNapScheduling
@property BOOL _allowsReachabilityCheck; // ivar: _allowsReachabilityCheck
@property BOOL _allowsResponseMonitoringDuringBodyTranmission; // ivar: _allowsResponseMonitoringDuringBodyTranmission
@property BOOL _allowsRetryForBackgroundDataTasks; // ivar: _allowsRetryForBackgroundDataTasks
@property BOOL _allowsSensitiveLogging;
@property BOOL _allowsTCPFastOpen; // ivar: _allowsTCPFastOpen
@property BOOL _allowsTLSECH; // ivar: _allowsTLSECH
@property BOOL _allowsTLSFallback; // ivar: _allowsTLSFallback
@property BOOL _allowsTLSFalseStart; // ivar: _allowsTLSFalseStart
@property BOOL _allowsTLSSessionResumption; // ivar: _allowsTLSSessionResumption
@property BOOL _allowsTLSSessionTickets; // ivar: _allowsTLSSessionTickets
@property BOOL _allowsVirtualInterfaces; // ivar: _allowsVirtualInterfaces
@property BOOL _allowsWCA; // ivar: __allowsWCA
@property (retain) _NSHTTPAlternativeServicesStorage *_alternativeServicesStorage;
@property BOOL _alwaysPerformDefaultTrustEvaluation; // ivar: _alwaysPerformDefaultTrustEvaluation
@property (copy) NSObject<NSURLSessionAppleIDContext> *_appleIDContext; // ivar: _appleIDContext
@property (copy) NSData *_atsContext; // ivar: _atsContext
@property (copy) NSString *_attributedBundleIdentifier; // ivar: _attributedBundleIdentifier
@property (copy) NSSet *_authenticatorStatusCodes; // ivar: _authenticatorStatusCodes
@property BOOL _clientIsNotExplicitlyDiscretionary; // ivar: _clientIsNotExplicitlyDiscretionary
@property (copy) NSString *_companionAppBundleIdentifier; // ivar: _companionAppBundleIdentifier
@property NSInteger _companionProxyPreference; // ivar: __companionProxyPreference
@property CGFloat _connectionCacheCellPurgeTimeout;
@property NSInteger _connectionCacheMinimumFastLanePriority;
@property NSInteger _connectionCacheNumFastLanes;
@property NSInteger _connectionCacheNumPriorityLevels;
@property CGFloat _connectionCachePurgeTimeout;
@property (copy) NSString *_connectionPoolName; // ivar: _connectionPoolName
@property NSUInteger _customReadBufferSize; // ivar: _customReadBufferSize
@property CGFloat _customReadBufferTimeout; // ivar: _customReadBufferTimeout
@property (copy) NSURL *_directoryForDownloadedFiles; // ivar: _directoryForDownloadedFiles
@property BOOL _disablesOutOfProcessDirectWiFiUsage; // ivar: _disablesOutOfProcessDirectWiFiUsage
@property BOOL _disablesUseOfProxySession; // ivar: _disablesUseOfProxySession
@property (copy) NSString *_downloadFileProtectionType; // ivar: _downloadFileProtectionType
@property NSInteger _duetPreClearedMode; // ivar: _duetPreClearedMode
@property BOOL _duetPreauthorized; // ivar: _duetPreauthorized
@property BOOL _enablesL4S; // ivar: _enablesL4S
@property NSInteger _expiredDNSBehavior; // ivar: _expiredDNSBehavior
@property NSUInteger _forcedNetworkServiceType; // ivar: _forcedNetworkServiceType
@property BOOL _forcesNewConnections; // ivar: _forcesNewConnections
@property (retain) _NSHSTSStorage *_hstsStorage;
@property BOOL _ignoreDidReceiveResponseDisposition; // ivar: _ignoreDidReceiveResponseDisposition
@property BOOL _inPrivateBrowsing; // ivar: _inPrivateBrowsing
@property BOOL _infersDiscretionaryFromOriginatingClient; // ivar: _infersDiscretionaryFromOriginatingClient
@property int _loggingPrivacyLevel; // ivar: _loggingPrivacyLevel
@property CGFloat _longLivedConnectionCacheCellPurgeTimeout;
@property CGFloat _longLivedConnectionCachePurgeTimeout;
@property (copy) NSNumber *_maximumWatchCellularTransferSize; // ivar: _maximumWatchCellularTransferSize
@property NSUInteger _multipathAlternatePort; // ivar: _multipathAlternatePort
@property BOOL _onBehalfOfPairedDevice; // ivar: _onBehalfOfPairedDevice
@property (copy) NSDictionary *_overriddenDelegateOptions; // ivar: _overriddenDelegateOptions
@property BOOL _overridesBackgroundSessionAutoRedirect; // ivar: _overridesBackgroundSessionAutoRedirect
@property BOOL _performsEVCertCheck; // ivar: _performsEVCertCheck
@property (retain) _NSHTTPAlternativeServicesStorage *_phskip_alternativeServicesStorage; // ivar: _phskip_alternativeServicesStorage
@property BOOL _phskip_alternativeServicesStorageSet; // ivar: _phskip_alternativeServicesStorageSet
@property (retain) NSHTTPCookieStorage *_phskip_cookieStorage; // ivar: _phskip_cookieStorage
@property BOOL _phskip_cookieStorageSet; // ivar: _phskip_cookieStorageSet
@property (retain) NSURLCredentialStorage *_phskip_credStorage; // ivar: _phskip_credStorage
@property BOOL _phskip_credStorageSet; // ivar: _phskip_credStorageSet
@property (retain) _NSHSTSStorage *_phskip_hstsStorage; // ivar: _phskip_hstsStorage
@property BOOL _phskip_hstsStorageSet; // ivar: _phskip_hstsStorageSet
@property (retain) NSURLCache *_phskip_urlCache; // ivar: _phskip_urlCache
@property BOOL _phskip_urlCacheSet; // ivar: _phskip_urlCacheSet
@property int _pidForHAR; // ivar: _pidForHAR
@property BOOL _prefersInfraWiFi; // ivar: _prefersInfraWiFi
@property BOOL _preventsAppSSO; // ivar: _preventsAppSSO
@property BOOL _preventsDirectWiFiAccess; // ivar: _preventsDirectWiFiAccess
@property BOOL _preventsIdleSleep; // ivar: _preventsIdleSleep
@property BOOL _preventsIdleSleepOnceConnected; // ivar: _preventsIdleSleepOnceConnected
@property BOOL _preventsSystemHTTPProxyAuthentication; // ivar: _preventsSystemHTTPProxyAuthentication
@property BOOL _prohibitEncryptedDNS; // ivar: _prohibitEncryptedDNS
@property (getter=_isProxySession) BOOL _proxySession; // ivar: _proxySession
@property BOOL _reportsDataStalls; // ivar: _reportsDataStalls
@property BOOL _requiresClientToOpenFiles; // ivar: _requiresClientToOpenFiles
@property BOOL _requiresPowerPluggedIn; // ivar: _requiresPowerPluggedIn
@property BOOL _requiresSecureHTTPSProxyConnection; // ivar: _requiresSecureHTTPSProxyConnection
@property BOOL _requiresSustainedDataDelivery; // ivar: _requiresSustainedDataDelivery
@property BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; // ivar: _respectsAllowsCellularAccessForDiscretionaryTasks
@property BOOL _sessionSendsLaunchOnDemandEvents; // ivar: _sessionSendsLaunchOnDemandEvents
@property BOOL _shouldPreserveBackgroundSessionDisposition; // ivar: _shouldPreserveBackgroundSessionDisposition
@property BOOL _shouldSkipPreferredClientCertificateLookup; // ivar: _shouldSkipPreferredClientCertificateLookup
@property (copy) NSDictionary *_socketStreamProperties;
@property (copy) NSDictionary *_socketStreamProperties; // ivar: _socketStreamProperties
@property (copy) NSData *_sourceApplicationAuditTokenData; // ivar: _sourceApplicationAuditTokenData
@property (copy) NSString *_sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (copy) NSString *_sourceApplicationSecondaryIdentifier; // ivar: _sourceApplicationSecondaryIdentifier
@property BOOL _supportsAVAssetDownloads; // ivar: _supportsAVAssetDownloads
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders; // ivar: _suppressedAutoAddedHTTPHeaders
@property (copy) NSString *_tcpConnectionPoolName; // ivar: _tcpConnectionPoolName
@property NSInteger _timingDataOptions; // ivar: _timingDataOptions
@property (copy) NSString *_tlsTrustPinningPolicyName; // ivar: _tlsTrustPinningPolicyName
@property BOOL _usePipeliningHeuristics; // ivar: _usePipeliningHeuristics
@property BOOL _usesNWLoader; // ivar: _usesNWLoader
@property (copy) NSString *_watchAppBundleIdentifier; // ivar: _watchAppBundleIdentifier
@property (copy) NSString *_watchExtensionBundleIdentifier; // ivar: _watchExtensionBundleIdentifier
@property (retain) NSObject<OS_xpc_object> *_xpcActivity; // ivar: _xpcActivity
@property int _xpcActivityBudgeted; // ivar: _xpcActivityBudgeted
@property BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property BOOL allowsConstrainedNetworkAccess; // ivar: _allowsConstrainedNetworkAccess
@property BOOL allowsExpensiveNetworkAccess; // ivar: _allowsExpensiveNetworkAccess
@property (getter=isBackgroundSession) BOOL backgroundSession; // ivar: _backgroundSession
@property (copy) NSDictionary *connectionProxyDictionary; // ivar: _connectionProxyDictionary
@property (getter=isDiscretionary) BOOL discretionary; // ivar: _discretionary
@property NSString *disposition; // ivar: _disposition
@property (copy) NSString *identifier; // ivar: _identifier
@property NSInteger multipathServiceType; // ivar: _multipathServiceType
@property NSUInteger networkServiceType; // ivar: _networkServiceType
@property (copy) NSArray *protocolClasses; // ivar: _protocolClasses
@property NSUInteger requestCachePolicy; // ivar: _requestCachePolicy
@property BOOL requiresDNSSECValidation; // ivar: _requiresDNSSECValidation
@property BOOL sessionSendsLaunchEvents; // ivar: _sessionSendsLaunchEvents
@property (copy) NSString *sharedContainerIdentifier; // ivar: _sharedContainerIdentifier
@property BOOL shouldUseExtendedBackgroundIdleMode; // ivar: _shouldUseExtendedBackgroundIdleMode
@property BOOL skip_download_unlink; // ivar: _skip_download_unlink
@property CGFloat timeoutIntervalForRequest; // ivar: _timeoutIntervalForRequest
@property CGFloat timeoutIntervalForResource; // ivar: _timeoutIntervalForResource
@property BOOL waitsForConnectivity; // ivar: _waitsForConnectivity


+(BOOL)supportsSecureCoding;
+(id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg0 ;
+(id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg0 ;
+(id)_defaultProtocolClasses;
+(id)backgroundSessionConfiguration:(id)arg0 ;
+(id)backgroundSessionConfigurationWithIdentifier:(id)arg0 ;
+(id)defaultSessionConfiguration;
+(id)ephemeralSessionConfiguration;
+(id)immutableEffectiveConfigurationFromConfig:(id)arg0 ;
+(id)new;
+(id)sessionConfigurationForSharedSession;
+(void)initialize;
-(*void)_copyAttribute:(struct __CFString *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)_sessionConfiguration;
-(id)copyImmutableVariant:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct HTTPConnectionCacheLimits )getConnectionCacheLimits;
-(struct _CFHSTSPolicy *)copyHSTSPolicy;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif