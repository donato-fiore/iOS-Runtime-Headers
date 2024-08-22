// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCRYPTOR_H
#define ICCRYPTOR_H


#import <Foundation/Foundation.h>


@interface ICCryptor : NSObject



+(BOOL)authenticateWithPassphrase:(id)arg0 forAccount:(id)arg1 ;
+(BOOL)authenticateWithPassphrase:(id)arg0 forNote:(id)arg1 ;
+(BOOL)authenticateWithPassphrase:(id)arg0 forObject:(id)arg1 ;
+(BOOL)encryptFileFromURL:(id)arg0 toURL:(id)arg1 forObject:(id)arg2 ;
+(BOOL)hasAnyCachedMainKeys;
+(BOOL)isAuthenticatedForAccount:(id)arg0 ;
+(BOOL)isAuthenticatedForNote:(id)arg0 ;
+(BOOL)isAuthenticatedForObject:(id)arg0 ;
+(BOOL)isPassphrase:(id)arg0 correctForAccount:(id)arg1 ;
+(BOOL)isPassphrase:(id)arg0 correctForNote:(id)arg1 ;
+(BOOL)isPassphrase:(id)arg0 correctForObject:(id)arg1 ;
+(BOOL)isPassphrase:(id)arg0 correctForObject:(id)arg1 usingKeysFromObject:(id)arg2 ;
+(BOOL)key:(id)arg0 decryptsObject:(id)arg1 ;
+(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 oldPassphrase:(id)arg2 forAccount:(id)arg3 ;
+(BOOL)unauthenticatedAttachmentsUsingSamePassphraseExistForNote:(id)arg0 passphrase:(id)arg1 ;
+(BOOL)updateAllNotesWithOldPassphrase:(id)arg0 toAccountPassphrase:(id)arg1 fromAccount:(id)arg2 progress:(id)arg3 ;
+(BOOL)userHasPassphraseSetForAccount:(id)arg0 ;
+(BOOL)userHasPassphraseSetForNote:(id)arg0 ;
+(BOOL)userHasPassphraseSetForObject:(id)arg0 ;
+(CGFloat)timeIntervalBeforeClearingCachedKeys;
+(id)allCachedKeys;
+(id)cachedMainKeyForIdentifier:(id)arg0 ;
+(id)cachedMainKeyForObject:(id)arg0 ;
+(id)dataFromHexString:(id)arg0 ;
+(id)decryptData:(id)arg0 forObject:(id)arg1 ;
+(id)decryptWithMainKeyOfObject:(id)arg0 decryptable:(id)arg1 fallbackAttemptSuccessCleanupHandler:(id)arg2 ;
// +(id)decryptWithMainKeyOfObject:(id)arg0 decryptablePreparationBlock:(id)arg1 fallbackAttemptSuccessCleanupHandler:(unk)arg2  ;
+(id)decryptedDataFromFileURL:(id)arg0 forObject:(id)arg1 ;
+(id)mainKeysByAccountIdentifier;
+(id)newWrappedKeyForObject:(id)arg0 ;
+(id)unwrappedKeyForObject:(id)arg0 ;
+(id)wrapKey:(id)arg0 withMainKey:(id)arg1 ;
+(void)cacheMainKeyWithPassphrase:(id)arg0 ;
+(void)cacheMainKeyWithPassphrase:(id)arg0 forAccount:(id)arg1 ;
+(void)cacheMainKeyWithPassphrase:(id)arg0 forNote:(id)arg1 ;
+(void)cacheMainKeyWithPassphrase:(id)arg0 forObject:(id)arg1 ;
+(void)cachedKeyClearingTimerDidFire;
+(void)clearAllCachedMainKeys;
// +(void)encryptWithMainKeyOfObject:(id)arg0 dataPreparationBlock:(id)arg1 failureHandler:(unk)arg2 successHandler:(id)arg3  ;
// +(void)encryptWithMainKeyOfObject:(id)arg0 dataToEncrypt:(id)arg1 failureHandler:(id)arg2 successHandler:(unk)arg3  ;
+(void)fixDivergedAttachmentsForNote:(id)arg0 usingPassphrase:(id)arg1 ;
+(void)fixNoteWithDivergedKeyFromAccountPassphrase:(id)arg0 usingPassphrase:(id)arg1 ;
+(void)fixUpAnyNotesToMatchAccountUsingPassphrase:(id)arg0 ;
+(void)fixUpAnyNotesToMatchAccountUsingPassphraseIfNecessary:(id)arg0 ;
+(void)refaultAllPasswordProtectedObjects;
+(void)rewrapAndDivergeKeyForObject:(id)arg0 usingPassphrase:(id)arg1 ;
+(void)rewrapKeyForObject:(id)arg0 newMainKey:(id)arg1 salt:(id)arg2 iterationCount:(unsigned int)arg3 hint:(id)arg4 ;
+(void)rewrapNote:(id)arg0 newMainKey:(id)arg1 salt:(id)arg2 iterationCount:(unsigned int)arg3 hint:(id)arg4 ;
+(void)setCachedMainKey:(id)arg0 forIdentifier:(id)arg1 bioAuthAccountID:(id)arg2 ;
+(void)setCachedMainKey:(id)arg0 forObject:(id)arg1 ;
+(void)startOrExtendCachedKeyClearingTimer;
+(void)startOrExtendCachedKeyClearingTimerForModes:(id)arg0 ;
+(void)transferSharedPassphraseFromAccount:(id)arg0 toAccount:(id)arg1 ;


@end


#endif