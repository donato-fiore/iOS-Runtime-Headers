// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POJWT_H
#define POJWT_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "POJWTBody.h"
#import "POJWTHeader.h"

@interface POJWT : NSObject

@property (retain) POJWTBody *decodedBody; // ivar: _decodedBody
@property (retain) POJWTHeader *decodedHeader; // ivar: _decodedHeader
@property (readonly, getter=isJWE) BOOL jwe;
@property (retain) NSString *rawAuthenticationTag; // ivar: _rawAuthenticationTag
@property (retain) NSString *rawBody; // ivar: _rawBody
@property (retain) NSString *rawCipherText; // ivar: _rawCipherText
@property (retain) NSString *rawEncryptedKey; // ivar: _rawEncryptedKey
@property (retain) NSString *rawHeader; // ivar: _rawHeader
@property (retain) NSString *rawIV; // ivar: _rawIV
@property (retain) NSString *rawSignature; // ivar: _rawSignature
@property (retain) NSData *signedData;


-(BOOL)decodeAndDecryptUsingPrivateKey:(struct __SecKey *)arg0 ;
-(BOOL)decodeAndDecryptUsingPrivateKey:(struct __SecKey *)arg0 apvString:(id)arg1 ;
-(BOOL)verifySignatureUsingKey:(struct __SecKey *)arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 ;
-(id)mutableCopy;
-(id)stringRepresentation;
-(struct __SecKey *)decodeEphemeralPublicKey;


@end


#endif