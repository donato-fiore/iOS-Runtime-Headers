// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POAGENTAUTHENTICATIONPROCESS_H
#define POAGENTAUTHENTICATIONPROCESS_H

@class NSTimer, SOConfigurationHost, NSString, SOExtensionManager, NSDate, NSNotificationCenter, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate, POExtensionDelegate, POAgentAuthenticationProcessKerberosDelegate;

#import <Foundation/Foundation.h>

#import "POAuthenticationProcess.h"
#import "POConfigurationManager.h"
#import "PODirectoryServices.h"
#import "POKerberosHelper.h"
#import "POKeyBag.h"
#import "PORegistrationContext.h"

@interface POAgentAuthenticationProcess : NSObject <UNUserNotificationCenterDelegate, POExtensionDelegate>



@property (retain) POAuthenticationProcess *authenticationProcess; // ivar: _authenticationProcess
@property (retain) NSTimer *authenticationTimer; // ivar: _authenticationTimer
@property (retain) SOConfigurationHost *configurationHost; // ivar: _configurationHost
@property (retain) POConfigurationManager *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PODirectoryServices *directoryServices; // ivar: _directoryServices
@property (retain) SOExtensionManager *extensionManager; // ivar: _extensionManager
@property (readonly) NSUInteger hash;
@property (weak) NSObject<POAgentAuthenticationProcessKerberosDelegate> *kerberosDelegate; // ivar: _kerberosDelegate
@property (retain) POKerberosHelper *kerberosHelper; // ivar: _kerberosHelper
@property (retain) POKeyBag *keyBag; // ivar: _keyBag
@property (retain) NSDate *lastAuthenticationAttempt; // ivar: _lastAuthenticationAttempt
@property BOOL localAccount; // ivar: _localAccount
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property BOOL platformSSOActive; // ivar: _platformSSOActive
@property (retain) PORegistrationContext *registrationContext; // ivar: _registrationContext
@property BOOL registrationFailed; // ivar: _registrationFailed
@property (readonly) Class superclass;
@property (retain) NSString *userName; // ivar: _userName
@property (retain) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter


-(BOOL)handleUserNeedsReauthenticationAfterDelay:(CGFloat)arg0 ;
-(BOOL)isCurrentSSOExtension:(id)arg0 ;
-(BOOL)performLoginForCurrentUser;
-(id)createRegistrationNotificationWithAccountName:(id)arg0 ;
-(id)createSignInNotificationWithAccountName:(id)arg0 extensionIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)loadSSOExtensionWithExtensionBundleIdentifier:(id)arg0 ;
-(id)registrationTokenForExtensionIdentifier:(id)arg0 ;
-(int)ssoMethodToUse:(id)arg0 profile:(id)arg1 ;
-(void)_startDeviceRegistration;
-(void)_startUserRegistration;
-(void)configurationChanged:(id)arg0 ;
-(void)dealloc;
-(void)exchangeTGTForStatus:(id)arg0 ;
-(void)handleAgentStartup;
-(void)handleConfigurationChanged:(BOOL)arg0 ;
-(void)handleDeviceAndUserRegistrationForRepair:(BOOL)arg0 ;
-(void)handleDeviceAndUserRegistrationForRepair:(BOOL)arg0 notified:(BOOL)arg1 ;
-(void)handleDeviceRegistrationNotification;
-(void)handleKerberosMappingForTokens:(id)arg0 extensionIdentifier:(id)arg1 userConfiguration:(id)arg2 ;
-(void)handleKerberosMappingForTokens:(id)arg0 loginConfiguration:(id)arg1 userConfiguration:(id)arg2 ;
-(void)handleNetworkChange;
-(void)handlePendingSSOTokens;
-(void)handleRegistrationViewControllerForExtensionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovingRegistrationForExtension:(id)arg0 ;
-(void)handleScreenSaverRule;
-(void)handleScreenUnlock;
-(void)handleUnfinishedTGTExchanges;
-(void)handleUserCredentialNeededAtLogin:(BOOL)arg0 ;
-(void)handleUserCredentialNeededAtLogin:(BOOL)arg0 returningContext:(*id)arg1 ;
-(void)handleUserRegistrationForUser:(id)arg0 repair:(BOOL)arg1 ;
-(void)handleUserRegistrationForUser:(id)arg0 repair:(BOOL)arg1 notified:(BOOL)arg2 ;
-(void)handleUserRegistrationNotification;
-(void)notifyKerberosDelegateTGTDidBegin;
-(void)notifyKerberosDelegateTGTDidComplete;
-(void)postAuthenticationNotification:(NSUInteger)arg0 ;
-(void)promptUserForRegistration;
-(void)requestDidCompleteWithError:(id)arg0 ;
-(void)requestUserAuthenticationWithUserInfo:(id)arg0 ;
-(void)requestUserAuthenticationWithWindow:(id)arg0 completion:(id)arg1 ;
-(void)setupNotificationCategories;
-(void)setupTimerForAuthentication;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)windowDidClose;


@end


#endif