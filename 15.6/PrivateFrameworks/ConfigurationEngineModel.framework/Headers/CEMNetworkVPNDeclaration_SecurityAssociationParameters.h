// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMNETWORKVPNDECLARATION_SECURITYASSOCIATIONPARAMETERS_H
#define CEMNETWORKVPNDECLARATION_SECURITYASSOCIATIONPARAMETERS_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadDiffieHellmanGroup; // ivar: _payloadDiffieHellmanGroup
@property (copy, nonatomic) NSString *payloadEncryptionAlgorithm; // ivar: _payloadEncryptionAlgorithm
@property (copy, nonatomic) NSString *payloadIntegrityAlgorithm; // ivar: _payloadIntegrityAlgorithm
@property (copy, nonatomic) NSNumber *payloadLifeTimeInMinutes; // ivar: _payloadLifeTimeInMinutes


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithEncryptionAlgorithm:(id)arg0 withIntegrityAlgorithm:(id)arg1 withDiffieHellmanGroup:(id)arg2 withLifeTimeInMinutes:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif