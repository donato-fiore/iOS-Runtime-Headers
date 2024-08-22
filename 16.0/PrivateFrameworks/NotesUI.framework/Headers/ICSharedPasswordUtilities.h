// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSHAREDPASSWORDUTILITIES_H
#define ICSHAREDPASSWORDUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICSharedPasswordUtilities : NSObject

@property (retain, nonatomic) id *displayedSheet; // ivar: _displayedSheet


+(BOOL)accountPasswordExists;
+(BOOL)authenticateWithPassword:(id)arg0 forObject:(id)arg1 ;
+(BOOL)hasAnyAccountWithPassword;
+(BOOL)hasMultiplePasswordCapableAccounts;
+(BOOL)isAuthenticatedForDefaultAccount;
+(BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+(BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+(BOOL)isPassword:(id)arg0 correctForObject:(id)arg1 ;
+(BOOL)passwordCapableAccountExists;
+(BOOL)setPassword:(id)arg0 hint:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)setPassword:(id)arg0 hint:(id)arg1 oldPassword:(id)arg2 forAccount:(id)arg3 ;
+(BOOL)unlockedNotesOrKeysExist;
+(id)accountWithPassword:(id)arg0 ;
+(id)defaultAccountForPasswordProtectedNotes;
+(id)passwordCapableAccounts;
+(id)preferredHintAccount;
+(void)lockAllNotes;
+(void)resetAllSharedPasswords;
+(void)resetPasswordForAccount:(id)arg0 ;
+(void)resetTimeoutTimer;
+(void)updateAllNotesWithOldPassword:(id)arg0 toAccountPassword:(id)arg1 fromAccount:(id)arg2 ;
-(id)init;
-(void)cryptorCachedKeysDidEmpty:(id)arg0 ;
-(void)dealloc;
-(void)showMigrationPromptIfNeededForAccount:(id)arg0 displayWindow:(id)arg1 ;
-(void)showPasswordSetUpSheetForAccount:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif