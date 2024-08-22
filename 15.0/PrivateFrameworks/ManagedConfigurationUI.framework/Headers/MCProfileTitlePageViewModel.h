// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPROFILETITLEPAGEVIEWMODEL_H
#define MCPROFILETITLEPAGEVIEWMODEL_H

@class NSString, UIViewController<MCProfileTitlePageViewModelDelegate>, MCProfile, NSData;
@protocol MCInteractionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCUIProfile.h"

@interface MCProfileTitlePageViewModel : NSObject <MCInteractionDelegate>



@property (retain, nonatomic) MCUIProfile *UIProfile; // ivar: _UIProfile
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) id *cleanupTask; // ivar: _cleanupTask
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<MCProfileTitlePageViewModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int installState; // ivar: _installState
@property (nonatomic) BOOL isInstallingProfile; // ivar: _isInstallingProfile
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID
@property (copy, nonatomic) NSString *pin; // ivar: _pin
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSData *profileData; // ivar: _profileData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(BOOL)_installErrorIsUserCancelledError:(id)arg0 ;
-(id)_createAuthenticationContext:(id)arg0 presentingViewController:(id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 profileData:(id)arg1 ;
-(void)_continueInstallAfterPresentingWarnings;
-(void)_handleMAIDSignInRequestWithAccountID:(id)arg0 personaID:(id)arg1 connection:(id)arg2 ;
-(void)_handleUserInputRequest:(id)arg0 ;
-(void)_installFinishedWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)_respondToMAIDAuthenticationRequestIfNeeded:(id)arg0 successful:(BOOL)arg1 error:(id)arg2 isCancelled:(BOOL)arg3 ;
-(void)_respondToUserInputRequest:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)_setup;
-(void)_signInMAID:(id)arg0 authenticationResult:(id)arg1 personaID:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)profileConnection:(id)arg0 didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)profileConnection:(id)arg0 didFinishPreflightWithError:(id)arg1 ;
-(void)profileConnection:(id)arg0 didRequestMAIDSignIn:(id)arg1 personaID:(id)arg2 ;
-(void)profileConnection:(id)arg0 didRequestUserInput:(id)arg1 ;
-(void)profileConnection:(id)arg0 didShowUserWarnings:(id)arg1 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg0 ;
-(void)startProfileInstallationFlow;
-(void)terminateProfileInstallationFlow;
-(void)terminateProfileInstallationFlowAndDeleteProfile;


@end


#endif