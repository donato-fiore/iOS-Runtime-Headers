// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYPROXYAGENTMANAGER_H
#define NSPPRIVACYPROXYAGENTMANAGER_H

@class NSDate, NSString, NSData, NSArray, NSMutableArray, NSMutableDictionary, NWInterface, NWPath, NSDictionary, NSNumber;
@protocol NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying, NSPPrivacyProxyAgentManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPQuicProxyPath.h"
#import "NSPFallbackProxyPath.h"
#import "NSPCandidateQuicProxyPath.h"
#import "NSPCandidateFallbackProxyPath.h"
#import "NSPProber.h"
#import "NSPOutageReasonStats.h"
#import "NSPToggleStats.h"

@interface NSPPrivacyProxyAgentManager : NSObject <NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying>

 {
    BOOL _forceFallback;
    BOOL _useDefaultInterface;
    BOOL _subscriber;
    BOOL _geohashSharingEnabled;
    BOOL _proxyConnectivityCheckActive;
    BOOL _reportedTokenOutage;
    int _linkQuality;
    NSDate *_tokenIssuanceRestrictedUntilDate;
    NSString *_overridePreferredProxy;
    NSString *_overrideIngressProxy;
    NSString *_overrideFallbackIngressProxy;
    NSData *_overrideIngressProxyKey;
    id<NSPPrivacyProxyAgentManagerDelegate> *_delegate;
    NSArray *_proxyArray;
    NSArray *_proxyPathList;
    NSMutableArray *_proxyPathCustomEnumerator;
    NSArray *_fallbackProxyPathList;
    NSMutableArray *_fallbackProxyPathCustomEnumerator;
    NSArray *_obliviousConfigs;
    NSMutableDictionary *_savedConfiguredProxies;
    NSMutableArray *_savedConfiguredPreferredPaths;
    NSObject<OS_dispatch_source> *_proxyPathEnumeratorRestoreTimer;
    NSUInteger _proxyPathRestoreIntervalSec;
    NSPQuicProxyPath *_quicProxyPath;
    NSPFallbackProxyPath *_fallbackProxyPath;
    NSPCandidateQuicProxyPath *_candidateQuicProxyPath;
    NSPCandidateFallbackProxyPath *_candidateFallbackProxyPath;
    NSPProber *_proxyPathProber;
    NSPProber *_directPathProber;
    NWInterface *_proberInterface;
    NSDate *_probeStartTime;
    NSDate *_probeEndTime;
    NSDate *_lastQuicProxySwitchedDate;
    NSDate *_lastFallbackProxySwitchedDate;
    NSMutableDictionary *_preferredQUICProxyPaths;
    NSMutableDictionary *_candidatePreferredQUICProxyPaths;
    NSMutableArray *_proxyTokenInfoArray;
    NSObject<OS_dispatch_source> *_tokenIssuanceRestrictedUntilTimer;
    NWPath *_path;
    NSDate *_lastPathUnsatisfiedDate;
    NSDate *_lastPrimaryInterfaceChangedDate;
    NSDictionary *_networkCharacteristics;
    NSNumber *_configEpoch;
    NSNumber *_reportedEpoch;
    NSUInteger _tokenFetchSuccessCount;
    NSUInteger _tokenFetchFailedCount;
    NSUInteger _tokenConsumedCount;
    NSUInteger _tokenExpiredCount;
    NSUInteger _agentLowWaterMarkHitCount;
    NSUInteger _cacheLowWaterMarkHitCount;
    NSUInteger _badTokenCount;
    NSUInteger _missingTokenCount;
    NSUInteger _networkProxiesRotated;
    NSUInteger _networkFallbackProxiesRotated;
    NSUInteger _proxiesRotated;
    NSPOutageReasonStats *_lastProxyOutageReasonStats;
    NSPOutageReasonStats *_lastTokenOutageReasonStats;
    NSInteger _probingReason;
    NSPToggleStats *_toggleStats;
    NSString *_tokenServerMaskedAddress;
    NSUInteger _generation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dnsFilteringHintEnabled; // ivar: dnsFilteringHintEnabled
@property (readonly) BOOL forceFallback;
@property (retain, nonatomic) NSString *geohashOverride; // ivar: geohashOverride
@property (readonly) NSUInteger hash;
@property (readonly) NSString *overrideFallbackIngressProxy;
@property (readonly) NSString *overrideIngressProxy;
@property (readonly) NSData *overrideIngressProxyKey;
@property (readonly) NSString *overridePreferredProxy;
@property (readonly) Class superclass;
@property (readonly) NSDate *tokenIssuanceRestrictedUntilDate;


+(BOOL)proxiesMatch:(id)arg0 proxyPathList:(id)arg1 ingressProxy:(id)arg2 egressProxy:(id)arg3 pathWeight:(NSUInteger)arg4 supportsFallback:(BOOL)arg5 ;
+(BOOL)supportsSecureCoding;
+(id)ingressTokenAgentUUID;
+(id)multiHopFallbackProxyAgentUUID;
+(id)multiHopProxyAgentUUID;
+(id)singleHopFallbackProxyAgentUUID;
+(id)singleHopProxyAgentUUID;
+(void)removeProxyInfoFromKeychain;
-(BOOL)checkTokenFetchOutage;
-(BOOL)isMultiHopFallbackProxyAgentRegistered;
-(BOOL)isMultiHopProxyAgentRegistered;
-(BOOL)isSingleHopFallbackProxyAgentRegistered;
-(BOOL)isSingleHopProxyAgentRegistered;
-(BOOL)proxyInfo:(id)arg0 matchesProxyIndex:(NSUInteger)arg1 ;
-(id)copyDomainFiltersDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)ingressFallbackProxyURL;
-(id)ingressProxyURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 toggleStats:(id)arg1 ;
-(id)lastProxyOutageReason;
-(id)lastTokenOutageReason;
-(id)multiHopFallbackProxyConfigHash:(id)arg0 ;
-(id)multiHopQUICProxyConfigHash:(id)arg0 ;
-(id)obliviousHopFallbackProxyAgentUUIDForHostname:(id)arg0 ;
-(id)obliviousHopFallbackProxyConfigHashForHostname:(id)arg0 ;
-(id)singleHopFallbackProxyConfigHash:(id)arg0 ;
-(id)singleHopQUICProxyConfigHash:(id)arg0 ;
-(void)copyProxyInfo:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceFallback:(BOOL)arg0 ;
-(void)handleConfigChange;
-(void)handleLinkQualityChange:(int)arg0 ;
-(void)handlePathChange:(id)arg0 ;
-(void)handleTierChange:(BOOL)arg0 ;
-(void)mergeTokenStats:(id)arg0 ;
-(void)multiHopAgentRegistered:(id)arg0 ;
-(void)multiHopAgentUnregistered:(id)arg0 ;
-(void)obliviousHopAgentRegistered:(id)arg0 hostname:(id)arg1 agentUUID:(id)arg2 ;
-(void)obliviousHopAgentUnregistered:(id)arg0 hostname:(id)arg1 ;
-(void)overrideIngressProxy:(id)arg0 fallbackProxy:(id)arg1 key:(id)arg2 ;
-(void)overridePreferredProxy:(id)arg0 ;
-(void)probeFailed:(id)arg0 ;
-(void)probeRedirected:(id)arg0 ;
-(void)probeServerError:(id)arg0 httpStatusCode:(NSInteger)arg1 ;
-(void)probeSuccess:(id)arg0 ;
-(void)removeExpiredTokens;
-(void)reportEpoch:(unsigned short)arg0 ;
-(void)reportProxyError:(int)arg0 interface:(id)arg1 proxyPath:(id)arg2 ;
-(void)reportProxySuccessOnInterface:(id)arg0 proxyPath:(id)arg1 ;
-(void)reportTokenFetchFailure:(id)arg0 statusCode:(NSInteger)arg1 ;
-(void)requestAccessTokenWithCompletionHandler:(id)arg0 ;
-(void)resetProxyErrors;
-(void)sendRTCReportForPrivacyProxyToggleState:(BOOL)arg0 ;
-(void)sendRTCReportForServiceOutage:(id)arg0 ;
-(void)sendRTCReportWithFailureType:(NSInteger)arg0 errorCode:(int)arg1 url:(id)arg2 ;
-(void)setUserEventAgentProberParameters;
-(void)setUserEventAgentTokenFetchParameters;
-(void)setupWithPath:(id)arg0 subscriber:(BOOL)arg1 geohashSharingEnabled:(BOOL)arg2 geohashOverride:(id)arg3 configEpoch:(id)arg4 linkQuality:(int)arg5 ;
-(void)singleHopAgentRegistered:(id)arg0 ;
-(void)singleHopAgentUnregistered:(id)arg0 ;
-(void)switchProxy:(id)arg0 ;
-(void)tokenAdded;
-(void)tokenFetchOutage:(id)arg0 ;
-(void)tokenFetched;
-(void)tokenInfoInvalid:(id)arg0 ;
-(void)tokenLowWaterMarkReached:(id)arg0 ;
-(void)tokenRateLimited:(id)arg0 untilDate:(CGFloat)arg1 ;
-(void)updateConfigEpoch:(id)arg0 ;
-(void)updateDNSFilteringHint:(BOOL)arg0 ;
-(void)updateGeohashSharingPreference:(BOOL)arg0 geohashOverride:(id)arg1 ;
-(void)updateProxyInfo:(id)arg0 proxyPathList:(id)arg1 fallbackProxyPathList:(id)arg2 obliviousConfigs:(id)arg3 ;
-(void)updateUserEventAgentData;
-(void)useDefaultNetworkInterface:(BOOL)arg0 ;


@end


#endif