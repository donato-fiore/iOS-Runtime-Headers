// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULELANSTATIC_H
#define HMDNETWORKROUTERFIREWALLRULELANSTATIC_H

@class NSArray, HMFNetAddress;


#import "HMDNetworkRouterFirewallRuleLAN.h"

@interface HMDNetworkRouterFirewallRuleLANStatic : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) NSArray *icmpTypes; // ivar: _icmpTypes
@property (readonly, nonatomic) HMFNetAddress *ipAddress; // ivar: _ipAddress
@property (readonly, nonatomic) unsigned short portEnd; // ivar: _portEnd
@property (readonly, nonatomic) unsigned short portStart; // ivar: _portStart
@property (readonly, nonatomic) unsigned char transportProtocol; // ivar: _transportProtocol


+(id)createWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 ruleDictionary:(id)arg7 error:(*id)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 transportProtocol:(unsigned char)arg7 ipAddress:(id)arg8 portStart:(unsigned short)arg9 portEnd:(unsigned short)arg10 icmpTypes:(id)arg11 ;
-(id)prettyJSONDictionary;


@end


#endif