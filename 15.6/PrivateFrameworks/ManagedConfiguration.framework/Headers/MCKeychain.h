// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCKEYCHAIN_H
#define MCKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface MCKeychain : NSObject



+(*void)copyItemWithPersistentID:(id)arg0 ;
+(*void)copyItemWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 ;
+(*void)copyItemWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(BOOL)itemExistsInKeychain:(*void)arg0 ;
+(BOOL)itemExistsInKeychain:(*void)arg0 useSystemKeychain:(BOOL)arg1 ;
+(BOOL)itemExistsInKeychain:(*void)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 group:(id)arg6 outError:(*id)arg7 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 sysBound:(BOOL)arg8 enforcePersonalPersona:(BOOL)arg9 outError:(*id)arg10 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 sysBound:(BOOL)arg8 outError:(*id)arg9 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 outError:(*id)arg6 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 useSystemKeychain:(BOOL)arg6 outError:(*id)arg7 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(*id)arg5 ;
+(BOOL)setData:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(*id)arg6 ;
+(BOOL)setString:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 group:(id)arg6 outError:(*id)arg7 ;
+(BOOL)setString:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 access:(*void)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 sysBound:(BOOL)arg8 outError:(*id)arg9 ;
+(BOOL)setString:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(*id)arg6 ;
+(BOOL)setString:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(*id)arg7 ;
+(BOOL)setString:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(*id)arg5 ;
+(BOOL)setString:(id)arg0 forService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(*id)arg6 ;
+(id)canonicalPersistentReferenceForItemWithPersistentReference:(id)arg0 inSystemKeychain:(BOOL)arg1 ;
+(id)copyCertificatesWithPersistentIDs:(id)arg0 useSystemKeychain:(BOOL)arg1 ;
+(id)dataFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 outError:(*id)arg5 ;
+(id)dataFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 useSystemKeychain:(BOOL)arg5 enforcePersonalPersona:(BOOL)arg6 outError:(*id)arg7 ;
+(id)dataFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(*id)arg6 ;
+(id)dataFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 outError:(*id)arg4 ;
+(id)dataFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 useSystemKeychain:(BOOL)arg4 outError:(*id)arg5 ;
+(id)saveItem:(*void)arg0 withLabel:(id)arg1 group:(id)arg2 ;
+(id)saveItem:(*void)arg0 withLabel:(id)arg1 group:(id)arg2 useSystemKeychain:(BOOL)arg3 ;
+(id)saveItem:(*void)arg0 withLabel:(id)arg1 group:(id)arg2 useSystemKeychain:(BOOL)arg3 accessibility:(struct __CFString *)arg4 ;
+(id)saveItem:(*void)arg0 withLabel:(id)arg1 group:(id)arg2 useSystemKeychain:(BOOL)arg3 enforcePersonalPersona:(BOOL)arg4 ;
+(id)saveItem:(*void)arg0 withLabel:(id)arg1 group:(id)arg2 useSystemKeychain:(BOOL)arg3 enforcePersonalPersona:(BOOL)arg4 accessibility:(struct __CFString *)arg5 ;
+(id)stringFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 outError:(*id)arg5 ;
+(id)stringFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(*id)arg6 ;
+(id)stringFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 outError:(*id)arg4 ;
+(id)stringFromService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 useSystemKeychain:(BOOL)arg4 outError:(*id)arg5 ;
+(struct __CFDictionary *)_newQueryWithService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(*id)arg6 ;
+(struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg0 ;
+(struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 ;
+(struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg0 ;
+(struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 ;
+(struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;
+(void)removeItemForService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 group:(id)arg4 ;
+(void)removeItemForService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 useSystemKeychain:(BOOL)arg4 enforcePersonalPersona:(BOOL)arg5 group:(id)arg6 ;
+(void)removeItemForService:(id)arg0 account:(id)arg1 label:(id)arg2 description:(id)arg3 useSystemKeychain:(BOOL)arg4 group:(id)arg5 ;
+(void)removeItemWithPersistentID:(id)arg0 ;
+(void)removeItemWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 ;
+(void)removeItemWithPersistentID:(id)arg0 useSystemKeychain:(BOOL)arg1 enforcePersonalPersona:(BOOL)arg2 ;


@end


#endif