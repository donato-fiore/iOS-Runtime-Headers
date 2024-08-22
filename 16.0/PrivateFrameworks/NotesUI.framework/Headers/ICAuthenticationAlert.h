// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAUTHENTICATIONALERT_H
#define ICAUTHENTICATIONALERT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICAuthenticationAlert : NSObject

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic) BOOL actionIsDestructive; // ivar: _actionIsDestructive
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (copy, nonatomic) NSString *dismissTitle; // ivar: _dismissTitle
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) BOOL prefersSheet; // ivar: _prefersSheet
@property (readonly, nonatomic) BOOL shouldPresent;
@property (copy, nonatomic) id *shouldPresentHandler; // ivar: _shouldPresentHandler
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)shouldPresentSwitchToDevicePasswordPromptForAccount:(id)arg0 ;
+(id)aboutLockedNotesInfoAlert;
+(id)cannotAddAttachmentsInfoAlertWithAttachmentCount:(NSUInteger)arg0 ;
+(id)cannotLockInfoAlertWithReason:(NSUInteger)arg0 ;
+(id)cannotSetCustomPasswordInfoAlert;
+(id)changeOtherAccountCustomPasswordsActionAlertWithAccount:(id)arg0 otherAccount:(id)arg1 ;
+(id)customAccountNameForAccount:(id)arg0 ;
+(id)customPasswordConfirmationAlert;
+(id)devicePasswordIncompatibleConfirmationAlertWithAccount:(id)arg0 incompatibilityMessage:(id)arg1 ;
+(id)enableBiometricsActionAlertShownKeyWithAccount:(id)arg0 ;
+(id)enableBiometricsActionAlertWithAccount:(id)arg0 ;
+(id)enableKeychainActionAlert;
+(id)incorrectCustomPasswordInfoAlertWithObject:(id)arg0 showHint:(BOOL)arg1 ;
+(id)messageForAuthenticationCannotLockReason:(NSUInteger)arg0 ;
+(id)mismatchedCustomPasswordInfoAlert;
+(id)missingCustomPasswordInfoAlert;
+(id)rememberCustomPasswordInfoAlertPresentedKeyForAccount:(id)arg0 ;
+(id)rememberCustomPasswordInfoAlertWithAccount:(id)arg0 ;
+(id)resetCustomPasswordConfirmationAlertWithAccount:(id)arg0 ;
+(id)resetCustomPasswordInfoAlertWithAccount:(id)arg0 ;
+(id)setDevicePasswordActionAlert;
+(id)setDevicePasswordInfoAlert;
+(id)switchToDevicePasswordInSettingsInfoAlertWithAccount:(id)arg0 ;
+(id)switchToDevicePasswordPromptPresentedCountKeyForAccount:(id)arg0 ;
+(id)switchedModeInfoAlertWithAccount:(id)arg0 ;
+(id)switchedToCustomPasswordModeInfoAlertWithAccount:(id)arg0 ;
+(id)switchedToDevicePasswordModeInfoAlertWithAccount:(id)arg0 ;
+(id)updateDivergedCustomPasswordModeActionAlertWithAccount:(id)arg0 incompatibilityMessage:(id)arg1 ;
+(id)updateDivergedCustomPasswordNotesActionAlertWithObject:(id)arg0 ;
+(id)updateDivergedDevicePasswordModeActionAlertWithAccount:(id)arg0 ;
+(id)upgradeToLockNotesInfoAlert;
+(void)markSwitchToDevicePasswordPromptPresentedCountForAccount:(id)arg0 ;
+(void)presentAlertsIfNeeded:(id)arg0 window:(id)arg1 completionHandler:(id)arg2 ;
+(void)resetPresentationsForAccount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(void)presentInWindow:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif