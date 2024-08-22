// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPOLICYCONDITION_H
#define NEPOLICYCONDITION_H

@class NSUUID, NSString, NWAddressEndpoint;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEPolicyCondition : NSObject <NEPrettyDescription>

 {
    unsigned char _prefix;
    unsigned short _ipProtocol;
    unsigned short _packetFilterTags;
    unsigned short _schemePort;
    int _pid;
    int _pid_version;
    unsigned int _uid;
    unsigned int _domainFilter;
    unsigned int _trafficClassStart;
    unsigned int _trafficClassEnd;
    unsigned int _clientFlags;
    unsigned int _platform;
    unsigned int _sdkVersion;
    unsigned int _minSDKVersion;
    NSUUID *_applicationUUID;
    NSString *_accountIdentifier;
    NSString *_domain;
    NSString *_interfaceName;
    NWAddressEndpoint *_startAddress;
    NWAddressEndpoint *_endAddress;
    NSString *_customEntitlement;
    NSString *_agentDomain;
    NSString *_agentType;
    NSString *_signingIdentifier;
}


@property NSInteger conditionType; // ivar: _conditionType
@property BOOL exactMatch; // ivar: _exactMatch
@property (getter=isNegative) BOOL negative; // ivar: _negative


+(id)accountIdentifier:(id)arg0 ;
+(id)allInterfaces;
+(id)allowsUnsafeSocketAccess;
+(id)clientFlags:(unsigned int)arg0 ;
+(id)clientProhibitsContrained;
+(id)clientProhibitsExpensive;
+(id)customEntitlement:(id)arg0 ;
+(id)delegateIsPlatformBinary;
+(id)domain:(id)arg0 ;
+(id)domainFilter:(NSUInteger)arg0 ;
+(id)effectiveApplication:(id)arg0 ;
+(id)effectivePID:(int)arg0 ;
+(id)effectivePID:(int)arg0 version:(int)arg1 ;
+(id)entitlement;
+(id)fallbackTraffic;
+(id)flowIPProtocol:(unsigned short)arg0 ;
+(id)flowLocalAddress:(id)arg0 prefix:(unsigned char)arg1 ;
+(id)flowLocalAddressEmpty;
+(id)flowLocalAddressStart:(id)arg0 end:(id)arg1 ;
+(id)flowRemoteAddress:(id)arg0 prefix:(unsigned char)arg1 ;
+(id)flowRemoteAddressEmpty;
+(id)flowRemoteAddressStart:(id)arg0 end:(id)arg1 ;
+(id)hasSignedResult;
+(id)ipProtocol:(unsigned short)arg0 ;
+(id)isInbound;
+(id)isListener;
+(id)isLoopback;
+(id)isSystemProxyConnection;
+(id)localAddress:(id)arg0 prefix:(unsigned char)arg1 ;
+(id)localAddressStart:(id)arg0 end:(id)arg1 ;
+(id)localNetworks;
+(id)packetFilterTags:(unsigned short)arg0 ;
+(id)platformBinary;
+(id)realApplication:(id)arg0 ;
+(id)remoteAddress:(id)arg0 prefix:(unsigned char)arg1 ;
+(id)remoteAddressStart:(id)arg0 end:(id)arg1 ;
+(id)requiredAgentDomain:(id)arg0 agentType:(id)arg1 ;
+(id)schemeUsingPort:(unsigned short)arg0 ;
+(id)scopedInterface:(id)arg0 ;
+(id)sdkVersion:(unsigned int)arg0 minSDKVersion:(unsigned int)arg1 platform:(unsigned int)arg2 ;
+(id)signingIdentifier:(id)arg0 ;
+(id)trafficClassStart:(unsigned int)arg0 end:(unsigned int)arg1 ;
+(id)uid:(unsigned int)arg0 ;
+(id)usesModernNetworkAPI;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif