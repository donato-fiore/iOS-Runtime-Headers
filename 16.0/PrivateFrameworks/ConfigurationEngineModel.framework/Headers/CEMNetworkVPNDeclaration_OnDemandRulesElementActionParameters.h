// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNDECLARATION_ONDEMANDRULESELEMENTACTIONPARAMETERS_H
#define CEMNETWORKVPNDECLARATION_ONDEMANDRULESELEMENTACTIONPARAMETERS_H

@class NSString, NSArray;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDomainAction; // ivar: _payloadDomainAction
@property (copy, nonatomic) NSArray *payloadDomains; // ivar: _payloadDomains
@property (copy, nonatomic) NSArray *payloadRequiredDNSServers; // ivar: _payloadRequiredDNSServers
@property (copy, nonatomic) NSString *payloadRequiredURLStringProbe; // ivar: _payloadRequiredURLStringProbe


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithDomains:(id)arg0 withDomainAction:(id)arg1 ;
+(id)buildWithDomains:(id)arg0 withDomainAction:(id)arg1 withRequiredDNSServers:(id)arg2 withRequiredURLStringProbe:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif