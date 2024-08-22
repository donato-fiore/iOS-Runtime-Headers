// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERREQUESTMANAGER_H
#define VSIDENTITYPROVIDERREQUESTMANAGER_H

@class VSOptional, VSAuditToken, NSString, VSIdentityProvider, VSPreferences, NSOperationQueue, NSMutableArray, VSDeveloperSettingsFetchOperation;
@protocol VSApplicationControllerDelegate, OS_dispatch_source, VSIdentityProviderRequestManagerDelegate;

#import <Foundation/Foundation.h>

#import "VSApplicationController.h"
#import "VSApplicationControllerRequestFactory.h"
#import "VSViewModel.h"

@interface VSIdentityProviderRequestManager : NSObject <VSApplicationControllerDelegate>



@property (retain, nonatomic) VSOptional *account; // ivar: _account
@property (nonatomic) BOOL allowsApplicationControllerTimer; // ivar: _allowsApplicationControllerTimer
@property (retain, nonatomic) VSApplicationController *applicationController; // ivar: _applicationController
@property (nonatomic) CGFloat applicationControllerTimerDelay; // ivar: _applicationControllerTimerDelay
@property (nonatomic) CGFloat applicationControllerTimerLeeway; // ivar: _applicationControllerTimerLeeway
@property (retain, nonatomic) NSObject<OS_dispatch_source> *applicationControllerTimerSource; // ivar: _applicationControllerTimerSource
@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (nonatomic) BOOL canIssuePrivacyVouchers; // ivar: _canIssuePrivacyVouchers
@property (retain, nonatomic) VSOptional *currentApplicationControllerRequest; // ivar: _currentApplicationControllerRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSIdentityProviderRequestManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCreateAccount; // ivar: _didCreateAccount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (nonatomic) CGFloat requestCompletionDelayAfterShowingUserInterface; // ivar: _requestCompletionDelayAfterShowingUserInterface
@property (retain, nonatomic) NSMutableArray *requestContexts; // ivar: _requestContexts
@property (retain, nonatomic) VSApplicationControllerRequestFactory *requestFactory; // ivar: _requestFactory
@property (retain, nonatomic) VSDeveloperSettingsFetchOperation *settingsFetchOperation; // ivar: _settingsFetchOperation
@property (retain, nonatomic) VSOptional *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) VSViewModel *viewModel; // ivar: _viewModel


-(BOOL)_canShowAuthenticationUI;
-(BOOL)_handleAccountMetadataRequest:(id)arg0 didCompleteWithResponse:(id)arg1 ;
-(BOOL)_handleAuthenticationRequest:(id)arg0 didCompleteWithResponse:(id)arg1 ;
-(BOOL)_handleLogoutRequestDidComplete:(id)arg0 ;
-(BOOL)_handleSTBOptOutDidComplete:(id)arg0 ;
-(BOOL)_handleSilentAuthenticationRequest:(id)arg0 didCompleteWithResponse:(id)arg1 ;
-(BOOL)_requestRequiresApplicationController:(id)arg0 ;
-(BOOL)_requestRequiresApplicationControllerIgnoringAuthentication:(id)arg0 ;
-(BOOL)applicationController:(id)arg0 requestsAlert:(id)arg1 ;
-(CGFloat)_requestCompletionDelay;
-(id)_accountChannelsWithChannelIDs:(id)arg0 ;
-(id)_accountMetadataWithAuthenticationScheme:(id)arg0 responseStatusCode:(id)arg1 responseString:(id)arg2 accountMetadataRequest:(id)arg3 verificationData:(id)arg4 ;
-(id)_applicationControllerRequestWithIdentityProviderRequest:(id)arg0 ;
-(id)_currentRequest;
-(id)_currentRequestContext;
-(id)_identityProviderAlertWithApplicationControllerAlert:(id)arg0 ;
-(id)_supportedProviderAuthenticationToken;
-(id)developerSettingsFetchOperation;
-(id)init;
-(id)initWithIdentityProvider:(id)arg0 ;
-(void)_completeAuthenticationRequestWithApplicationControllerResponse:(id)arg0 ;
-(void)_completeCachedAccountMetadataRequest;
-(void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg0 ;
-(void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg0 verificationData:(id)arg1 ;
-(void)_completeCurrentRequestWithError:(id)arg0 ;
-(void)_completeCurrentRequestWithResult:(id)arg0 ;
-(void)_completeDeletingAccountWithError:(id)arg0 ;
-(void)_enqueueSubscriptionOperationIfRequiredForResponse:(id)arg0 asDependencyOf:(id)arg1 ;
-(void)_handleApplicationControllerError:(id)arg0 forRequest:(id)arg1 ;
-(void)_handleApplicationControllerRequest:(id)arg0 didCompleteWithResponse:(id)arg1 ;
-(void)_notifyDidAuthenticateAccount:(id)arg0 ;
-(void)_processRequestContext:(id)arg0 ;
-(void)_resetVerificationStateWithCompletionHandler:(id)arg0 ;
-(void)_showAuthenticationUI;
-(void)_startApplicationControllerTimer;
-(void)_startDeletingAccount;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopApplicationController;
-(void)_stopApplicationControllerTimer;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)_submitApplicationControllerRequest:(id)arg0 ;
-(void)_updateAccountWithAccountAuthentication:(id)arg0 ;
-(void)applicationController:(id)arg0 didReceiveViewModel:(id)arg1 ;
-(void)applicationController:(id)arg0 didReceiveViewModelError:(id)arg1 ;
-(void)applicationController:(id)arg0 request:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(void)applicationController:(id)arg0 request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)applicationController:(id)arg0 startDidFailWithError:(id)arg1 ;
-(void)applicationControllerDidStart:(id)arg0 ;
-(void)dealloc;
-(void)enqueueRequest:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif