// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIPEARLPASSCODECONTROLLER_H
#define PSUIPEARLPASSCODECONTROLLER_H

@class LAContext, PSSpecifier, NSString, OBPrivacyPresenter;
@protocol LAUIDelegate, BFFPasscodeViewControllerDelegate, PSUIFaceIDEnrollmentCoordinatorDelegate;


#import "PSUIBiometricController.h"
#import "PSUIPearlAttentionGroupController.h"
#import "PSUIFaceIDEnrollmentCoordinator.h"

@interface PSUIPearlPasscodeController : PSUIBiometricController <LAUIDelegate, BFFPasscodeViewControllerDelegate, PSUIFaceIDEnrollmentCoordinatorDelegate>



@property (retain, nonatomic) PSUIPearlAttentionGroupController *attentionGroupController; // ivar: _attentionGroupController
@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (retain) PSSpecifier *currentlyPresentingPearlEnrollSpecifier; // ivar: _currentlyPresentingPearlEnrollSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *enrollFaceSpecifier; // ivar: _enrollFaceSpecifier
@property (retain, nonatomic) PSUIFaceIDEnrollmentCoordinator *faceIDEnrollmentCoordinator; // ivar: _faceIDEnrollmentCoordinator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEnrollingInPeriocular; // ivar: _isEnrollingInPeriocular
@property (retain, nonatomic) OBPrivacyPresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(BOOL)faceIDEnrollmentCoordinatorShouldPresentInModalSheet:(id)arg0 ;
-(BOOL)hasMatchingBiometricTemplate;
-(BOOL)hasReachedMaximumBiometricEnrollmentCount;
-(BOOL)isEnrolled;
-(BOOL)isEnrollmentAvailable;
-(BOOL)isPeriocularEnabled;
-(BOOL)passcodeViewControllerAllowSkip:(id)arg0 ;
-(NSUInteger)currentPeriocularEnrollmentState;
-(NSUInteger)numberOfAppsUsingPearl;
-(id)addGlassesSpecifier;
-(id)biometricLogo;
-(id)biometricNameDescription;
-(id)biometricTableViewHeader;
-(id)enrollPeriocularAlternateAppearanceSpecifier;
-(id)faceIDSpecifiers;
-(id)faceIDSpecifiersWithPeriocular;
-(id)headerForUseBiometricSection;
-(id)init;
-(id)isPeriocularFaceIDMatchEnabled:(id)arg0 ;
-(id)numberOfAppsUsingPearlDescription:(id)arg0 ;
-(id)passcodeController;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg0 ;
-(id)pearlEnrollSpecifiers;
-(id)resetFaceIDSpecifier;
-(id)setupAlternateAppearanceSpecifier;
-(id)setupFaceIDSpecifier;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)unlockWithFaceMaskSpecifier;
-(void)backgrounded:(id)arg0 ;
-(void)cancelModalFlow;
-(void)configurePeriocularEnabled:(BOOL)arg0 ;
-(void)dealloc;
-(void)deleteAllIdentities;
-(void)deleteFaceIDIdentitiesCheckWithSpecifier:(id)arg0 ;
-(void)enroll:(id)arg0 ;
-(void)enrollBiometric;
-(void)enrollGlassesForExistingAppearance:(id)arg0 ;
-(void)enrollPeriocularForExistingAppearance:(id)arg0 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)faceIDEnrollmentCoordinator:(id)arg0 finishedEnrollmentWithError:(id)arg1 ;
-(void)faceIDEnrollmentCoordinatorDidDismiss:(id)arg0 ;
-(void)faceIDEnrollmentCoordinatorWillDismiss:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)passcodeViewController:(id)arg0 didFinishWithPasscodeCreation:(id)arg1 ;
-(void)pearlLearnMoreTapped:(id)arg0 ;
-(void)popPearlEnrollmentController;
-(void)presentAlertForAlternateAppearanceIfNecessary:(id)arg0 ;
-(void)presentAlertForDeletingPearlIdentities;
-(void)presentSecondAlertForDeletingMatchedBiometricTemplate;
-(void)pushPasscodePane;
-(void)refetchBiometricTemplateWithSpecifier:(id)arg0 action:(id)arg1 ;
-(void)setBiometricUnlockEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setPeriocularFaceIDMatchEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)validateBiometricTemplateUUIDAndEnroll:(id)arg0 ;
-(void)validateBiometricTemplateUUIDWithSpecifier:(id)arg0 action:(id)arg1 ;


@end


#endif