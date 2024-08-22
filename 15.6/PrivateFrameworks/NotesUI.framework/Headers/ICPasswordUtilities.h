// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPASSWORDUTILITIES_H
#define ICPASSWORDUTILITIES_H

@class UIAlertController, NSString;


#import "ICSharedPasswordUtilities.h"

@interface ICPasswordUtilities : ICSharedPasswordUtilities

@property (nonatomic) BOOL authenticationInProgress; // ivar: _authenticationInProgress
@property (weak, nonatomic) UIAlertController *displayedAlertController; // ivar: _displayedAlertController
@property (retain, nonatomic) NSString *divergedAccountPassword; // ivar: _divergedAccountPassword


+(BOOL)deviceHasPasscode;
+(BOOL)faceIDAccessAllowedViaTCC;
+(BOOL)faceIDEnabledForSharedPasswordForAccountID:(id)arg0 ;
+(BOOL)touchIDEnabledForSharedPasswordForAccountID:(id)arg0 ;
+(NSUInteger)faceIDAccess;
+(id)faceIDFailurePrompt;
+(id)imageForCurrentDecryptedStatusForNote:(id)arg0 ;
+(id)sharedInstance;
// +(void)authenticateForMovingNotes:(id)arg0 toNoteContainer:(id)arg1 displayWindow:(id)arg2 authenticateFailureHandler:(id)arg3 movingBlock:(unk)arg4  ;
+(void)authenticateiCloudPasswordFromRootViewController:(id)arg0 account:(id)arg1 confirmButtonTitle:(id)arg2 reason:(id)arg3 completionHandler:(id)arg4 ;
+(void)requestAllowFaceIDIfRequired:(id)arg0 ;
+(void)showDontForgetPasswordAlertForAccountIdentifier:(id)arg0 isForFaceID:(BOOL)arg1 withDisplayWindow:(id)arg2 ;
+(void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg0 ;
+(void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)arg0 ;
+(void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)arg0 ;
+(void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)arg0 ;
-(BOOL)_keychainContainsValidItemForSyncingObject:(id)arg0 ;
-(BOOL)keychainContainsValidItemForAccount:(id)arg0 ;
-(BOOL)keychainContainsValidItemForNote:(id)arg0 ;
-(id)init;
-(void)_authenticatePasswordForDeletingNotes:(id)arg0 incorrectAttempts:(NSInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
// -(void)_authenticatePasswordWithIntent:(NSUInteger)arg0 note:(id)arg1 incorrectAttempts:(NSInteger)arg2 passwordDiverged:(BOOL)arg3 wrongAccountName:(id)arg4 displayWindow:(id)arg5 failedAttemptHandler:(id)arg6 completionHandler:(unk)arg7  ;
-(void)accessibilityAnnounceAuthSuccessForIntent:(NSUInteger)arg0 withNote:(id)arg1 ;
-(void)addTitleAndMessageToAlert:(id)arg0 intent:(NSUInteger)arg1 note:(id)arg2 incorrectAttempts:(NSInteger)arg3 passwordDiverged:(BOOL)arg4 wrongAccountName:(id)arg5 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)authenticateForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateIfNecessaryForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticatePasswordForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
// -(void)authenticatePasswordWithIntent:(NSUInteger)arg0 note:(id)arg1 displayWindow:(id)arg2 failedAttemptHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithBiometricIDForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithBiometricIDWithReason:(id)arg0 intent:(NSUInteger)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)hidePasswordEntrySheet;
-(void)showChangePasswordDialogueFromDisplayWindow:(id)arg0 account:(id)arg1 completionHandler:(id)arg2 ;
// -(void)showPasswordEntrySheetWithIntent:(NSUInteger)arg0 note:(id)arg1 displayWindow:(id)arg2 failedAttemptHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)showPasswordSetUpSheetForAccount:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)showUpdateDivergedPasswordForAccountPassword:(id)arg0 oldPassword:(id)arg1 account:(id)arg2 displayWindow:(id)arg3 ;


@end


#endif