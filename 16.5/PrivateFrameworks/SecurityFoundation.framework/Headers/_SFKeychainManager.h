// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFKEYCHAINMANAGER_H
#define _SFKEYCHAINMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_SFCredentialStore.h"

@interface _SFKeychainManager : NSObject

@property (readonly) _SFCredentialStore *credentialStore; // ivar: _credentialStore
@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue; // ivar: _keychainManagerQueue
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue; // ivar: _keychainReplyQueue


+(id)defaultManager;
+(id)defaultOverCommitManager;
-(?)findPrivateKeyWithIdentifier:(?)arg0 certificate:(?)arg1 attributesresult;
-(BOOL)setIdentity:(id)arg0 forIdentifier:(id)arg1 accessPolicy:(id)arg2 error:(*id)arg3 ;
-(id)_symmetricKeyAttributesForIdentifier:(id)arg0 accessPolicy:(id)arg1 key:(id)arg2 ;
-(id)foundPrivateKey:(struct __SecKey *)arg0 certificate:(id)arg1 ;
-(id)identityForIdentifier:(id)arg0 ;
-(id)initManager;
-(id)initOverCommitManager;
-(id)publicKeyLookupWithIdentifier:(id)arg0 certificate:(id)arg1 result:(int)arg2 ;
-(int)generateAttributesForIdentityAndAddToKeychain:(id)arg0 forIdentifier:(id)arg1 accessPolicy:(id)arg2 ;
-(struct __CFDictionary *)_certificateAttributesForIdentityIdentifier:(id)arg0 accessPolicy:(id)arg1 ;
-(struct __CFDictionary *)_commonKeyAttributesForIdentityIdentifier:(id)arg0 accessPolicy:(id)arg1 key:(id)arg2 ;
-(struct __CFDictionary *)_privateKeyAttributesForIdentityIdentifier:(id)arg0 accessPolicy:(id)arg1 key:(id)arg2 ;
-(struct __CFDictionary *)_publicKeyAttributesForIdentityIdentifier:(id)arg0 accessPolicy:(id)arg1 key:(id)arg2 ;
-(void)dataForIdentifier:(id)arg0 resultHandler:(id)arg1 ;
-(void)identitiesFilteredBy:(id)arg0 resultHandler:(id)arg1 ;
-(void)identityForIdentifier:(id)arg0 resultHandler:(id)arg1 ;
-(void)keyForIdentifier:(id)arg0 specifier:(id)arg1 resultHandler:(id)arg2 ;
-(void)keysFilteredBy:(id)arg0 resultHandler:(id)arg1 ;
-(void)removeItemWithIdentifier:(id)arg0 resultHandler:(id)arg1 ;
-(void)setData:(id)arg0 forIdentifier:(id)arg1 accessPolicy:(id)arg2 resultHandler:(id)arg3 ;
-(void)setIdentity:(id)arg0 forIdentifier:(id)arg1 accessPolicy:(id)arg2 resultHandler:(id)arg3 ;
-(void)setKey:(id)arg0 forIdentifier:(id)arg1 accessPolicy:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif