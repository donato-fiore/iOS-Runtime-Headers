// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNETWORKVPNDECLARATION_VENDORCONFIG_H
#define CEMNETWORKVPNDECLARATION_VENDORCONFIG_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadGroup; // ivar: _payloadGroup
@property (copy, nonatomic) NSString *payloadLoginGroupOrDomain; // ivar: _payloadLoginGroupOrDomain
@property (copy, nonatomic) NSString *payloadRealm; // ivar: _payloadRealm
@property (copy, nonatomic) NSString *payloadRole; // ivar: _payloadRole


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRealm:(id)arg0 withRole:(id)arg1 withGroup:(id)arg2 withLoginGroupOrDomain:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif