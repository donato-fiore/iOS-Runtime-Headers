// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCLOUDSYNCINGOBJECTCRYPTOSTRATEGYV2_H
#define ICCLOUDSYNCINGOBJECTCRYPTOSTRATEGYV2_H

@class NSString;
@protocol ICCloudSyncingObjectCryptoStrategy;


#import "ICCryptoStrategyBase.h"

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>



@property (readonly) BOOL canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intrinsicNotesVersion;
@property (readonly) BOOL isAuthenticated;
@property (readonly) Class superclass;


+(id)accountKeyByIdentifier;
-(BOOL)canKeyDecrypt:(id)arg0 ;
-(BOOL)encryptFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)encryptSidecarFileFromURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)isAuthenticatedForBothObjectAndRecord:(id)arg0 ;
-(BOOL)isInICloudAccount;
-(BOOL)isPassphraseCorrect:(id)arg0 ;
-(BOOL)isRecordAuthenticated:(id)arg0 ;
-(BOOL)serialize:(id)arg0 toURL:(id)arg1 ;
-(BOOL)shouldSpoofAccountKey;
-(id)accountDsid;
-(id)accountIdentifier;
-(id)accountKeyWithIdentifier:(id)arg0 createIfNotExist:(BOOL)arg1 ;
-(id)currentAccountKeyIdentifier;
-(id)decryptData:(id)arg0 ;
-(id)decryptObject:(id)arg0 ;
-(id)decryptSidecarData:(id)arg0 ;
-(id)decryptedDataFromFileURL:(id)arg0 ;
-(id)encryptData:(id)arg0 ;
-(id)encryptSidecarData:(id)arg0 ;
-(id)encryptedDataFromRecord:(id)arg0 ;
-(id)unwrappedKey;
-(void)decryptAndMergeEncryptedJSON:(id)arg0 ;
-(void)initializeCryptoPropertiesFromObject:(id)arg0 ;
-(void)loadDecryptedValuesIfNecessary;
-(void)mergeEncryptedDataFromRecord:(id)arg0 ;
-(void)rewrapAndDivergeKeyUsingPassphrase:(id)arg0 ;
-(void)saveEncryptedJSON;
-(void)serializeToEncryptedValuesJSON:(id)arg0 ;


@end


#endif