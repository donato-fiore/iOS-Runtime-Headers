// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULELANDYNAMIC_H
#define HMDNETWORKROUTERFIREWALLRULELANDYNAMIC_H

@class NSString;


#import "HMDNetworkRouterFirewallRuleLAN.h"

@interface HMDNetworkRouterFirewallRuleLANDynamic : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic, getter=isAdvertisingOnly) BOOL advertisingOnly; // ivar: _advertisingOnly
@property (readonly, nonatomic) unsigned char advertisingProtocol; // ivar: _advertisingProtocol
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, nonatomic) unsigned char transportProtocol; // ivar: _transportProtocol


+(BOOL)__decodeAdvertisingProtocol:(id)arg0 advertisingProtocol:(*unsigned char)arg1 error:(*id)arg2 ;
+(BOOL)__decodeFlags:(id)arg0 advertisingOnly:(*BOOL)arg1 error:(*id)arg2 ;
+(BOOL)__decodeServiceType:(id)arg0 serviceType:(*id)arg1 error:(*id)arg2 ;
+(id)__advertisingProtocolToString:(unsigned char)arg0 ;
+(id)createWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 ruleDictionary:(id)arg7 error:(*id)arg8 ;
-(id)attributeDescriptions;
-(id)initWithJSONDictionary:(id)arg0 name:(id)arg1 critical:(BOOL)arg2 purpose:(NSUInteger)arg3 allowInterAccessoryConnections:(BOOL)arg4 direction:(unsigned char)arg5 requiredForHAPFunctionality:(BOOL)arg6 transportProtocol:(unsigned char)arg7 advertisingProtocol:(unsigned char)arg8 advertisingOnly:(BOOL)arg9 serviceType:(id)arg10 ;
-(id)prettyJSONDictionary;


@end


#endif