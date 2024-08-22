// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(id)imageForCurrentDecryptedStatusForNote:(id)arg0 ;
+(id)sharedInstance;
+(void)requestAllowFaceIDIfRequired:(id)arg0 ;
-(id)init;
-(void)accessibilityAnnounceAuthSuccessForIntent:(NSUInteger)arg0 withNote:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)dealloc;
-(void)hidePasswordEntrySheet;
-(void)showChangePasswordDialogueFromDisplayWindow:(id)arg0 account:(id)arg1 completionHandler:(id)arg2 ;
-(void)showPasswordSetUpSheetForAccount:(id)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)showUpdateDivergedPasswordForAccountPassword:(id)arg0 oldPassword:(id)arg1 account:(id)arg2 displayWindow:(id)arg3 ;


@end


#endif