// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMUTABLEJWT_H
#define POMUTABLEJWT_H



#import "POJWT.h"
#import "POMutableJWTBody.h"
#import "POMutableJWTHeader.h"

@interface POMutableJWT : POJWT

@property (retain) POMutableJWTBody *body; // ivar: _body
@property (retain) POMutableJWTHeader *header; // ivar: _header


-(BOOL)isJWE;
-(id)description;
-(id)encodeAndEncryptUsingPublicKey:(struct __SecKey *)arg0 ;
-(id)encodeAndEncryptUsingPublicKey:(struct __SecKey *)arg0 partyVInfo:(id)arg1 ;
-(id)encodeAndSignUsingAlgorithm:(id)arg0 key:(struct __SecKey *)arg1 certificate:(struct __SecCertificate *)arg2 ;


@end


#endif