// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICKEYCHAINUTILITIES_H
#define ICKEYCHAINUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICKeychainUtilities : NSObject



+(BOOL)addAccountToBiometricID:(id)arg0 ;
+(BOOL)addDevicePasscodeGuardedItem:(id)arg0 forIdentifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)addEncryptionKeyWithoutGuardianIfBiometricIDSupportedAndEnabled:(id)arg0 forIdentifier:(id)arg1 accountID:(id)arg2 error:(*id)arg3 ;
+(BOOL)addNoteToBiometricID:(id)arg0 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg0 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg0 checkPolicyDomainState:(BOOL)arg1 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg0 strict:(BOOL)arg1 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg0 strict:(BOOL)arg1 checkPolicyDomainState:(BOOL)arg2 ;
+(BOOL)faceIDNotesSettingEnabledForAccountID:(id)arg0 ;
+(BOOL)removeAllFromBiometricID;
+(BOOL)touchIDEnabledForSharedPasswordForAccountIDs:(id)arg0 strict:(BOOL)arg1 ;
+(BOOL)touchIDNotesSettingEnabledForAccountID:(id)arg0 ;
+(id)faceIDEnabledKeyForAccountID:(id)arg0 ;
+(id)itemForObject:(id)arg0 ;
+(id)touchIDEnabledKeyForAccountID:(id)arg0 ;
+(id)validatedItemForObject:(id)arg0 ;
+(void)removeAccountFromBiometricID:(id)arg0 andRemoveNotes:(BOOL)arg1 ;
+(void)removeNoteFromBiometricID:(id)arg0 ;
+(void)setFaceIDEnabled:(BOOL)arg0 forAccountID:(id)arg1 ;
+(void)setTouchIDEnabled:(BOOL)arg0 forAccountID:(id)arg1 ;


@end


#endif