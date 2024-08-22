// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERCLIENTCONFIGURATION_H
#define HMDNETWORKROUTERCLIENTCONFIGURATION_H

@class HAPTLVUnsignedNumberValue, NSString, NSUUID;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterCredential.h"
#import "HMDNetworkRouterLANFirewallConfiguration.h"
#import "HMDNetworkRouterWANFirewallConfiguration.h"

@interface HMDNetworkRouterClientConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) HMDNetworkRouterCredential *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *fingerprint;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterLANFirewallConfiguration *lanFirewallConfiguration; // ivar: _lanFirewallConfiguration
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier; // ivar: _lanIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDNetworkRouterWANFirewallConfiguration *wanFirewallConfiguration; // ivar: _wanFirewallConfiguration


+(id)configurationForFirewallConfiguration:(id)arg0 hapAccessory:(BOOL)arg1 withClientIdentifier:(id)arg2 ;
+(id)configurationForOpenProtectionWithClientIdentifier:(id)arg0 ;
+(id)configurationWithClientIdentifier:(id)arg0 lanIdentifier:(NSInteger)arg1 ;
+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 lanIdentifier:(id)arg1 credential:(id)arg2 wanFirewallConfiguration:(id)arg3 lanFirewallConfiguration:(id)arg4 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif