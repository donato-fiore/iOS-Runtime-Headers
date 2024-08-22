// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEENCRYPTED_H
#define DEENCRYPTED_H


#import <Foundation/Foundation.h>


@interface DEEncrypted : NSObject



+(BOOL)decryptAllFrom:(id)arg0 to:(id)arg1 ;
+(BOOL)decryptFrom:(id)arg0 to:(id)arg1 allowAllKeys:(BOOL)arg2 keyVersion:(*id)arg3 ;
+(BOOL)decryptFrom:(id)arg0 to:(id)arg1 version:(id)arg2 ;
+(BOOL)decryptFrom:(id)arg0 to:(id)arg1 version:(id)arg2 allowAllKeys:(BOOL)arg3 ;
+(BOOL)encryptFrom:(id)arg0 to:(id)arg1 keyId:(NSUInteger)arg2 privateKey:(id)arg3 encryptedPb:(*void)arg4 ;
+(BOOL)encryptFrom:(id)arg0 to:(id)arg1 keyId:(NSUInteger)arg2 privateKey:(id)arg3 multipart:(BOOL)arg4 ;
+(BOOL)isPrivateKey:(id)arg0 publicKey:(id)arg1 ;
+(BOOL)isSymmetric:(NSUInteger)arg0 ;
+(BOOL)wrapFrom:(id)arg0 to:(id)arg1 encryptedPb:(*void)arg2 multipart:(BOOL)arg3 ;
+(id)decrypt:(id)arg0 ;
+(id)decrypt:(id)arg0 allowAllKeys:(BOOL)arg1 keyVersion:(*id)arg2 ;
+(id)decrypt:(id)arg0 keyVersion:(*id)arg1 ;
+(id)decryptAll:(id)arg0 ;
+(id)decryptFrom:(id)arg0 name:(id)arg1 base:(id)arg2 ;
+(id)encrypt:(id)arg0 keyId:(NSUInteger)arg1 privateKey:(id)arg2 multipart:(BOOL)arg3 ;
+(id)encryptFrom:(id)arg0 name:(id)arg1 base:(id)arg2 keyId:(NSUInteger)arg3 privateKey:(id)arg4 multipart:(BOOL)arg5 ;
+(id)getKey:(NSUInteger)arg0 ;
+(id)getKeyWithVersion:(id)arg0 ;
+(id)getKeyWithVersion:(id)arg0 symmetric:(*BOOL)arg1 ;
+(id)getSymmetricKey:(id)arg0 publicKey:(id)arg1 symmetricKeyIV:(*id)arg2 signature:(*id)arg3 ;
+(id)getSymmetricKey:(id)arg0 symmetricKeyIV:(id)arg1 signature:(id)arg2 ;
+(id)getSymmetricSrc:(id)arg0 publicKey:(id)arg1 ;
+(id)toEnvelope:(BOOL)arg0 iv:(id)arg1 hmac:(id)arg2 keyVersion:(id)arg3 payload:(id)arg4 ;
+(id)versionFile:(id)arg0 ;


@end


#endif