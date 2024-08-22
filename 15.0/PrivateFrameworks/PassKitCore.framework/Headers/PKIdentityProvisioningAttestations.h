// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIDENTITYPROVISIONINGATTESTATIONS_H
#define PKIDENTITYPROVISIONINGATTESTATIONS_H

@class NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKIdentityProvisioningAttestations : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *authorizationKeyAttestation; // ivar: _authorizationKeyAttestation
@property (readonly, nonatomic) NSArray *deviceEncryptionKeyAttestation; // ivar: _deviceEncryptionKeyAttestation
@property (readonly, nonatomic) NSData *deviceEncryptionKeyAuthorization; // ivar: _deviceEncryptionKeyAuthorization
@property (readonly, nonatomic) NSData *transactionKeyCASDAttestation; // ivar: _transactionKeyCASDAttestation
@property (readonly, nonatomic) NSData *transactionKeyCASDAuthorization; // ivar: _transactionKeyCASDAuthorization
@property (readonly, nonatomic) NSData *transactionKeyCASDSignature; // ivar: _transactionKeyCASDSignature


+(BOOL)supportsSecureCoding;
-(id)initWithAuthorizationKeyAttestation:(id)arg0 deviceEncryptionKeyAttestation:(id)arg1 deviceEncryptionKeyAuthorization:(id)arg2 transactionKeyCASDAttestation:(id)arg3 transactionKeyCASDSignature:(id)arg4 transactionKeyCASDAuthorization:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif