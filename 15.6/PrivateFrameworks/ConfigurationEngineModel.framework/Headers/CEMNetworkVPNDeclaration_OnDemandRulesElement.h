// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMNETWORKVPNDECLARATION_ONDEMANDRULESELEMENT_H
#define CEMNETWORKVPNDECLARATION_ONDEMANDRULESELEMENT_H

@class NSString, NSArray;


#import "CEMPayloadBase.h"
#import "CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters.h"

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAction; // ivar: _payloadAction
@property (copy, nonatomic) CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *payloadActionParameters; // ivar: _payloadActionParameters
@property (copy, nonatomic) NSArray *payloadDNSDomainMatch; // ivar: _payloadDNSDomainMatch
@property (copy, nonatomic) NSArray *payloadDNSServerAddressMatch; // ivar: _payloadDNSServerAddressMatch
@property (copy, nonatomic) NSString *payloadInterfaceTypeMatch; // ivar: _payloadInterfaceTypeMatch
@property (copy, nonatomic) NSArray *payloadSSIDMatch; // ivar: _payloadSSIDMatch
@property (copy, nonatomic) NSString *payloadURLStringProbe; // ivar: _payloadURLStringProbe


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithAction:(id)arg0 ;
+(id)buildWithDNSDomainMatch:(id)arg0 withDNSServerAddressMatch:(id)arg1 withURLStringProbe:(id)arg2 withAction:(id)arg3 withActionParameters:(id)arg4 withInterfaceTypeMatch:(id)arg5 withSSIDMatch:(id)arg6 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif