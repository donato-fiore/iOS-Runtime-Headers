// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCRYPTOR_H
#define ICCRYPTOR_H


#import <Foundation/Foundation.h>


@interface ICCryptor : NSObject



+(BOOL)authenticateWithPassphrase:(id)arg0 forObject:(id)arg1 ;
+(BOOL)hasAnyCachedMainKeys;
+(BOOL)isAuthenticatedWithDevicePassword;
+(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 oldPassphrase:(id)arg2 forAccount:(id)arg3 ;
+(BOOL)unauthenticatedAttachmentsUsingSamePassphraseExistForNote:(id)arg0 passphrase:(id)arg1 ;
+(CGFloat)timeIntervalBeforeClearingCachedKeys;
+(id)allCachedKeys;
+(id)cachedMainKeyForIdentifier:(id)arg0 ;
+(id)cachedMainKeyForObject:(id)arg0 ;
+(id)dataFromHexString:(id)arg0 ;
+(id)decryptWithMainKeyOfObject:(id)arg0 decryptable:(id)arg1 fallbackAttemptSuccessCleanupHandler:(id)arg2 ;
// +(id)decryptWithMainKeyOfObject:(id)arg0 decryptablePreparationBlock:(id)arg1 fallbackAttemptSuccessCleanupHandler:(unk)arg2  ;
+(id)mainKeysByAccountIdentifier;
+(id)wrapKey:(id)arg0 withMainKey:(id)arg1 ;
+(void)authenticateNotesWithPassphrase:(id)arg0 inAccount:(id)arg1 ;
+(void)cacheMainKeyWithPassphrase:(id)arg0 forObject:(id)arg1 ;
+(void)cachedKeyClearingTimerDidFire;
+(void)clearAllCachedMainKeys;
// +(void)encryptWithMainKeyOfObject:(id)arg0 dataPreparationBlock:(id)arg1 failureHandler:(unk)arg2 successHandler:(id)arg3  ;
// +(void)encryptWithMainKeyOfObject:(id)arg0 dataToEncrypt:(id)arg1 failureHandler:(id)arg2 successHandler:(unk)arg3  ;
+(void)fixUpAnyNotesToMatchAccountUsingPassphrase:(id)arg0 ;
+(void)fixUpAnyNotesToMatchAccountUsingPassphraseIfNecessary:(id)arg0 ;
+(void)refaultAllPasswordProtectedObjects;
+(void)setAuthenticatedWithDevicePassword:(BOOL)arg0 ;
+(void)setCachedMainKey:(id)arg0 forIdentifier:(id)arg1 bioAuthAccountID:(id)arg2 ;
+(void)setCachedMainKey:(id)arg0 forObject:(id)arg1 ;
+(void)startOrExtendCachedKeyClearingTimer;
+(void)startOrExtendCachedKeyClearingTimerForModes:(id)arg0 ;


@end


#endif