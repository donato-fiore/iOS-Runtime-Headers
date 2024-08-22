// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUTHENTICATIONPROMPT_H
#define ICAUTHENTICATIONPROMPT_H

@class ICAccount, ICCloudSyncingObject, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ICAuthenticationPrompt : NSObject

@property (readonly, nonatomic) ICAccount *account; // ivar: _account
@property (readonly, nonatomic) BOOL allowsAlternativeAuthentication;
@property (readonly, nonatomic) BOOL allowsAuthentication;
@property (readonly, nonatomic) BOOL allowsBiometricAuthentication;
@property (readonly, nonatomic) BOOL allowsCustomPasswordAuthentication;
@property (readonly, nonatomic) BOOL allowsDevicePasswordAuthentication;
@property (readonly, nonatomic) BOOL allowsFaceIDAuthentication;
@property (readonly, nonatomic) BOOL allowsTouchIDAuthentication;
@property (nonatomic) NSUInteger authenticationAction; // ivar: _authenticationAction
@property (nonatomic) NSUInteger authenticationMechanism; // ivar: _authenticationMechanism
@property (readonly, nonatomic) ICCloudSyncingObject *authenticationObject;
@property (nonatomic, getter=isBiometricAuthenticationEnabled) BOOL biometricAuthenticationEnabled; // ivar: _biometricAuthenticationEnabled
@property (readonly, copy, nonatomic) NSString *cloudAccountName;
@property (readonly, copy, nonatomic) NSString *customAccountName;
@property (readonly, copy, nonatomic) NSString *deviceAccountName;
@property (nonatomic, getter=isFaceIDAuthenticationEnabled) BOOL faceIDAuthenticationEnabled; // ivar: _faceIDAuthenticationEnabled
@property (copy, nonatomic) NSArray *failureAlerts; // ivar: _failureAlerts
@property (copy, nonatomic) NSString *fallbackButtonTitle; // ivar: _fallbackButtonTitle
@property (readonly, nonatomic) BOOL forcesAlternativeAuthentication;
@property (readonly, nonatomic) BOOL forcesBiometricAuthentication;
@property (readonly, nonatomic) BOOL forcesSecondaryAuthentication;
@property (nonatomic) BOOL hasCloudAccount; // ivar: _hasCloudAccount
@property (nonatomic) BOOL hasDevicePassword; // ivar: _hasDevicePassword
@property (readonly, nonatomic) BOOL hasDivergedPassphrase;
@property (nonatomic) BOOL hasKeychainItem; // ivar: _hasKeychainItem
@property (readonly, nonatomic) BOOL hasPassphrase;
@property (readonly, nonatomic) NSUInteger intent; // ivar: _intent
@property (nonatomic, getter=isInternetReachable) BOOL internetReachable; // ivar: _internetReachable
@property (nonatomic, getter=isKeychainAvailable) BOOL keychainAvailable; // ivar: _keychainAvailable
@property (readonly, nonatomic) BOOL needsAuthentication;
@property (readonly, nonatomic) BOOL needsCloudAccount;
@property (readonly, nonatomic) BOOL needsDevicePassword;
@property (readonly, nonatomic) BOOL needsKeychain;
@property (readonly, nonatomic) BOOL needsSecondaryAuthentication;
@property (readonly, nonatomic) BOOL needsUserRecordUpdate;
@property (copy, nonatomic) NSArray *notes; // ivar: _notes
@property (readonly, nonatomic) ICCloudSyncingObject *object; // ivar: _object
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) short secondaryAuthenticationMode; // ivar: _secondaryAuthenticationMode
@property (copy, nonatomic) NSArray *successAlerts; // ivar: _successAlerts
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *touchBarReason; // ivar: _touchBarReason
@property (nonatomic, getter=isTouchIDAuthenticationEnabled) BOOL touchIDAuthenticationEnabled; // ivar: _touchIDAuthenticationEnabled
@property (readonly, copy, nonatomic) NSArray *unauthenticatedNotes;
@property (readonly, nonatomic) BOOL unlocksNotes;
@property (nonatomic) BOOL updatesUserRecordIfNeeded; // ivar: _updatesUserRecordIfNeeded
@property (nonatomic) BOOL usesAlternativeAuthenticationIfAvailable; // ivar: _usesAlternativeAuthenticationIfAvailable
@property (nonatomic) BOOL usesBiometricAuthenticationIfAvailable; // ivar: _usesBiometricAuthenticationIfAvailable
@property (nonatomic) BOOL usesSecondaryAuthenticationIfAvailable; // ivar: _usesSecondaryAuthenticationIfAvailable


+(id)promptForChangingMode:(short)arg0 account:(id)arg1 ;
+(id)promptForDeletingNotes:(id)arg0 ;
+(id)promptForIntent:(NSUInteger)arg0 object:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIntent:(NSUInteger)arg0 object:(id)arg1 ;
-(void)update;
-(void)updateForAddLock;
-(void)updateForChangeMode;
-(void)updateForChangeModeFrom;
-(void)updateForChangeModeTo;
-(void)updateForChangePassword;
-(void)updateForDeleteMixedNotes;
-(void)updateForDeleteMultipleNotes;
-(void)updateForDeleteNotes;
-(void)updateForDeleteSingleNote;
-(void)updateForRemoveLock;
-(void)updateForResetPassword;
-(void)updateForToggleBiometrics;
-(void)updateForViewNote;
-(void)updateMessaging;


@end


#endif