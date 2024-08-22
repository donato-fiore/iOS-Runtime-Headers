// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPCRYPTO_H
#define SPCRYPTO_H


#import <Foundation/Foundation.h>


@interface SPCrypto : NSObject



+(id)antiTrackingKeyFromSharedSecretKey:(id)arg0 ;
+(id)compactKey:(id)arg0 ;
+(id)deriveKeyWithKeyData:(id)arg0 sharedData:(id)arg1 keyLength:(NSUInteger)arg2 ;
+(id)deriveWithPublicKey:(id)arg0 sharedSecretKey:(*id)arg1 ;
+(id)exportKey:(struct _CCECCryptor *)arg0 toFormat:(unsigned int)arg1 ;
+(id)ratchetSharedSecretKey:(id)arg0 ratchetCount:(NSUInteger)arg1 ;
+(struct _CCECCryptor *)diversifyKey:(id)arg0 entropyData:(id)arg1 ;
+(struct _CCECCryptor *)importKey:(id)arg0 fromFormat:(unsigned int)arg1 ;
+(void)generateTokensWithPublicKey:(id)arg0 sharedSecretKey:(id)arg1 initialRatchetsToSkip:(NSUInteger)arg2 ratchetStep:(id)arg3 ;


@end


#endif