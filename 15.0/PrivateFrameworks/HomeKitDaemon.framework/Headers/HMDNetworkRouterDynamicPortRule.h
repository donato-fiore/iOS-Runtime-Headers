// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERDYNAMICPORTRULE_H
#define HMDNETWORKROUTERDYNAMICPORTRULE_H

@class NSString, HAPTLVUnsignedNumberValue;
@protocol HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterAdvertisementProtocol.h"
#import "HMDNetworkRouterRuleDirection.h"
#import "HMDNetworkRouterLANIdentifierList.h"
#import "HMDNetworkRouterProtocol.h"
#import "HMDNetworkRouterServiceType.h"

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HMDNetworkRouterAdvertisementProtocol *advertisementProtocol; // ivar: _advertisementProtocol
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // ivar: _direction
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // ivar: _lanIdentifierList
@property (retain, nonatomic) HMDNetworkRouterProtocol *protocol; // ivar: _protocol
@property (retain, nonatomic) HMDNetworkRouterServiceType *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
+(id)ruleForHAP;
+(id)ruleFromFirewallRuleLAN:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDirection:(id)arg0 lanIdentifierList:(id)arg1 protocol:(id)arg2 advertisementProtocol:(id)arg3 flags:(id)arg4 serviceType:(id)arg5 ;
-(id)serializeWithError:(*id)arg0 ;
-(void)addTo:(id)arg0 ;


@end


#endif