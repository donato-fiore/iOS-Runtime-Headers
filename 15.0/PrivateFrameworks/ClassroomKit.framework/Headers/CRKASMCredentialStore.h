// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCREDENTIALSTORE_H
#define CRKASMCREDENTIALSTORE_H

@class NSDictionary;
@protocol CRKKeychain;

#import <Foundation/Foundation.h>

#import "CRKAnnotatedCredentialStore.h"
#import "CRKASMCredentialManifest.h"

@interface CRKASMCredentialStore : NSObject

@property (readonly, nonatomic) CRKAnnotatedCredentialStore *certificateAnnotatedStore; // ivar: _certificateAnnotatedStore
@property (readonly, copy, nonatomic) CRKASMCredentialManifest *certificateManifest;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, nonatomic) CRKAnnotatedCredentialStore *identityAnnotatedStore; // ivar: _identityAnnotatedStore
@property (readonly, copy, nonatomic) CRKASMCredentialManifest *identityManifest;
@property (readonly, nonatomic) NSObject<CRKKeychain> *keychain; // ivar: _keychain


-(id)addCertificate:(id)arg0 entry:(id)arg1 ;
-(id)addCertificate:(id)arg0 forUserIdentifier:(id)arg1 ;
-(id)addCertificates:(id)arg0 forUserIdentifier:(id)arg1 ;
-(id)addEntriesByCertificate:(id)arg0 ;
-(id)addIdentity:(id)arg0 entry:(id)arg1 ;
-(id)addIdentity:(id)arg0 forUserIdentifier:(id)arg1 ;
-(id)certificateWithPersistentID:(id)arg0 ;
-(id)identityWithPersistentID:(id)arg0 ;
-(id)initWithKeychain:(id)arg0 accessGroup:(id)arg1 certificateManifestStorageKey:(id)arg2 identityManifestStorageKey:(id)arg3 ;
-(id)makeCertificateWithCommonNamePrefix:(id)arg0 userIdentifier:(id)arg1 ;
-(id)makeEntryWithCertificate:(id)arg0 userIdentifier:(id)arg1 ;
-(id)makeIdentityWithCommonNamePrefix:(id)arg0 userIdentifier:(id)arg1 ;
-(void)clearCertificates;
-(void)clearIdentities;
-(void)forgetCertificatesWithPersistentIDs:(id)arg0 ;
-(void)forgetIdentitiesWithPersistentIDs:(id)arg0 ;
-(void)removeCertificatesWithPersistentIDs:(id)arg0 ;
-(void)removeIdentitiesWithPersistentIDs:(id)arg0 ;


@end


#endif