// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTAPPLICATIONPUBLICKEYSTORE_H
#define KTAPPLICATIONPUBLICKEYSTORE_H

@class NSString, NSData, NSDate, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "TransparencyTrustedKeyStore.h"
#import "VRFPublicKey.h"

@interface KTApplicationPublicKeyStore : NSObject

@property (retain) TransparencyTrustedKeyStore *appSmtKeyStore; // ivar: _appSmtKeyStore
@property (retain) TransparencyTrustedKeyStore *appSthKeyStore; // ivar: _appSthKeyStore
@property (retain) NSString *application; // ivar: _application
@property (readonly) BOOL inResetWindow;
@property (retain) NSData *patConfigProof; // ivar: _patConfigProof
@property NSUInteger patLogBeginningMs; // ivar: _patLogBeginningMs
@property (readonly) BOOL ready;
@property (retain) NSDate *receiptTime; // ivar: _receiptTime
@property (retain) NSData *tltConfigProof; // ivar: _tltConfigProof
@property (retain) TransparencyTrustedKeyStore *tltKeyStore; // ivar: _tltKeyStore
@property NSUInteger tltLogBeginningMs; // ivar: _tltLogBeginningMs
@property (retain) NSArray *trustedAppLeafs; // ivar: _trustedAppLeafs
@property (retain) NSDictionary *trustedAppSigningKeys; // ivar: _trustedAppSigningKeys
@property (retain) NSArray *trustedIntermediates; // ivar: _trustedIntermediates
@property (retain) NSArray *trustedTltLeafs; // ivar: _trustedTltLeafs
@property (retain) NSDictionary *trustedTltSigningKeys; // ivar: _trustedTltSigningKeys
@property (retain) VRFPublicKey *vrfKey; // ivar: _vrfKey
@property int vrfType; // ivar: _vrfType


-(BOOL)detectEpochChangeAndResetData:(NSUInteger)arg0 patLogBeginningMs:(NSUInteger)arg1 dataStore:(id)arg2 error:(*id)arg3 ;
-(BOOL)procesPatConfigProof:(id)arg0 dataStore:(id)arg1 saveTreeHeads:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)processDiskState:(id)arg0 dataStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)processKeyData:(id)arg0 tltLeafs:(id)arg1 intermediates:(id)arg2 patConfigProof:(id)arg3 tltConfigProof:(id)arg4 dataStore:(id)arg5 saveTreeHeads:(BOOL)arg6 error:(*id)arg7 ;
-(BOOL)processPublicKeysResponse:(id)arg0 dataStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)processTltConfigProof:(id)arg0 dataStore:(id)arg1 saveTreeHeads:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)verifyCertificates:(id)arg0 intermediates:(id)arg1 application:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyConfigProof:(id)arg0 dataStore:(id)arg1 saveTreeHeads:(BOOL)arg2 error:(*id)arg3 ;
-(id)copyKeyStoreState;
-(id)copyVRFKeyFromConfigProof:(id)arg0 error:(*id)arg1 ;
-(id)createTLTApplicationPublicKeyStore;
-(id)createTrustedSthKeyStoreFromProofSPKI:(id)arg0 signingKeysMap:(id)arg1 error:(*id)arg2 ;
-(id)initWithApplication:(id)arg0 dataStore:(id)arg1 diskState:(id)arg2 error:(*id)arg3 ;
-(id)initWithApplication:(id)arg0 dataStore:(id)arg1 response:(id)arg2 error:(*id)arg3 ;
-(void)clearState:(*id)arg0 ;
-(void)notifyTreeResetDetected:(BOOL)arg0 ;
-(void)startKeyStoreStateSampler;


@end


#endif