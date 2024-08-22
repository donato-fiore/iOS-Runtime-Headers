// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULELANMULTICAST_H
#define HMDNETWORKROUTERFIREWALLRULELANMULTICAST_H

@class HMFNetAddress;


#import "HMDNetworkRouterFirewallRuleLAN.h"

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) HMFNetAddress *ipAddress; // ivar: _ipAddress
@property (readonly, nonatomic) unsigned short port; // ivar: _port


+(id)createWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 ruleDictionary:(id)arg7 error:(*id)arg8 ;
-(id)attributeDescriptions;
-(id)initWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 ipAddress:(id)arg7 port:(unsigned short)arg8 ;
-(id)prettyJSONDictionary;


@end


#endif