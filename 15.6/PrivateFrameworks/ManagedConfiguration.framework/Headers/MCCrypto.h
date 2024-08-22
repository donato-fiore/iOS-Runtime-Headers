// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCCRYPTO_H
#define MCCRYPTO_H


#import <Foundation/Foundation.h>


@interface MCCrypto : NSObject



+(?)objectFromEncryptedData:(?)arg0 outCertificateoutError;
+(BOOL)isValidPKCS12Data:(id)arg0 ;
+(id)_decryptionFailedErrorWithUnderlyingError:(id)arg0 ;
+(id)createAndStoreNewActivationLockBypassCodeAndHash;
+(id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+(id)storeActivationLockBypassCode:(id)arg0 hash:(id)arg1 ;
+(id)storedActivationLockBypassCodeHash;
+(id)storedActivationLockBypassCodeWithOutError:(*id)arg0 ;
+(struct __SecCertificate *)copyCertificateRefFromPEMData:(id)arg0 ;
+(struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(id)arg0 ;
+(void)clearStoredActivationLockBypassCode;
+(void)clearStoredActivationLockHash;
+(void)createNewActivationLockBypassCodeOutCode:(char *)arg0 outRawBytes:(char *)arg1 outHash:(char *)arg2 ;


@end


#endif