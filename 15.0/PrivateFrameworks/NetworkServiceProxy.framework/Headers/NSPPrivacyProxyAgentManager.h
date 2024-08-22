// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYAGENTMANAGER_H
#define NSPPRIVACYPROXYAGENTMANAGER_H

@class NSString, NSMutableArray, NSArray, NSDate, NSDictionary, NWPath, NWInterface, NSMutableDictionary;
@protocol NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying, NSPPrivacyProxyAgentManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPCandidateFallbackProxyPath.h"
#import "NSPCandidateQuicProxyPath.h"
#import "NSPProber.h"
#import "NSPFallbackProxyPath.h"
#import "NSPQuicProxyPath.h"

@interface NSPPrivacyProxyAgentManager : NSObject <NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger agentLowWaterMarkHitCount; // ivar: _agentLowWaterMarkHitCount
@property (nonatomic) NSUInteger badTokenCount; // ivar: _badTokenCount
@property (nonatomic) NSUInteger cacheLowWaterMarkHitCount; // ivar: _cacheLowWaterMarkHitCount
@property (retain, nonatomic) NSPCandidateFallbackProxyPath *candidateFallbackProxyPath; // ivar: _candidateFallbackProxyPath
@property (retain, nonatomic) NSPCandidateQuicProxyPath *candidateQuicProxyPath; // ivar: _candidateQuicProxyPath
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPPrivacyProxyAgentManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSPProber *directPathProber; // ivar: _directPathProber
@property (nonatomic) BOOL dnsFilteringHintEnabled; // ivar: dnsFilteringHintEnabled
@property (retain, nonatomic) NSPFallbackProxyPath *fallbackProxyPath; // ivar: _fallbackProxyPath
@property (retain, nonatomic) NSMutableArray *fallbackProxyPathCustomEnumerator; // ivar: _fallbackProxyPathCustomEnumerator
@property (retain, nonatomic) NSArray *fallbackProxyPathList; // ivar: _fallbackProxyPathList
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property (nonatomic) BOOL geohashSharingEnabled; // ivar: _geohashSharingEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastPathUnsatisfiedDate; // ivar: _lastPathUnsatisfiedDate
@property (retain, nonatomic) NSDate *lastPrimaryInterfaceChangedDate; // ivar: _lastPrimaryInterfaceChangedDate
@property (nonatomic) int linkQuality; // ivar: _linkQuality
@property (nonatomic) NSUInteger missingTokenCount; // ivar: _missingTokenCount
@property (retain, nonatomic) NSDictionary *networkCharacteristics; // ivar: _networkCharacteristics
@property (nonatomic) NSUInteger networkFallbackProxiesRotated; // ivar: _networkFallbackProxiesRotated
@property (nonatomic) NSUInteger networkProxiesRotated; // ivar: _networkProxiesRotated
@property (retain, nonatomic) NSString *overridePreferredProxy; // ivar: _overridePreferredProxy
@property (retain, nonatomic) NWPath *path; // ivar: _path
@property (retain, nonatomic) NWInterface *proberInterface; // ivar: _proberInterface
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
@property (retain, nonatomic) NSMutableDictionary *savedConfiguredProxies; // ivar: _savedConfiguredProxies
@property (nonatomic) BOOL subscriber; // ivar: _subscriber
@property (readonly) Class superclass;
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
-(BOOL)isMultiHopFallbackProxyAgentRegistered;
-(BOOL)isMultiHopProxyAgentRegistered;
-(BOOL)isSingleHopFallbackProxyAgentRegistered;
-(BOOL)isSingleHopProxyAgentRegistered;
-(BOOL)saveToPreferences;
-(NSInteger)failureReasonCodeFromErrorCode:(int)arg0 ;
-(id)copyPreferredProxyFromPreferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createRTCReportPayloadWithCategory:(NSInteger)arg0 errorCode:(int)arg1 url:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)failureReasonDescriptionFromReasonCode:(NSInteger)arg0 ;
-(id)fallbackProxyPathWithIngressProxyURL:(id)arg0 egressProxyURL:(id)arg1 ;
-(id)getProxyTokenInfoForProxyInfo:(id)arg0 ;
-(id)hostAndPortFromURL:(id)arg0 ;
-(id)ingressProxyURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)multiHopFallbackProxyConfigHash:(id)arg0 ;
-(id)nextFallbackProxyPathWithOverride;
-(id)nextProxyPath:(id)arg0 ;
-(id)nextProxyPathWithOverride;
-(id)proxyPathWithIngressProxyURL:(id)arg0 egressProxyURL:(id)arg1 ;
-(id)servicenameFromFailureType:(NSInteger)arg0 ;
-(id)singleHopFallbackProxyConfigHash:(id)arg0 ;
-(void)checkProxyConnectivityOnInterface:(id)arg0 proxyConnectivityCheckType:(NSUInteger)arg1 ;
-(void)connectionErrorsProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)connectionRefusedProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)connectionTimeoutProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)copyProxyInfo:(id)arg0 ;
-(void)dealloc;
-(void)dnsBlockedProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)dnsTimeoutProxyPath:(id)arg0 interface:(id)arg1 ;
-(void)egressProxyErrorProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleConfigChange;
-(void)handleLinkQualityChange:(int)arg0 ;
-(void)handlePathChange:(id)arg0 ;
-(void)handleTierChange:(BOOL)arg0 ;
-(void)mergeTokenStats:(id)arg0 ;
-(void)multiHopAgentRegistered:(id)arg0 ;
-(void)multiHopAgentUnregistered:(id)arg0 ;
-(void)originProxyErrorProxyPath:(id)arg0 interface:(id)arg1 errorCode:(int)arg2 ;
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
-(void)reportProxySuccessOnInterface:(id)arg0 ;
-(void)reportTokenFetchFailure:(id)arg0 statusCode:(NSInteger)arg1 ;
-(void)requestAccessToken:(id)arg0 ;
-(void)resetProxyErrors;
-(void)sendRTCReportWithFailureType:(NSInteger)arg0 errorCode:(int)arg1 url:(id)arg2 ;
-(void)setTokenIssuanceLimitInterval:(NSUInteger)arg0 ;
-(void)setUserEventAgentProberParameters;
-(void)setUserEventAgentTokenFetchParameters;
-(void)setupCandidateFallbackProxyPath;
-(void)setupCandidateQuicProxyPath;
-(void)setupFallbackProxyPath;
-(void)setupQuicProxyPath;
-(void)setupWithPath:(id)arg0 subscriber:(BOOL)arg1 geohashSharingEnabled:(BOOL)arg2 linkQuality:(int)arg3 ;
-(void)singleHopAgentRegistered:(id)arg0 ;
-(void)singleHopAgentUnregistered:(id)arg0 ;
-(void)startProxyOutageProbing;
-(void)switchProxy:(id)arg0 ;
-(void)tokenAdded:(id)arg0 ;
-(void)tokenFetchOutage:(id)arg0 ;
-(void)tokenInfoInvalid:(id)arg0 ;
-(void)tokenLowWaterMarkReached:(id)arg0 ;
-(void)tokenRateLimited:(id)arg0 untilDate:(CGFloat)arg1 ;
-(void)updateDNSFilteringHint:(BOOL)arg0 ;
-(void)updateGeohashSharingPreference:(BOOL)arg0 ;
-(void)updateProxyInfo:(id)arg0 proxyPathList:(id)arg1 fallbackProxyPathList:(id)arg2 ;
-(void)updateProxyTokenInfoArray:(id)arg0 ;
-(void)updateUserEventAgentData;
-(void)useDefaultNetworkInterface:(BOOL)arg0 ;


@end


#endif