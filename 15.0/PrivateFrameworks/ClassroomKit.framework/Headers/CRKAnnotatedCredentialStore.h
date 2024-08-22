// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKANNOTATEDCREDENTIALSTORE_H
#define CRKANNOTATEDCREDENTIALSTORE_H

@class NSString, NSDictionary;
@protocol CRKKeychain;

#import <Foundation/Foundation.h>

#import "CRKAnnotatedCredentialManifest.h"

@interface CRKAnnotatedCredentialStore : NSObject

@property (readonly, copy, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (readonly, nonatomic) id *addBlock; // ivar: _addBlock
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, nonatomic) id *fetchBlock; // ivar: _fetchBlock
@property (readonly, nonatomic) NSObject<CRKKeychain> *keychain; // ivar: _keychain
@property (readonly, copy, nonatomic) CRKAnnotatedCredentialManifest *manifest;
@property (readonly, copy, nonatomic) NSString *manifestStorageKey; // ivar: _manifestStorageKey


+(id)certificateStoreWithKeychain:(id)arg0 accessGroup:(id)arg1 manifestStorageKey:(id)arg2 ;
+(id)identityStoreWithKeychain:(id)arg0 accessGroup:(id)arg1 manifestStorageKey:(id)arg2 ;
-(id)addCredential:(id)arg0 manifest:(id)arg1 ;
-(id)addCredentials:(id)arg0 ;
-(id)credentialWithPersistentID:(id)arg0 ;
-(id)dataForStorageKey:(id)arg0 ;
// -(id)initWithKeychain:(id)arg0 accessGroup:(id)arg1 manifestStorageKey:(id)arg2 addBlock:(id)arg3 fetchBlock:(unk)arg4  ;
-(id)storedManifest;
-(id)storedManifestData;
-(void)forgetCredentialsWithPersistentIDs:(id)arg0 ;
-(void)removeCredentialsWithPersistentIDs:(id)arg0 ;
-(void)removePersistentIDsFromKeychain:(id)arg0 ;
-(void)setData:(id)arg0 forStorageKey:(id)arg1 ;
-(void)setStoredManifest:(id)arg0 ;
-(void)setStoredManifestData:(id)arg0 ;


@end


#endif