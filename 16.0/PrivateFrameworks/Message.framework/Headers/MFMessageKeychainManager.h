// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEKEYCHAINMANAGER_H
#define MFMESSAGEKEYCHAINMANAGER_H


#import <Foundation/Foundation.h>


@interface MFMessageKeychainManager : NSObject



+(BOOL)_matchSSLClientIdentity:(struct __SecIdentity *)arg0 withHostname:(id)arg1 ;
+(BOOL)_validateIdentity:(struct __SecIdentity *)arg0 forAddress:(id)arg1 policy:(struct __SecPolicy *)arg2 usage:(unsigned int)arg3 error:(*id)arg4 ;
+(BOOL)addPassword:(id)arg0 forServiceName:(id)arg1 accountName:(id)arg2 keychainAccessibility:(*void)arg3 synchronizable:(BOOL)arg4 error:(*id)arg5 ;
+(BOOL)validateEncryptionIdentity:(struct __SecIdentity *)arg0 forAddress:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateSigningIdentity:(struct __SecIdentity *)arg0 forAddress:(id)arg1 error:(*id)arg2 ;
+(id)_addCertificate:(struct __SecCertificate *)arg0 persistent:(*id)arg1 ;
+(id)_addPersistentMapping:(id)arg0 forAddress:(id)arg1 ;
+(id)_copyAllIdentitiesFromSyncableKeychain:(BOOL)arg0 withError:(*id)arg1 usingBlock:(id)arg2 ;
+(id)_copyAllIdentitiesWithError:(*id)arg0 usingBlock:(id)arg1 ;
+(id)_passwordForGenericAccount:(id)arg0 service:(id)arg1 error:(*id)arg2 ;
+(id)_passwordForHost:(id)arg0 username:(id)arg1 port:(int)arg2 keychainProtocol:(struct __CFString *)arg3 ;
+(id)_removeCertificateForPersistent:(id)arg0 ;
+(id)copyAllEncryptionIdentitiesForAddress:(id)arg0 error:(*id)arg1 ;
+(id)copyAllSigningIdentitiesForAddress:(id)arg0 error:(*id)arg1 ;
+(id)newTrustManager;
+(id)passwordForHost:(id)arg0 username:(id)arg1 port:(int)arg2 keychainProtocol:(*void)arg3 ;
+(id)passwordForServiceName:(id)arg0 accountName:(id)arg1 ;
+(id)passwordForServiceName:(id)arg0 accountName:(id)arg1 error:(*id)arg2 ;
+(id)passwordForServiceName:(id)arg0 accountName:(id)arg1 synchronizable:(BOOL)arg2 error:(*id)arg3 ;
+(id)persistentReferenceForIdentity:(struct __SecIdentity *)arg0 error:(*id)arg1 ;
+(id)saveEncryptionCertificate:(struct __SecCertificate *)arg0 forAddress:(id)arg1 ;
+(struct __SecCertificate *)_copyCertificateForPersistent:(id)arg0 error:(*id)arg1 ;
+(struct __SecCertificate *)copyEncryptionCertificateForAddress:(id)arg0 error:(*id)arg1 ;
+(struct __SecIdentity *)copyClientSSLIdentityForHostName:(id)arg0 error:(*id)arg1 ;
+(struct __SecIdentity *)copyIdentityForPersistentReference:(id)arg0 error:(*id)arg1 ;
+(struct __SecPolicy *)copySMIMEEncryptionPolicyForAddress:(id)arg0 ;
+(struct __SecPolicy *)copySMIMESigningPolicyForAddress:(id)arg0 ;
+(void)initialize;
+(void)removePasswordForHost:(id)arg0 username:(id)arg1 port:(int)arg2 keychainProtocol:(*void)arg3 ;
+(void)removePasswordForServiceName:(id)arg0 accountName:(id)arg1 ;
+(void)setPassword:(id)arg0 forHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(*void)arg4 keychainAccessibility:(*void)arg5 ;
+(void)setPassword:(id)arg0 forServiceName:(id)arg1 accountName:(id)arg2 keychainAccessibility:(*void)arg3 ;


@end


#endif