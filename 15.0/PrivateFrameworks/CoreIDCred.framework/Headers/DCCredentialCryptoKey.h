// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCCREDENTIALCRYPTOKEY_H
#define DCCREDENTIALCRYPTOKEY_H

@class NSArray, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialCryptoKey : NSObject <NSSecureCoding>



@property (retain) NSArray *attestation; // ivar: _attestation
@property (retain) NSData *casdAttestation; // ivar: _casdAttestation
@property (retain) NSData *casdSignature; // ivar: _casdSignature
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSData *keyAuthorization; // ivar: _keyAuthorization
@property NSUInteger keyType; // ivar: _keyType
@property NSUInteger keyUsage; // ivar: _keyUsage
@property (retain) NSArray *kskAttestation; // ivar: _kskAttestation
@property (retain) NSData *publicKeyCOSEKey; // ivar: _publicKeyCOSEKey
@property (retain) NSData *publicKeyIdentifier; // ivar: _publicKeyIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 publicKeyIdentifier:(id)arg1 publicKeyCOSEKey:(id)arg2 keyType:(NSUInteger)arg3 keyUsage:(NSUInteger)arg4 attestation:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 publicKeyIdentifier:(id)arg1 publicKeyCOSEKey:(id)arg2 keyType:(NSUInteger)arg3 keyUsage:(NSUInteger)arg4 attestation:(id)arg5 keyAuthorization:(id)arg6 kskAttestation:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 publicKeyIdentifier:(id)arg1 publicKeyCOSEKey:(id)arg2 keyType:(NSUInteger)arg3 keyUsage:(NSUInteger)arg4 casdSignature:(id)arg5 casdAttestation:(id)arg6 keyAuthorization:(id)arg7 kskAttestation:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif