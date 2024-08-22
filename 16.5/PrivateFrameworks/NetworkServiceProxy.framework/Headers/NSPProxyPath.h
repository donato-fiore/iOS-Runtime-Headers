// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPROXYPATH_H
#define NSPPROXYPATH_H

@class NSNumber, NSString, NSUUID, NSMutableDictionary, NSArray;
@protocol NSSecureCoding, NSCopying, NSPPrivacyProxyNetworkRegistrationDelegate, NSPProxyPathDelegate;

#import <Foundation/Foundation.h>

#import "NSPProxyTokenInfo.h"
#import "NSPPrivacyProxyNetworkRegistration.h"
#import "NSPProxyAgentNetworkStatistics.h"

@interface NSPProxyPath : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyNetworkRegistrationDelegate>



@property (nonatomic) BOOL allowFailOpen; // ivar: _allowFailOpen
@property (nonatomic) BOOL allowFallback; // ivar: _allowFallback
@property (retain, nonatomic) NSNumber *configEpoch; // ivar: _configEpoch
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPProxyPathDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy; // ivar: _egressProxy
@property (nonatomic) BOOL fallbackToQUIC; // ivar: _fallbackToQUIC
@property (nonatomic) BOOL forceFallback; // ivar: _forceFallback
@property (nonatomic) BOOL geohashSharingEnabled; // ivar: _geohashSharingEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy; // ivar: _ingressProxy
@property (nonatomic) BOOL multiHopRegistered; // ivar: _multiHopRegistered
@property (retain, nonatomic) NSPPrivacyProxyNetworkRegistration *multiHopRegistration; // ivar: _multiHopRegistration
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *networkMultiHopAgentStatistics; // ivar: _networkMultiHopAgentStatistics
@property (retain, nonatomic) NSPProxyAgentNetworkStatistics *networkSingleHopAgentStatistics; // ivar: _networkSingleHopAgentStatistics
@property (retain, nonatomic) NSUUID *nonDefaultAgentUUID; // ivar: _nonDefaultAgentUUID
@property (retain, nonatomic) NSMutableDictionary *obliviousAgentUUIDs; // ivar: _obliviousAgentUUIDs
@property (retain, nonatomic) NSArray *obliviousConfigs; // ivar: _obliviousConfigs
@property (retain, nonatomic) NSMutableDictionary *obliviousHopRegistrations; // ivar: _obliviousHopRegistrations
@property (nonatomic) NSUInteger proxyPathWeight; // ivar: _proxyPathWeight
@property (nonatomic) BOOL singleHopRegistered; // ivar: _singleHopRegistered
@property (retain, nonatomic) NSPPrivacyProxyNetworkRegistration *singleHopRegistration; // ivar: _singleHopRegistration
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isMultiHopRegistered;
-(BOOL)isSingleHopRegistered;
-(BOOL)matchEgress:(id)arg0 ;
-(BOOL)matchIngress:(id)arg0 ;
-(BOOL)proxyPathIsValid:(id)arg0 proxyPathList:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ingressProxy:(id)arg1 egressProxy:(id)arg2 proxyPathWeight:(NSUInteger)arg3 obliviousConfigs:(id)arg4 allowFallback:(BOOL)arg5 fallbackToQUIC:(BOOL)arg6 forceFallback:(BOOL)arg7 allowFailOpen:(BOOL)arg8 geohashSharingEnabled:(BOOL)arg9 configEpoch:(id)arg10 networkCharacteristics:(id)arg11 ;
-(id)multiHopConfigurationHash;
-(id)obliviousHopAgentUUIDForHostname:(id)arg0 ;
-(id)obliviousHopConfigHashForHostname:(id)arg0 ;
-(id)singleHopConfigurationHash;
-(void)dealloc;
-(void)enableFailOpen:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleNetworkCharacteristicsChange:(id)arg0 ;
-(void)reportErrorForNetworkRegistration:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;
-(void)resetError;
-(void)resetMultiHopProxyAgent;
-(void)resetObliviousHopProxyAgents;
-(void)resetSingleHopProxyAgent;
-(void)resetStats;
-(void)setupMultiHopProxyRegistrations;
-(void)setupSingleHopProxyRegistrations;
-(void)updateConfigEpoch:(id)arg0 ;
-(void)updateGeohashSharing:(BOOL)arg0 ;
-(void)updateIngressProxy:(id)arg0 egressProxy:(id)arg1 proxyPathWeight:(NSUInteger)arg2 obliviousConfigs:(id)arg3 ;


@end


#endif