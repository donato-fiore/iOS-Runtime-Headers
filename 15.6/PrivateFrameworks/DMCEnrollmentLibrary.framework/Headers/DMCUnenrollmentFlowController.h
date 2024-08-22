// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCUNENROLLMENTFLOWCONTROLLER_H
#define DMCUNENROLLMENTFLOWCONTROLLER_H

@class NSString;
@protocol DMCEnrollmentFlowMCBridge, DMCUnenrollmentFlowPresenter;


#import "DMCEnrollmentFlowControllerBase.h"

@interface DMCUnenrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) BOOL isAppleMAID; // ivar: _isAppleMAID
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowMCBridge> *managedConfigurationHelper; // ivar: _managedConfigurationHelper
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID
@property (retain, nonatomic) NSObject<DMCUnenrollmentFlowPresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) NSString *profileIdentifier; // ivar: _profileIdentifier
@property (copy, nonatomic) id *unenrollmentCompletionHandler; // ivar: _unenrollmentCompletionHandler


-(id)_nameForStep:(NSUInteger)arg0 ;
-(id)_unenrollmentSteps;
-(id)initWithPresenter:(id)arg0 managedConfigurationHelper:(id)arg1 ;
-(void)_askForPasscodeIfNeeded;
-(void)_askForUserConfirmationIsAppleMAID:(BOOL)arg0 ;
-(void)_flowTerminatedWithError:(id)arg0 canceled:(BOOL)arg1 ;
-(void)_preflightUnenrollmentWithAccoutAltDSID:(id)arg0 ;
-(void)_resetToInitialSteps;
-(void)_uninstallEnrollmentProfileWithIdentifier:(id)arg0 personaID:(id)arg1 altDSID:(id)arg2 isAppleMAID:(BOOL)arg3 ;
-(void)_workerQueue_flowCompleted;
-(void)_workerQueue_performFlowStep:(NSUInteger)arg0 ;
-(void)unenrollAccountWithAltDSID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif