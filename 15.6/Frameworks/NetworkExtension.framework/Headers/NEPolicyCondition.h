// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPOLICYCONDITION_H
#define NEPOLICYCONDITION_H

@class NSString, NSUUID, NWAddressEndpoint;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEPolicyCondition : NSObject <NEPrettyDescription>



@property (copy) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy) NSString *agentDomain; // ivar: _agentDomain
@property (copy) NSString *agentType; // ivar: _agentType
@property (copy) NSUUID *applicationUUID; // ivar: _applicationUUID
@property unsigned int clientFlags; // ivar: _clientFlags
@property NSInteger conditionType; // ivar: _conditionType
@property (copy) NSString *customEntitlement; // ivar: _customEntitlement
@property (copy) NSString *domain; // ivar: _domain
@property unsigned int domainFilter; // ivar: _domainFilter
@property (copy) NWAddressEndpoint *endAddress; // ivar: _endAddress
@property (copy) NSString *interfaceName; // ivar: _interfaceName
@property unsigned short ipProtocol; // ivar: _ipProtocol
@property unsigned int minSDKVersion; // ivar: _minSDKVersion
@property (getter=isNegative) BOOL negative; // ivar: _negative
@property unsigned short packetFilterTags; // ivar: _packetFilterTags
@property int pid; // ivar: _pid
@property int pid_version; // ivar: _pid_version
@property unsigned int platform; // ivar: _platform
@property unsigned char prefix; // ivar: _prefix
@property unsigned short schemePort; // ivar: _schemePort
@property unsigned int sdkVersion; // ivar: _sdkVersion
@property (copy) NSString *signingIdentifier; // ivar: _signingIdentifier
@property (copy) NWAddressEndpoint *startAddress; // ivar: _startAddress
@property unsigned int trafficClassEnd; // ivar: _trafficClassEnd
@property unsigned int trafficClassStart; // ivar: _trafficClassStart
@property unsigned int uid; // ivar: _uid


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
+(id)ipProtocol:(unsigned short)arg0 ;
+(id)isInbound;
+(id)isListener;
+(id)isLoopback;
+(id)isSystemProxyConnection;
+(id)localAddress:(id)arg0 prefix:(unsigned char)arg1 ;
+(id)localAddressStart:(id)arg0 end:(id)arg1 ;
+(id)localNetworks;
+(id)packetFilterTags:(unsigned short)arg0 ;
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
-(BOOL)addTLVsToMessage:(id)arg0 ;
-(BOOL)validate;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initInternal;


@end


#endif