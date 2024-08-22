// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULELAN_H
#define HMDNETWORKROUTERFIREWALLRULELAN_H



#import "HMDNetworkRouterFirewallRule.h"

@interface HMDNetworkRouterFirewallRuleLAN : HMDNetworkRouterFirewallRule

@property (readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) BOOL allowInterAccessoryConnections; // ivar: _allowInterAccessoryConnections
@property (readonly, nonatomic) unsigned char direction; // ivar: _direction
@property (readonly, nonatomic) NSUInteger purpose; // ivar: _purpose
@property (readonly, nonatomic, getter=isRequiredForHAPFunctionality) BOOL requiredForHAPFunctionality; // ivar: _requiredForHAPFunctionality


+(BOOL)__decodeDirection:(id)arg0 direction:(*unsigned char)arg1 error:(*id)arg2 ;
+(BOOL)__decodeFlags:(id)arg0 critical:(*BOOL)arg1 allowInterAccessoryConnections:(*BOOL)arg2 requiredForHAPFunctionality:(*BOOL)arg3 error:(*id)arg4 ;
+(BOOL)__decodePurpose:(id)arg0 purpose:(*NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)__decodeTransportProtocolFromJSONDictionary:(id)arg0 key:(id)arg1 transportProtocol:(*unsigned char)arg2 error:(*id)arg3 ;
+(BOOL)__decodeType:(id)arg0 type:(*unsigned char)arg1 error:(*id)arg2 ;
+(id)createWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
+(id)createWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 ruleDictionary:(id)arg7 error:(*id)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 ;
-(id)prettyJSONDictionary;


@end


#endif