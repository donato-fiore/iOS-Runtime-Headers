// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCKEYCHAIN_H
#define DMCKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface DMCKeychain : NSObject



+(*void)copyItemWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(BOOL)deleteAttestationCertWithGroup:(id)arg0 label:(id)arg1 ;
+(BOOL)deleteAttestationKeyWithGroup:(id)arg0 label:(id)arg1 ;
+(BOOL)deleteAttestationMetadataWithGroup:(id)arg0 service:(id)arg1 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 sysBound:(BOOL)arg8 enforcePersonalPersona:(BOOL)arg9 outError:(*id)arg10 ;
+(BOOL)storeAttestationCert:(struct __SecCertificate *)arg0 withGroup:(id)arg1 label:(id)arg2 ;
+(BOOL)storeAttestationKey:(struct __SecKey *)arg0 withGroup:(id)arg1 label:(id)arg2 ;
+(BOOL)storeAttestationMetadata:(id)arg0 withGroup:(id)arg1 service:(id)arg2 ;
+(id)copyCertificatesWithPersistentIDs:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(id)dataFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 useSystemKeychain:(BOOL)arg5 enforcePersonalPersona:(BOOL)arg6 outError:(*id)arg7 ;
+(id)dataFromString:(id)arg0 ;
+(id)retrieveAttestationMetadataWithGroup:(id)arg0 service:(id)arg1 ;
+(id)saveItem:(*void)arg0 withLabel:(id)arg1 group:(id)arg2 useSystemKeychain:(BOOL)arg3 enforcePersonalPersona:(BOOL)arg4 ;
+(id)stringFromServiceData:(id)arg0 ;
+(struct __CFDictionary *)_newQueryWithService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(*id)arg6 ;
+(struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(struct __SecCertificate *)retrieveAttestationCertWithGroup:(id)arg0 label:(id)arg1 ;
+(struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(struct __SecIdentity *)retrieveAttestationIdentityWithGroup:(id)arg0 label:(id)arg1 ;
+(struct __SecKey *)retrieveAttestationKeyWithGroup:(id)arg0 label:(id)arg1 ;
+(void)removeItemForService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 useSystemKeychain:(BOOL)arg4 enforcePersonalPersona:(BOOL)arg5 group:(id)arg6 ;


@end


#endif