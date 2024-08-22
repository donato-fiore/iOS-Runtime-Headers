// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASPASSWORDMANAGERDELETEALERTCONFIGURATION_H
#define _ASPASSWORDMANAGERDELETEALERTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _ASPasswordManagerDeleteAlertConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)_isKeychainSyncEnabled;
+(id)_buttonTitleStringForAlertToDeleteNumberOfPasswords:(NSUInteger)arg0 numberOfPasskeys:(NSUInteger)arg1 ;
+(id)_configurationForAlertToDeletePasskeyFromSavedAccount:(id)arg0 isUndoable:(BOOL)arg1 ;
+(id)_configurationForAlertToDeletePasswordAndPasskeyFromSavedAccount:(id)arg0 ;
+(id)_configurationForAlertToDeletePasswordFromSavedAccount:(id)arg0 isUndoable:(BOOL)arg1 ;
+(id)_configurationForAlertToDeleteVerificationCodeFromSavedAccount:(id)arg0 isUndoable:(BOOL)arg1 ;
+(id)_credentialDeletionStringForAlertToDeleteNumberOfPasswords:(NSUInteger)arg0 numberOfPasskeys:(NSUInteger)arg1 ;
+(id)_subtitleForDeletingNumberOfPasswordsWithVerificationCodes:(NSUInteger)arg0 ;
+(id)_subtitleStringForAlertToDeleteNumberOfPasswords:(NSUInteger)arg0 numberOfPasskeys:(NSUInteger)arg1 isDeletingVerificationCodes:(BOOL)arg2 ;
+(id)_subtitleStringForAlertToDeletePasskeyFromSavedAccount:(id)arg0 isUndoable:(BOOL)arg1 ;
+(id)_subtitleStringForAlertToDeletePasswordFromSavedAccount:(id)arg0 isUndoable:(BOOL)arg1 ;
+(id)_subtitleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)arg0 isUndoable:(BOOL)arg1 ;
+(id)_titleStringForAlertToDeleteNumberOfPasswords:(NSUInteger)arg0 numberOfPasskeys:(NSUInteger)arg1 ;
+(id)_titleStringForAlertToDeletePasskeyFromSavedAccount:(id)arg0 ;
+(id)_titleStringForAlertToDeletePasswordFromSavedAccount:(id)arg0 ;
+(id)_titleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)arg0 ;
+(id)configurationForDeleting:(NSUInteger)arg0 fromSavedAccount:(id)arg1 ;
+(id)configurationForDeleting:(NSUInteger)arg0 fromSavedAccount:(id)arg1 isUndoable:(BOOL)arg2 ;
+(id)configurationForDeletingSavedAccounts:(id)arg0 ;
+(void)_getInformationForSavedAccountsToDelete:(id)arg0 numberOfPasswords:(*NSUInteger)arg1 numberOfPasskeys:(*NSUInteger)arg2 isDeletingVerificationCodes:(*BOOL)arg3 ;
-(id)_initWithTitle:(id)arg0 subtitle:(id)arg1 buttonTitle:(id)arg2 ;


@end


#endif