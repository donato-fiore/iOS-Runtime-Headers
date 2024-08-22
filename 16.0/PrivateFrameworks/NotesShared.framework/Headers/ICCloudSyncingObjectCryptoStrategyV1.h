// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCLOUDSYNCINGOBJECTCRYPTOSTRATEGYV1_H
#define ICCLOUDSYNCINGOBJECTCRYPTOSTRATEGYV1_H

@class NSString, NSData;
@protocol ICCloudSyncingObjectCryptoStrategy;


#import "ICCryptoStrategyBase.h"

@interface ICCloudSyncingObjectCryptoStrategyV1 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSData *fileURLEncryptionCryptoInitialzationVector;
@property (readonly) NSData *fileURLEncryptionCryptoTag;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


+(id)fromObject:(id)arg0 ;
-(BOOL)canKeyDecrypt:(id)arg0 ;
-(BOOL)encryptFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)encryptFileFromURL:(id)arg0 toURL:(id)arg1 setTagAndIVHandler:(id)arg2 ;
-(BOOL)encryptSidecarFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)generateWrappedKey;
-(BOOL)isPassphraseCorrect:(id)arg0 ;
-(BOOL)isPassphraseCorrect:(id)arg0 usingKeysFromObject:(id)arg1 ;
-(id)decryptData:(id)arg0 ;
-(id)decryptSidecarData:(id)arg0 ;
-(id)decryptedDataFromFileURL:(id)arg0 ;
-(id)encryptSidecarData:(id)arg0 ;
-(id)unwrappedKey;
-(void)decryptAndMergeEncryptedJSON:(id)arg0 ;
-(void)initializeCryptoPropertiesFromObject:(id)arg0 ;
-(void)loadDecryptedValuesIfNecessary;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)rewrapAndDivergeKeyUsingPassphrase:(id)arg0 ;
-(void)rewrapKeyWithNewMainKey:(id)arg0 salt:(id)arg1 iterationCount:(NSUInteger)arg2 hint:(id)arg3 ;
-(void)saveEncryptedJSON;


@end


#endif