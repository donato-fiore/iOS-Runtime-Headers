// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2CRYPTO_H
#define NEIKEV2CRYPTO_H


#import <Foundation/Foundation.h>


@interface NEIKEv2Crypto : NSObject



+(BOOL)decryptChaChaPolyWithKey:(char *)arg0 keyLen:(int)arg1 iv:(char *)arg2 ivLen:(int)arg3 aad:(char *)arg4 aadLen:(int)arg5 encryptedText:(char *)arg6 len:(int)arg7 output:(char *)arg8 outputLen:(int)arg9 ;
+(BOOL)decryptGCMWithKey:(char *)arg0 keyLen:(int)arg1 iv:(char *)arg2 ivLen:(int)arg3 aad:(char *)arg4 aadLen:(int)arg5 encryptedText:(char *)arg6 len:(int)arg7 output:(char *)arg8 outputLen:(int)arg9 ;
+(BOOL)encryptChaChaPolyWithContext:(id)arg0 key:(id)arg1 iv:(id)arg2 aad:(char *)arg3 aadLen:(int)arg4 plaintext:(char *)arg5 len:(int)arg6 output:(char *)arg7 outputLen:(int)arg8 ;
+(BOOL)encryptGCMWithContext:(id)arg0 aad:(char *)arg1 aadLen:(int)arg2 plaintext:(char *)arg3 len:(int)arg4 output:(char *)arg5 outputLen:(int)arg6 ;
+(BOOL)verifySignature:(id)arg0 octets:(id)arg1 hashAlgorithm:(NSUInteger)arg2 publicKey:(struct __SecKey *)arg3 padding:(unsigned int)arg4 ;
+(BOOL)verifySignature:(id)arg0 octets:(id)arg1 hashAlgorithm:(NSUInteger)arg2 publicKey:(struct __SecKey *)arg3 padding:(unsigned int)arg4 sha2:(BOOL)arg5 ;
+(NSUInteger)signHashTypeForAuthentication:(id)arg0 ;
+(id)copyAllCertIdentities;
+(id)copyAllCertificates;
+(id)copyAuthenticationProtocolForAuthMethod:(NSUInteger)arg0 authData:(id)arg1 ;
+(id)copyDHKeys:(NSUInteger)arg0 ;
+(id)copyDataFromPersistentReference:(id)arg0 ;
+(id)copyPersistentCertificateDataForCommonName:(id)arg0 matchingCertificateHash:(id)arg1 ;
+(id)copyPersistentDataForCertificate:(struct __SecCertificate *)arg0 ;
+(id)copyPersistentDataForIdentity:(struct __SecIdentity *)arg0 ;
+(id)copyPersistentIdentityDataForCommonName:(id)arg0 ;
+(id)copySignHashDataForSet:(id)arg0 ;
+(id)copySignHashDataForSet:(id)arg0 authentication:(id)arg1 ;
+(id)createBase16EncodedDataForString:(char *)arg0 ;
+(id)createCertificateAuthorityPublicKeyHash:(struct __SecCertificate *)arg0 ;
+(id)createDecryptedData:(id)arg0 algorithm:(id)arg1 key:(id)arg2 iv:(id)arg3 aad:(id)arg4 padDataToKeyLength:(BOOL)arg5 ;
+(id)createEncryptedData:(id)arg0 algorithm:(id)arg1 key:(id)arg2 iv:(id)arg3 encryptionContext:(id)arg4 aad:(id)arg5 padDataToKeyLength:(BOOL)arg6 ;
+(id)createHMACFromData:(id)arg0 key:(id)arg1 integrityAlgorithm:(NSUInteger)arg2 ;
+(id)createHMACFromData:(id)arg0 key:(id)arg1 prfAlgorithm:(NSUInteger)arg2 ;
+(id)createHashFromData:(id)arg0 ;
+(id)createHashFromData:(id)arg0 algorithm:(NSUInteger)arg1 ;
+(id)createHashFromData:(id)arg0 hashAlgorithm:(NSUInteger)arg1 ;
+(id)createIVForEncryptionAlgorithm:(id)arg0 encryptContext:(id)arg1 ;
+(id)createNATDetectionHashForInitiatorSPI:(id)arg0 responderSPI:(id)arg1 address:(id)arg2 ;
+(id)createPRFPlusFromData:(id)arg0 key:(id)arg1 prfAlgorithm:(NSUInteger)arg2 outputLength:(unsigned int)arg3 ;
+(id)createRandomWithSize:(unsigned int)arg0 ;
+(id)createSignHashProtocolForAuth:(id)arg0 ;
+(id)prototypeDHKeysForGroup:(NSUInteger)arg0 ;
+(struct __SecCertificate *)copyCertificateFromPersistentData:(id)arg0 ;
+(struct __SecIdentity *)copySecIdentity:(id)arg0 ;
+(struct __SecKey *)copyTrustedKeyForCertificate:(id)arg0 remoteCAArray:(id)arg1 policyRef:(*void)arg2 enableRevocationCheck:(BOOL)arg3 strictRevocationCheck:(BOOL)arg4 ;
+(struct __SecPolicy *)createPolicyWithHostname:(id)arg0 ;


@end


#endif