// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSHAREDPASSWORDUTILITIES_H
#define ICSHAREDPASSWORDUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICSharedPasswordUtilities : NSObject

@property (retain, nonatomic) id *displayedSheet; // ivar: _displayedSheet


+(BOOL)accountPasswordExists;
+(BOOL)authenticateWithPassword:(id)arg0 forAccount:(id)arg1 ;
+(BOOL)authenticateWithPassword:(id)arg0 forNote:(id)arg1 ;
+(BOOL)hasAnyAccountWithPassword;
+(BOOL)hasMultiplePasswordCapableAccounts;
+(BOOL)hasSameCryptoKeyForNote:(id)arg0 andAccount:(id)arg1 ;
+(BOOL)isAuthenticatedForAccount:(id)arg0 ;
+(BOOL)isAuthenticatedForDefaultAccount;
+(BOOL)isAuthenticatedForNote:(id)arg0 ;
+(BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+(BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+(BOOL)isPassword:(id)arg0 correctForAccount:(id)arg1 ;
+(BOOL)isPassword:(id)arg0 correctForNote:(id)arg1 ;
+(BOOL)isPasswordSetForAccount:(id)arg0 ;
+(BOOL)passwordCapableAccountExists;
+(BOOL)setPassword:(id)arg0 hint:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)setPassword:(id)arg0 hint:(id)arg1 oldPassword:(id)arg2 forAccount:(id)arg3 ;
+(BOOL)unlockedNotesOrKeysExist;
+(NSInteger)recentPasswordChangeCountAsReset:(BOOL)arg0 ;
+(id)accountWithPassword:(id)arg0 ;
+(id)alertMessageForDontForgetPasswordAlertIsForFaceID:(BOOL)arg0 ;
+(id)alertTitleForDontForgetPasswordAlert;
+(id)createNoteFromNote:(id)arg0 isPasswordProtected:(BOOL)arg1 removingOriginalNote:(BOOL)arg2 ;
+(id)defaultAccountForPasswordProtectedNotes;
+(id)nonDeletedLockedNotesFromNotes:(id)arg0 ;
+(id)passwordCapableAccounts;
+(id)passwordChangeCountUserDefaultsKeyAsReset:(BOOL)arg0 ;
+(id)preferredHintAccount;
+(void)clearRecentPasswordChangeCountAsReset:(BOOL)arg0 ;
+(void)incrementRecentPasswordChangeCountAsReset:(BOOL)arg0 ;
+(void)lockAllNotes;
+(void)resetAllSharedPasswords;
+(void)resetPasswordForAccount:(id)arg0 ;
+(void)resetTimeoutTimer;
+(void)showDontForgetPasswordAlertForAccountIdentifier:(id)arg0 isForFaceID:(BOOL)arg1 withDisplayWindow:(id)arg2 ;
+(void)showDontForgetPasswordAlertIfNecessaryForAccountIdentifier:(id)arg0 withDisplayWindow:(id)arg1 ;
+(void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg0 ;
+(void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(id)arg0 ;
+(void)updateAllNotesWithOldPassword:(id)arg0 toAccountPassword:(id)arg1 fromAccount:(id)arg2 ;
-(id)init;
// -(void)_authenticateForNote:(id)arg0 intent:(NSUInteger)arg1 displayWindow:(id)arg2 failedAttemptHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)_recursivelyAuthenticateForNotes:(id)arg0 intent:(NSUInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)authenticateForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
// -(void)authenticateForNote:(id)arg0 intent:(NSUInteger)arg1 displayWindow:(id)arg2 failedAttemptHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)authenticateForNotes:(id)arg0 intent:(NSUInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
-(void)authenticateIfNecessaryForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticatePasswordForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)cryptorCachedKeysDidEmpty:(id)arg0 ;
-(void)dealloc;
// -(void)showPasswordEntrySheetWithIntent:(NSUInteger)arg0 note:(id)arg1 displayWindow:(id)arg2 failedAttemptHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)showPasswordSetUpSheetForAccount:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif