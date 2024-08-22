// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNDECLARATION_DNS_H
#define CEMNETWORKVPNDECLARATION_DNS_H

@class NSString, NSArray, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_DNS : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadDomainName; // ivar: _payloadDomainName
@property (copy, nonatomic) NSArray *payloadSearchDomains; // ivar: _payloadSearchDomains
@property (copy, nonatomic) NSArray *payloadServerAddresses; // ivar: _payloadServerAddresses
@property (copy, nonatomic) NSArray *payloadSupplementalMatchDomains; // ivar: _payloadSupplementalMatchDomains
@property (copy, nonatomic) NSNumber *payloadSupplementalMatchDomainsNoSearch; // ivar: _payloadSupplementalMatchDomainsNoSearch


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithServerAddresses:(id)arg0 ;
+(id)buildWithServerAddresses:(id)arg0 withSearchDomains:(id)arg1 withDomainName:(id)arg2 withSupplementalMatchDomains:(id)arg3 withSupplementalMatchDomainsNoSearch:(id)arg4 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif