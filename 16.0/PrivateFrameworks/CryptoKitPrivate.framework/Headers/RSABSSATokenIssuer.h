// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RSABSSATOKENISSUER_H
#define RSABSSATOKENISSUER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface RSABSSATokenIssuer : NSObject {
    *ccrsabssa_ciphersuite _ciphersuite;
    NSUInteger _ciphersuiteModulusByteCount;
    ccrsa_full_ctx _rsaPrivateKey;
}


@property (readonly, retain, nonatomic) NSData *keyId; // ivar: _keyId
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey


-(id)blindSign:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithKeyByteCount:(NSUInteger)arg0 ;


@end


#endif