// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICKEYCHAINUTILITIES_H
#define ICKEYCHAINUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICKeychainUtilities : NSObject



+(BOOL)_removeAllFromBiometricIDAssumeEncryptionKeyTypeIsUsed;
+(BOOL)_removeItemForIdentifier:(id)arg0 accessGroupIdentifier:(id)arg1 itemType:(NSUInteger)arg2 accountIdentifier:(id)arg3 error:(*id)arg4 ;
+(BOOL)_updateItemForIdentifier:(id)arg0 accessGroupIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 attributesToUpdate:(id)arg3 error:(*id)arg4 ;
+(BOOL)addDevicePasscodeGuardedItem:(id)arg0 forIdentifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)addEncryptionKeyWithoutGuardianIfBiometricIDSupportedAndEnabled:(id)arg0 forIdentifier:(id)arg1 accountID:(id)arg2 error:(*id)arg3 ;
+(BOOL)addItem:(id)arg0 forIdentifier:(id)arg1 secAccessControlObject:(id)arg2 itemType:(NSUInteger)arg3 acccountIdentifier:(id)arg4 error:(*id)arg5 ;
+(BOOL)biometricIDHardwareIsAvailable;
+(BOOL)biometricIDIsEnrolled;
+(BOOL)biometricIDIsEnrolled:(*id)arg0 checkPolicyDomainState:(BOOL)arg1 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg0 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg0 checkPolicyDomainState:(BOOL)arg1 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg0 strict:(BOOL)arg1 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg0 strict:(BOOL)arg1 checkPolicyDomainState:(BOOL)arg2 ;
+(BOOL)exceededMaxUpdatePolicyDomainStateAttemptCount;
+(BOOL)faceIDIsEnrolled;
+(BOOL)faceIDNotesSettingEnabledForAccountID:(id)arg0 ;
+(BOOL)getBoolFromKeyChainForIdentifier:(id)arg0 ;
+(BOOL)isControlVariableVersionMigratedToCurrent;
+(BOOL)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg0 ;
+(BOOL)removeAllFromBiometricID;
+(BOOL)removeItemForIdentifier:(id)arg0 error:(*id)arg1 ;
+(BOOL)touchIDEnabledForSharedPasswordForAccountIDs:(id)arg0 strict:(BOOL)arg1 ;
+(BOOL)touchIDIsEnrolled;
+(BOOL)touchIDNotesSettingEnabledForAccountID:(id)arg0 ;
+(NSUInteger)getUnsignedIntegerFromKeyChainForIdentifier:(id)arg0 ;
+(NSUInteger)unsignedIntegerFromData:(id)arg0 ;
+(id)DEPRECATED_faceIDUserDefaultsDisabled;
+(id)DEPRECATED_touchIDUserDefaultsDisabled;
+(id)_getItemForIdentifier:(id)arg0 accessGroupIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(*id)arg3 ;
+(id)_queryForIdentifier:(id)arg0 accessGroupIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 returnData:(BOOL)arg3 ;
+(id)faceIDEnabledKeyForAccountID:(id)arg0 ;
+(id)getItemForIdentifier:(id)arg0 alertTextForAuthentication:(id)arg1 error:(*id)arg2 ;
+(id)getItemFromAnyKeychainGroupForIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)policyStateNilData;
+(id)secAccessControlObjectWithCreationFlag:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)touchIDEnabledKeyForAccountID:(id)arg0 ;
+(void)beginEvaluatePolicyReplyBlock;
+(void)bumpUpdatePolicyDomainStateAttemptCount;
+(void)clearKeysAndUpdateDomainPolicyState;
+(void)endEvaluatePolicyReplyBlock;
+(void)migrateFromBioIDDisabledKeysToBioIDEnabledKeys;
+(void)migrateKeysByMarkingWithEncryptionKeyTypeAndMovingIntoGroupContainer;
+(void)moveAllEncryptionKeysToGroupContainerForAccountIdentifiers:(id)arg0 context:(id)arg1 ;
+(void)removeAccountFromBiometricID:(id)arg0 andRemoveNotes:(BOOL)arg1 ;
+(void)removeItemFromBiometricID:(id)arg0 ;
+(void)removeNoteFromBiometricID:(id)arg0 ;
+(void)resetUpdatePolicyDomainStateAttemptCount;
+(void)setBool:(BOOL)arg0 forIdentifierInKeychain:(id)arg1 ;
+(void)setControlVariableVersionToCurrent;
+(void)setFaceIDEnabled:(BOOL)arg0 forAccountID:(id)arg1 ;
+(void)setTouchIDEnabled:(BOOL)arg0 forAccountID:(id)arg1 ;
+(void)setUnsignedInteger:(NSUInteger)arg0 forIdentifierInKeychain:(id)arg1 ;


@end


#endif