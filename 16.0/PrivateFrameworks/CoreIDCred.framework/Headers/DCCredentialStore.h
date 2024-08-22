// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCCREDENTIALSTORE_H
#define DCCREDENTIALSTORE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DCCredentialStoreClient.h"

@interface DCCredentialStore : NSObject

@property (retain) DCCredentialStoreClient *client; // ivar: _client
@property BOOL hasBeenConfigured; // ivar: _hasBeenConfigured
@property (retain) NSArray *partitions; // ivar: _partitions


-(id)initWithPartitions:(id)arg0 ;
-(void)allElementsOfCredential:(id)arg0 authData:(id)arg1 completion:(id)arg2 ;
-(void)allElementsOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)associateExternalPresentmentKeyWithCredential:(id)arg0 publicKeyIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)authorizeRemoteKeySigningKeyWithCredential:(id)arg0 remoteKey:(id)arg1 completion:(id)arg2 ;
-(void)checkCompletenessOfCredential:(id)arg0 completion:(id)arg1 ;
// -(void)configureIfNeededWithContinuation:(id)arg0 errorHandler:(unk)arg1  ;
-(void)createCredentialInPartition:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)credentialIdentifierForPublicKeyIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)credentialIdentifiers:(id)arg0 ;
-(void)credentialIdentifiersInPartitions:(id)arg0 completion:(id)arg1 ;
-(void)credentialIdentifiersInPartitions:(id)arg0 docType:(id)arg1 completion:(id)arg2 ;
-(void)deleteCredential:(id)arg0 completion:(id)arg1 ;
-(void)elementsOfCredential:(id)arg0 elementIdentifiers:(id)arg1 authData:(id)arg2 completion:(id)arg3 ;
-(void)elementsOfCredential:(id)arg0 elementIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)eraseLegacySEKeySlot:(NSInteger)arg0 completion:(id)arg1 ;
-(void)generateDeviceEncryptionKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)generateKeySigningKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)generatePresentmentKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)occupiedLegacySEKeySlotsWithCompletion:(id)arg0 ;
-(void)payloadAuthACLForCredential:(id)arg0 completion:(id)arg1 ;
-(void)payloadsOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)propertiesOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)replacePayloadOfCredential:(id)arg0 withPayload:(id)arg1 format:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)setStateOfCredential:(id)arg0 to:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif