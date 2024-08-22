// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYAGENTMANAGER_H
#define NSPPRIVACYPROXYAGENTMANAGER_H

@class NSMutableDictionary, NSString, NSMutableArray, NSArray, NSDate, NSDictionary, NSData, NWPath, NWInterface;
@protocol NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying, NSPPrivacyProxyAgentManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPCandidateFallbackProxyPath.h"
#import "NSPCandidateQuicProxyPath.h"
#import "NSPProber.h"
#import "NSPFallbackProxyPath.h"
#import "NSPOutageReasonStats.h"
#import "NSPQuicProxyPath.h"
#import "NSPToggleStats.h"

@interface NSPPrivacyProxyAgentManager : NSObject <NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger agentLowWaterMarkHitCount; // ivar: _agentLowWaterMarkHitCount
@property (nonatomic) NSUInteger badTokenCount; // ivar: _badTokenCount
@property (nonatomic) NSUInteger cacheLowWaterMarkHitCount; // ivar: _cacheLowWaterMarkHitCount
@property (retain, nonatomic) NSPCandidateFallbackProxyPath *candidateFallbackProxyPath; // ivar: _candidateFallbackProxyPath
@property (retain, nonatomic) NSMutableDictionary *candidatePreferredQUICProxyPaths; // ivar: _candidatePreferredQUICProxyPaths
@property (retain, nonatomic) NSPCandidateQuicProxyPath *candidateQuicProxyPath; // ivar: _candidateQuicProxyPath
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPPrivacyProxyAgentManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSPProber *directPathProber; // ivar: _directPathProber
@property (nonatomic) BOOL dnsFilteringHintEnabled; // ivar: dnsFilteringHintEnabled
@property (retain, nonatomic) NSPFallbackProxyPath *fallbackProxyPath; // ivar: _fallbackProxyPath
@property (retain, nonatomic) NSMutableArray *fallbackProxyPathCustomEnumerator; // ivar: _fallbackProxyPathCustomEnumerator
@property (retain, nonatomic) NSArray *fallbackProxyPathList; // ivar: _fallbackProxyPathList
@property (nonatomic) BOOL forceFallback; // ivar: _forceFallback
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property (retain, nonatomic) NSString *geohashOverride; // ivar: geohashOverride
@property (nonatomic) BOOL geohashSharingEnabled; // ivar: _geohashSharingEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastFallbackProxySwitchedDate; // ivar: _lastFallbackProxySwitchedDate
@property (retain, nonatomic) NSDate *lastPathUnsatisfiedDate; // ivar: _lastPathUnsatisfiedDate
@property (retain, nonatomic) NSDate *lastPrimaryInterfaceChangedDate; // ivar: _lastPrimaryInterfaceChangedDate
@property (retain, nonatomic) NSPOutageReasonStats *lastProxyOutageReasonStats; // ivar: _lastProxyOutageReasonStats
@property (retain, nonatomic) NSDate *lastQuicProxySwitchedDate; // ivar: _lastQuicProxySwitchedDate
@property (retain, nonatomic) NSPOutageReasonStats *lastTokenOutageReasonStats; // ivar: _lastTokenOutageReasonStats
@property (nonatomic) int linkQuality; // ivar: _linkQuality
@property (nonatomic) NSUInteger missingTokenCount; // ivar: _missingTokenCount
@property (retain, nonatomic) NSDictionary *networkCharacteristics; // ivar: _networkCharacteristics
@property (nonatomic) NSUInteger networkFallbackProxiesRotated; // ivar: _networkFallbackProxiesRotated
@property (nonatomic) NSUInteger networkProxiesRotated; // ivar: _networkProxiesRotated
@property (retain, nonatomic) NSString *overrideFallbackIngressProxy; // ivar: _overrideFallbackIngressProxy
@property (retain, nonatomic) NSString *overrideIngressProxy; // ivar: _overrideIngressProxy
@property (retain, nonatomic) NSData *overrideIngressProxyKey; // ivar: _overrideIngressProxyKey
@property (retain, nonatomic) NSString *overridePreferredProxy; // ivar: _overridePreferredProxy
@property (retain, nonatomic) NWPath *path; // ivar: _path
@property (retain, nonatomic) NSMutableDictionary *preferredQUICProxyPaths; // ivar: _preferredQUICProxyPaths
@property (retain, nonatomic) NSDate *probeEndTime; // ivar: _probeEndTime
@property (retain, nonatomic) NSDate *probeStartTime; // ivar: _probeStartTime
@property (retain, nonatomic) NWInterface *proberInterface; // ivar: _proberInterface
@property (nonatomic) NSInteger probingReason; // ivar: _probingReason
@property (nonatomic) NSUInteger proxiesRotated; // ivar: _proxiesRotated
@property (retain, nonatomic) NSArray *proxyArray; // ivar: _proxyArray
@property (nonatomic) BOOL proxyConnectivityCheckActive; // ivar: _proxyConnectivityCheckActive
@property (retain, nonatomic) NSMutableArray *proxyPathCustomEnumerator; // ivar: _proxyPathCustomEnumerator
@property (retain, nonatomic) NSObject<OS_dispatch_source> *proxyPathEnumeratorRestoreTimer; // ivar: _proxyPathEnumeratorRestoreTimer
@property (retain, nonatomic) NSArray *proxyPathList; // ivar: _proxyPathList
@property (retain, nonatomic) NSPProber *proxyPathProber; // ivar: _proxyPathProber
@property (nonatomic) NSUInteger proxyPathRestoreIntervalSec; // ivar: _proxyPathRestoreIntervalSec
@property (retain, nonatomic) NSMutableArray *proxyTokenInfoArray; // ivar: _proxyTokenInfoArray
@property (retain, nonatomic) NSPQuicProxyPath *quicProxyPath; // ivar: _quicProxyPath
@property (nonatomic) BOOL reportedTokenOutage; // ivar: _reportedTokenOutage
@property (retain, nonatomic) NSMutableArray *savedConfiguredPreferredPaths; // ivar: _savedConfiguredPreferredPaths
@property (retain, nonatomic) NSMutableDictionary *savedConfiguredProxies; // ivar: _savedConfiguredProxies
@property (nonatomic) BOOL subscriber; // ivar: _subscriber
@property (readonly) Class superclass;
@property (retain, nonatomic) NSPToggleStats *toggleStats; // ivar: _toggleStats
@property (nonatomic) NSUInteger tokenConsumedCount; // ivar: _tokenConsumedCount
@property (nonatomic) NSUInteger tokenExpiredCount; // ivar: _tokenExpiredCount
@property (nonatomic) NSUInteger tokenFetchFailedCount; // ivar: _tokenFetchFailedCount
@property (nonatomic) NSUInteger tokenFetchSuccessCount; // ivar: _tokenFetchSuccessCount
@property (retain, nonatomic) NSDate *tokenIssuanceRestrictedUntilDate; // ivar: _tokenIssuanceRestrictedUntilDate
@property (retain, nonatomic) NSObject<OS_dispatch_source> *tokenIssuanceRestrictedUntilTimer; // ivar: _tokenIssuanceRestrictedUntilTimer
@property (nonatomic) BOOL useDefaultInterface; // ivar: _useDefaultInterface


+(BOOL)proxiesMatch:(id)arg0 proxyPathList:(id)arg1 ingressProxy:(id)arg2 egressProxy:(id)arg3 pathWeight:(NSUInteger)arg4 supportsFallback:(BOOL)arg5 ;
+(BOOL)proxyMatch:(id)arg0 proxy2:(id)arg1 ;
+(BOOL)proxyMatchProxyInfoArray:(id)arg0 proxy:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)copyProxyPathRestoreIntervalFromPreferences;
+(id)copyFromPreferences;
+(id)copyUserEventAgentData;
+(id)ingressTokenAgentUUID;
+(id)multiHopFallbackProxyAgentUUID;
+(id)multiHopProxyAgentUUID;
+(id)singleHopFallbackProxyAgentUUID;
+(id)singleHopProxyAgentUUID;
+(void)removeFromPreferences;
+(void)removeProxyInfoFromKeychain;
+(void)removeUserEventAgentData;
-(BOOL)alternateEgressProxyExists:(id)arg0 proxyPathEnumerator:(id)arg1 ;
-(BOOL)checkTokenFetchOutage;
-(BOOL)getForceFallbackFromPreferences;
-(BOOL)isMultiHopFallbackProxyAgentRegistered;
-(BOOL)isMultiHopProxyAgentRegistered;
-(BOOL)isProbingActive;
-(BOOL)isSingleHopFallbackProxyAgentRegistered;
-(BOOL)isSingleHopProxyAgentRegistered;
-(BOOL)saveToPreferences;
-(NSInteger)failureReasonCodeFromErrorCode:(int)arg0 ;
-(NSInteger)outageReasonCodeFromOutageReasonType:(id)arg0 ;
-(id)copyOverrideFallbackIngressProxyFromPreferences;
-(id)copyOverrideIngressProxyFromPreferences;
-(id)copyOverrideIngressProxyKeyFromPreferences;
-(id)copyPreferredProxyFromPreferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createRTCReportPayloadWithCategory:(NSInteger)arg0 errorCode:(int)arg1 url:(id)arg2 ;
-(id)createRTCReportPayloadWithOutageStats:(id)arg0 ;
-(id)createRTCReportPayloadWithToggleState:(BOOL)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)errorDescriptionForRawErrorCode:(int)arg0 ;
-(id)failureReasonDescriptionFromReasonCode:(NSInteger)arg0 ;
-(id)fallbackProxyPathWithIngressProxyURL:(id)arg0 egressProxyURL:(id)arg1 ;
-(id)getProxyTokenInfoForProxyInfo:(id)arg0 ;
-(id)hostAndPortFromURL:(id)arg0 ;
-(id)ingressFallbackProxyURL;
-(id)ingressProxyURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 toggleStats:(id)arg1 ;
-(id)lastProxyOutageReason;
-(id)lastTokenOutageReason;
-(id)multiHopFallbackProxyConfigHash:(id)arg0 ;
-(id)multiHopQUICProxyConfigHash:(id)arg0 ;
-(id)nextFallbackProxyPathWithOverride;
-(id)nextProxyPath:(id)arg0 ;
-(id)nextProxyPathWithOverride;
-(id)outageReasonDescriptionFromOutageReasonSubType:(id)arg0 ;
-(id)proxyPathWithIngressProxyURL:(id)arg0 egressProxyURL:(id)arg1 ;
-(id)servicenameFromFailureType:(NSInteger)arg0 ;
-(id)singleHopFallbackProxyConfigHash:(id)arg0 ;
-(id)singleHopQUICProxyConfigHash:(id)arg0 ;
-(id)tierString;
-(void)checkProxyConnectivityOnInterface:(id)arg0 proxyConnectivityCheckType:(NSUInteger)arg1 ;
-(void)cleanupProbingInfo;
-(void)connectionCertErrorProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)connectionErrorsProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)connectionRefusedProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)connectionTimeoutProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)copyProxyInfo:(id)arg0 ;
-(void)dealloc;
-(void)dnsBlockedProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)dnsTimeoutProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)egressProxyErrorProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)egressProxyUnavailableProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fillInDomainFiltersFromPreferences;
-(void)forceFallback:(BOOL)arg0 ;
-(void)handleConfigChange;
-(void)handleLinkQualityChange:(int)arg0 ;
-(void)handlePathChange:(id)arg0 ;
-(void)handleTierChange:(BOOL)arg0 ;
-(void)mergeTokenStats:(id)arg0 ;
-(void)multiHopAgentRegistered:(id)arg0 ;
-(void)multiHopAgentUnregistered:(id)arg0 ;
-(void)originProxyErrorProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)overrideIngressProxy:(id)arg0 fallbackProxy:(id)arg1 key:(id)arg2 ;
-(void)overridePreferredProxy:(id)arg0 ;
-(void)probeFailed:(id)arg0 ;
-(void)probeRedirected:(id)arg0 ;
-(void)probeServerError:(id)arg0 ;
-(void)probeSuccess:(id)arg0 ;
-(void)pruneProxyTokenInfoArray;
-(void)removeExpiredTokens;
-(void)removeProxyURLFromFallbackProxyEnumerator:(id)arg0 ;
-(void)removeProxyURLFromProxyEnumerator:(id)arg0 ;
-(void)reportProxyError:(int)arg0 interface:(id)arg1 proxyPath:(id)arg2 ;
-(void)reportProxySuccessOnInterface:(id)arg0 proxyPath:(id)arg1 ;
-(void)reportTokenFetchFailure:(id)arg0 statusCode:(NSInteger)arg1 ;
-(void)requestAccessToken:(id)arg0 ;
-(void)resetProxyErrors;
-(void)sendProbeStats;
-(void)sendRTCReportForPrivacyProxyToggleState:(BOOL)arg0 ;
-(void)sendRTCReportForServiceOutage:(id)arg0 ;
-(void)sendRTCReportWithFailureType:(NSInteger)arg0 errorCode:(int)arg1 url:(id)arg2 ;
-(void)sendSwitchProxyStatsForProxy:(id)arg0 fallback:(BOOL)arg1 ;
-(void)setProxyOutageReason:(id)arg0 ;
-(void)setTokenIssuanceLimitInterval:(NSUInteger)arg0 ;
-(void)setUserEventAgentProberParameters;
-(void)setUserEventAgentTokenFetchParameters;
-(void)setupCandidateFallbackProxyPath;
-(void)setupCandidatePreferredQUICProxyPaths;
-(void)setupCandidateQuicProxyPath;
-(void)setupFallbackProxyPath;
-(void)setupPreferredQUICProxyPathForVendor:(id)arg0 ;
-(void)setupQuicProxyPath;
-(void)setupWithPath:(id)arg0 subscriber:(BOOL)arg1 geohashSharingEnabled:(BOOL)arg2 geohashOverride:(id)arg3 linkQuality:(int)arg4 ;
-(void)singleHopAgentRegistered:(id)arg0 ;
-(void)singleHopAgentUnregistered:(id)arg0 ;
-(void)startProbingForReason:(NSInteger)arg0 ;
-(void)switchProxy:(id)arg0 ;
-(void)tokenAdded:(id)arg0 ;
-(void)tokenFetchOutage:(id)arg0 ;
-(void)tokenInfoInvalid:(id)arg0 ;
-(void)tokenLowWaterMarkReached:(id)arg0 ;
-(void)tokenRateLimited:(id)arg0 untilDate:(CGFloat)arg1 ;
-(void)updateDNSFilteringHint:(BOOL)arg0 ;
-(void)updateGeohashSharingPreference:(BOOL)arg0 geohashOverride:(id)arg1 ;
-(void)updateProxyInfo:(id)arg0 proxyPathList:(id)arg1 fallbackProxyPathList:(id)arg2 ;
-(void)updateProxyTokenInfoArray:(id)arg0 ;
-(void)updateUserEventAgentData;
-(void)useDefaultNetworkInterface:(BOOL)arg0 ;


@end


#endif