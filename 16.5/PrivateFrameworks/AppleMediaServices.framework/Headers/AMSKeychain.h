// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSKEYCHAIN_H
#define AMSKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface AMSKeychain : NSObject



+(*unk)secItemAddFunc;
+(*unk)secItemCopyMatchingFunc;
+(BOOL)_generateLegacyKeypairForOptions:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteCertificateChainWithOptions:(id)arg0 error:(*id)arg1 ;
+(BOOL)deleteKeyPairWithOptions:(id)arg0 error:(*id)arg1 ;
+(BOOL)performForwardKeyMigrationForDSID:(id)arg0 forceMigration:(BOOL)arg1 ;
+(BOOL)stashResumptionHeaders:(id)arg0 error:(*id)arg1 ;
+(BOOL)storePrimaryCert:(struct __SecCertificate *)arg0 intermediateCert:(struct __SecCertificate *)arg1 privateKey:(struct __SecKey *)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)_certificatePrivateKeyLabelForOptions:(id)arg0 ;
+(id)_extendedConstraintsWithOptions:(id)arg0 ;
+(id)_legacyAttestationForOptions:(id)arg0 error:(*id)arg1 ;
+(id)_primaryConstraints;
+(id)_primaryConstraintsForMac;
+(id)_primaryConstraintsForWatch;
+(id)_primaryConstraintsWithOptions:(id)arg0 ;
+(id)_resumptionHeadersQuery;
+(id)_ssCertificateKeychainLabelForAccount:(id)arg0 options:(id)arg1 ;
+(id)_ssKeychainLabelForAccount:(id)arg0 options:(id)arg1 ;
+(id)certificateChainStringsForOptions:(id)arg0 error:(*id)arg1 ;
+(id)certificateKeychainLabelsForOptions:(id)arg0 ;
+(id)keychainLabelForOptions:(id)arg0 ;
+(id)legacyAttestationForOptions:(id)arg0 error:(*id)arg1 ;
+(id)resumptionHeaders;
+(struct __SecAccessControl *)copyAccessControlRefWithAccount:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(struct __SecAccessControl *)createAccessControlRefWithOptions:(id)arg0 error:(*id)arg1 ;
+(struct __SecKey *)_copyLegacyPrivateKeyForOptions:(id)arg0 error:(*id)arg1 ;
+(struct __SecKey *)_copyLegacyPublicKeyForOptions:(id)arg0 error:(*id)arg1 ;
+(struct __SecKey *)copyCertificatePrivateKeyWithContext:(id)arg0 account:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(struct __SecKey *)copyPrivateKeyWithContext:(id)arg0 account:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(struct __SecKey *)copyPrivateKeyWithContext:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(struct __SecKey *)copyPublicKeyForAccount:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(struct __SecKey *)copyPublicKeyForOptions:(id)arg0 error:(*id)arg1 ;
+(void)_deleteResumptionHeaders;
+(void)setSecItemAddFunc:(*unk)arg0 ;
+(void)setSecItemCopyMatchingFunc:(*unk)arg0 ;
+(void)stashResumptionHeaders:(id)arg0 ;


@end


#endif