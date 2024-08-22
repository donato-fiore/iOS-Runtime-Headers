// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWPARAMETERS_H
#define NWPARAMETERS_H

@class NSSet, NSData, NSString, NSUUID, NSArray, NSDictionary, NSURL;
@protocol NWPrettyDescription, NSSecureCoding, NSCopying, OS_nw_parameters;

#import <Foundation/Foundation.h>

#import "NWAddressEndpoint.h"
#import "NWInterface.h"

@interface NWParameters : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSSet *SSLCipherSuites;
@property (retain, nonatomic) NSSet *SSLCipherSuitesInternal; // ivar: _SSLCipherSuitesInternal
@property (copy, nonatomic) NSData *TLSSessionID;
@property (copy, nonatomic) NSString *account;
@property (nonatomic) BOOL allowDuplicateStateUpdates;
@property (nonatomic) BOOL allowJoiningConnectedFd;
@property (nonatomic) BOOL allowSocketAccess;
@property (nonatomic) BOOL allowUnusableAddresses;
@property (nonatomic) BOOL attachProtocolListener;
@property (nonatomic) NSUInteger dataMode;
@property (nonatomic) BOOL disableNagleAlgorithm;
@property (nonatomic, getter=isDiscretionary) BOOL discretionary;
@property (readonly, nonatomic, getter=isDryRun) BOOL dryRun;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (copy, nonatomic) NSUUID *effectiveProcessUUID;
@property (nonatomic) BOOL enableSFO; // ivar: _enableSFO
@property (nonatomic) BOOL enableTFO;
@property (nonatomic) BOOL enableTFONoCookie;
@property (nonatomic) BOOL enableTLS;
@property (nonatomic) BOOL fastOpenForceEnable;
@property (nonatomic) BOOL httpsProxyIsOpaque;
@property (nonatomic) BOOL httpsProxyOverTLS;
@property (nonatomic) BOOL ignoreResolverStats;
@property (nonatomic) BOOL indefinite;
@property (retain) NSObject<OS_nw_parameters> *internalParameters; // ivar: _internalParameters
@property (readonly, nonatomic) unsigned char ipProtocol;
@property (nonatomic) BOOL keepAlive;
@property (nonatomic) NSUInteger keepAliveIdleTime;
@property (nonatomic) NSUInteger keepAliveInterval;
@property (nonatomic) BOOL keepAliveOffload;
@property (retain, nonatomic) NWAddressEndpoint *localAddress;
@property (nonatomic) NSUInteger maximumSSLProtocolVersion;
@property (nonatomic) NSUInteger maximumSSLProtocolVersionInternal; // ivar: _maximumSSLProtocolVersionInternal
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) NSUInteger minimumSSLProtocolVersion;
@property (nonatomic) NSUInteger minimumSSLProtocolVersionInternal; // ivar: _minimumSSLProtocolVersionInternal
@property (nonatomic) BOOL multipath;
@property (nonatomic) BOOL multipathForceEnable;
@property (nonatomic) int multipathService;
@property (nonatomic) BOOL noProxy;
@property (retain, nonatomic) NSUUID *parentID;
@property (readonly, nonatomic) NSArray *parentIDs;
@property (nonatomic) int pid;
@property (nonatomic) BOOL preferNoProxy;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (copy, nonatomic) NSUUID *processUUID;
@property (readonly, nonatomic) BOOL prohibitCellular;
@property (nonatomic) BOOL prohibitConstrainedPaths;
@property (nonatomic) BOOL prohibitExpensivePaths;
@property (nonatomic) BOOL prohibitFallback;
@property (nonatomic) BOOL prohibitJoiningProtocols;
@property (nonatomic) BOOL prohibitRoaming;
@property (copy, nonatomic) NSArray *protocolTransforms;
@property (copy, nonatomic) NSDictionary *proxyConfiguration;
@property (nonatomic) BOOL reduceBuffering;
@property (nonatomic) unsigned char requiredAddressFamily;
@property (retain, nonatomic) NWInterface *requiredInterface;
@property (nonatomic) NSInteger requiredInterfaceSubtype;
@property (nonatomic) NSInteger requiredInterfaceType;
@property (nonatomic) BOOL resolvePTR;
@property (nonatomic) BOOL reuseLocalAddress;
@property (readonly, nonatomic) NSURL *sanitizedURL;
@property (nonatomic) NSUInteger trafficClass;
@property (readonly, nonatomic) unsigned char transportProtocol;
@property (nonatomic) BOOL trustInvalidCertificates;
@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL useAWDL;
@property (nonatomic) BOOL useLongOutstandingQueries;
@property (nonatomic) BOOL useP2P;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)parametersWithCParameters:(id)arg0 ;
+(id)parametersWithProtocolBufferData:(id)arg0 ;
-(BOOL)copyEffectiveAuditToken:(struct ? *)arg0 ;
-(BOOL)hasDelegatedPIDForOriginatingPID:(int)arg0 ;
-(BOOL)hasDelegatedProcessUUID;
-(BOOL)hasNonEmptyProxyConfiguration;
-(BOOL)hasPreferredNetworkAgents;
-(BOOL)hasProhibitedNetworkAgents;
-(BOOL)hasRequiredNetworkAgents;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyCParameters;
-(id)copyRequiredAgentsDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createProtocolBufferObject;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(unsigned short)tlsVersionWithSSLProtocol:(int)arg0 ;
-(void)avoidNetworkAgentWithDomain:(id)arg0 type:(id)arg1 ;
-(void)avoidNetworkAgentWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preferNetworkAgentWithDomain:(id)arg0 type:(id)arg1 ;
-(void)preferNetworkAgentWithUUID:(id)arg0 ;
-(void)prohibitInterface:(id)arg0 ;
-(void)prohibitInterfaceSubtype:(NSInteger)arg0 ;
-(void)prohibitInterfaceType:(NSInteger)arg0 ;
-(void)prohibitNetworkAgentWithUUID:(id)arg0 ;
-(void)prohibitNetworkAgentsWithDomain:(id)arg0 type:(id)arg1 ;
-(void)requireNetworkAgentWithDomain:(id)arg0 type:(id)arg1 ;
-(void)requireNetworkAgentWithUUID:(id)arg0 ;
-(void)setInitialDataPayload:(id)arg0 ;
-(void)setProtocolAtLevel:(NSUInteger)arg0 protocol:(struct nw_protocol_identifier *)arg1 ;
-(void)setSourceApplicationWithBundleID:(id)arg0 ;
-(void)setSourceApplicationWithToken:(struct ? )arg0 ;


@end


#endif