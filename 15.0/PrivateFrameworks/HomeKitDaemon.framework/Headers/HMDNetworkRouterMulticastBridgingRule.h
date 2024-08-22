// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERMULTICASTBRIDGINGRULE_H
#define HMDNETWORKROUTERMULTICASTBRIDGINGRULE_H

@class NSString, HAPTLVUnsignedNumberValue;
@protocol HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterIPAddress.h"
#import "HMDNetworkRouterRuleDirection.h"
#import "HMDNetworkRouterLANIdentifierList.h"

@interface HMDNetworkRouterMulticastBridgingRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // ivar: _destinationIPAddress
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPort; // ivar: _destinationPort
@property (retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // ivar: _lanIdentifierList
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
+(id)ruleFromFirewallRuleLAN:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDirection:(id)arg0 lanIdentifierList:(id)arg1 destinationIPAddress:(id)arg2 destinationPort:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;
-(void)addTo:(id)arg0 ;


@end


#endif