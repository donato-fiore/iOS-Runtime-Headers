// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERFIREWALLRULEWAN_H
#define HMDNETWORKROUTERFIREWALLRULEWAN_H

@class NSArray;


#import "HMDNetworkRouterFirewallRule.h"
#import "HMDNetworkRouterFirewallRuleWANSubject.h"

@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule

@property (readonly, nonatomic) NSArray *icmpTypes; // ivar: _icmpTypes
@property (readonly, nonatomic) unsigned short portEnd; // ivar: _portEnd
@property (readonly, nonatomic) unsigned short portStart; // ivar: _portStart
@property (readonly, nonatomic) NSUInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWANSubject *subject; // ivar: _subject
@property (readonly, nonatomic) unsigned char transportProtocol; // ivar: _transportProtocol


+(BOOL)__decodeAddress:(id)arg0 subject:(*id)arg1 ;
+(BOOL)__decodeAddressRange:(id)arg0 endValue:(id)arg1 subject:(*id)arg2 ;
+(BOOL)__decodeAddresses:(id)arg0 subject:(*id)arg1 ;
+(BOOL)__decodeFlags:(id)arg0 critical:(*BOOL)arg1 ;
+(BOOL)__decodeHostnames:(id)arg0 subject:(*id)arg1 ;
+(BOOL)__decodePorts:(id)arg0 portStart:(*unsigned short)arg1 portEnd:(*unsigned short)arg2 ;
+(BOOL)__decodePurpose:(id)arg0 purpose:(*NSUInteger)arg1 ;
+(BOOL)__decodeSubject:(id)arg0 subject:(*id)arg1 ;
+(BOOL)__decodeType:(id)arg0 transportProtocol:(*unsigned char)arg1 error:(*id)arg2 ;
+(id)__nonWildcardAddressFrom:(id)arg0 key:(id)arg1 ;
+(id)createWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
+(id)ipAddressAny;
+(id)ipAddressAnyIPv4;
+(id)ipAddressAnyIPv6;
-(id)attributeDescriptions;
-(id)initWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 transportProtocol:(unsigned char)arg4 subject:(id)arg5 portStart:(unsigned short)arg6 portEnd:(unsigned short)arg7 icmpTypes:(id)arg8 ;
-(id)prettyJSONDictionary;


@end


#endif