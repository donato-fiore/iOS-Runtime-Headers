// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMNETWORKVPNDECLARATION_IPV4_H
#define CEMNETWORKVPNDECLARATION_IPV4_H

@class NSNumber;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadOverridePrimary; // ivar: _payloadOverridePrimary


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithOverridePrimary:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif