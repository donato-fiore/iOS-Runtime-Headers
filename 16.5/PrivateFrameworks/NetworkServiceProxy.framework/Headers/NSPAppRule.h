// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPAPPRULE_H
#define NSPAPPRULE_H

@class NEAppRule, NWNetworkAgentRegistration, NSUUID, NSNumber, NSArray, NSString, NSDate, NSData;


#import "NSPNetworkAgent.h"
#import "NSPAppRule.h"

@interface NSPAppRule : NEAppRule

@property (retain, nonatomic) NSPNetworkAgent *agent; // ivar: _agent
@property (retain, nonatomic) NWNetworkAgentRegistration *agentRegistration; // ivar: _agentRegistration
@property (retain, nonatomic) NSUUID *configurationIdentifier; // ivar: _configurationIdentifier
@property (copy, nonatomic) NSNumber *connectionIdleTimeout; // ivar: _connectionIdleTimeout
@property (copy, nonatomic) NSNumber *connectionTimeout; // ivar: _connectionTimeout
@property (retain, nonatomic) NSPAppRule *defaults; // ivar: _defaults
@property (copy, nonatomic) NSArray *directTLSPorts; // ivar: _directTLSPorts
@property (copy, nonatomic) NSNumber *disableFallback; // ivar: _disableFallback
@property (nonatomic) BOOL disabledByRatio; // ivar: _disabledByRatio
@property (copy, nonatomic) NSNumber *divertDNSOnly; // ivar: _divertDNSOnly
@property (copy, nonatomic) NSString *edgeSetIdentifier; // ivar: _edgeSetIdentifier
@property (retain, nonatomic) NSDate *enableCheckDate; // ivar: _enableCheckDate
@property (copy, nonatomic) NSNumber *enableDirectExtendedValidation; // ivar: _enableDirectExtendedValidation
@property (copy, nonatomic) NSNumber *enableDirectMultipath; // ivar: _enableDirectMultipath
@property (copy, nonatomic) NSNumber *enableDirectRace; // ivar: _enableDirectRace
@property (copy, nonatomic) NSNumber *enableDirectTFO; // ivar: _enableDirectTFO
@property (copy, nonatomic) NSNumber *enableMultipath; // ivar: _enableMultipath
@property (copy, nonatomic) NSNumber *enableNoTFOCookie; // ivar: _enableNoTFOCookie
@property (copy, nonatomic) NSNumber *enableOptInPerTask; // ivar: _enableOptInPerTask
@property (copy, nonatomic) NSNumber *enableRatio; // ivar: _enableRatio
@property (copy, nonatomic) NSNumber *enableTFO; // ivar: _enableTFO
@property (copy, nonatomic) NSNumber *enableUDPRace; // ivar: _enableUDPRace
@property (copy, nonatomic) NSNumber *enabled; // ivar: _enabled
@property (copy, nonatomic) NSNumber *fallbackBufferLimit; // ivar: _fallbackBufferLimit
@property (copy, nonatomic) NSNumber *fallbackCountBeforeImmediateFallback; // ivar: _fallbackCountBeforeImmediateFallback
@property (copy, nonatomic) NSNumber *fallbackTimeout; // ivar: _fallbackTimeout
@property (copy, nonatomic) NSNumber *initialWindowSize; // ivar: _initialWindowSize
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *locationBundlePath; // ivar: _locationBundlePath
@property (copy, nonatomic) NSArray *matchEffectiveApplications; // ivar: _matchEffectiveApplications
@property (copy, nonatomic) NSNumber *noDNSDelegation; // ivar: _noDNSDelegation
@property (copy, nonatomic) NSString *proxyEvaluationPath; // ivar: _proxyEvaluationPath
@property (copy, nonatomic) NSNumber *reenableInterval; // ivar: _reenableInterval
@property (copy, nonatomic) NSNumber *requireTFO; // ivar: _requireTFO
@property (copy, nonatomic) NSNumber *serviceID; // ivar: _serviceID
@property (copy, nonatomic) NSNumber *shouldComposeInitialData; // ivar: _shouldComposeInitialData
@property (copy, nonatomic) NSNumber *telemetryRatio; // ivar: _telemetryRatio
@property (retain, nonatomic) NSData *updateHash; // ivar: _updateHash
@property (copy, nonatomic) NSNumber *useCustomProtocol; // ivar: _useCustomProtocol
@property (copy, nonatomic) NSNumber *useLocalFlowDivert; // ivar: _useLocalFlowDivert


+(BOOL)supportsSecureCoding;
+(id)copyUUIDsForSigningIdentifier:(id)arg0 executablePath:(id)arg1 ;
+(id)validateRuleDictionary:(id)arg0 ;
+(void)loadAppRules:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateNetworkAgent;
-(id)copyAccountIdentifierConditions;
-(id)copyExecutableConditions;
-(id)copyMatchDomainConditions;
-(id)copyMatchEffectiveApplicationConditions;
-(id)copyTLVData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromDictionary:(id)arg0 ;
-(id)initFromTLVs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)merge:(id)arg0 ;
-(void)saveWithCompletionHandler:(id)arg0 ;
-(void)teardownNetworkAgent;


@end


#endif