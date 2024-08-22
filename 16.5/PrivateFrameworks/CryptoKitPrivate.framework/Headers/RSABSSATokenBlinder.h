// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RSABSSATOKENBLINDER_H
#define RSABSSATOKENBLINDER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface RSABSSATokenBlinder : NSObject {
    *ccrsabssa_ciphersuite _ciphersuite;
    NSUInteger _ciphersuiteModulusByteCount;
    ccrsa_pub_ctx _publicKey;
}


@property (readonly, retain, nonatomic) NSData *keyId; // ivar: _keyId


+(id)keyIDFromSPKI:(id)arg0 ;
-(BOOL)setParamsForSize:(NSUInteger)arg0 params:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyFullyParsedASN1:(char *)arg0 end:(char *)arg1 error:(*id)arg2 ;
-(id)initWithPublicKey:(id)arg0 error:(*id)arg1 ;
-(id)tokenWaitingActivationWithContent:(id)arg0 error:(*id)arg1 ;
-(struct ccrsa_pub_ctx *)publicKey;


@end


#endif