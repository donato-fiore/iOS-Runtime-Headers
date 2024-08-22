// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIPEARLPASSCODECONTROLLER_H
#define PSUIPEARLPASSCODECONTROLLER_H

@class LAContext, PSSpecifier, NSString, OBPrivacyPresenter;
@protocol BKUIPearlEnrollControllerDelegate, LAUIDelegate, BFFPasscodeViewControllerDelegate;


#import "PSUIBiometricController.h"
#import "PSUIPearlAttentionGroupController.h"
#import "PSEnrollmentNavigationController.h"

@interface PSUIPearlPasscodeController : PSUIBiometricController <BKUIPearlEnrollControllerDelegate, LAUIDelegate, BFFPasscodeViewControllerDelegate>



@property (retain, nonatomic) PSUIPearlAttentionGroupController *attentionGroupController; // ivar: _attentionGroupController
@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (retain) PSSpecifier *currentlyPresentingPearlEnrollSpecifier; // ivar: _currentlyPresentingPearlEnrollSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSEnrollmentNavigationController *enrollFaceController; // ivar: _enrollFaceController
@property (retain, nonatomic) PSSpecifier *enrollFaceSpecifier; // ivar: _enrollFaceSpecifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBPrivacyPresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(BOOL)hasMatchingBiometricTemplate;
-(BOOL)hasReachedMaximumBiometricEnrollmentCount;
-(BOOL)isEnrolled;
-(BOOL)isEnrollmentAvailable;
-(BOOL)passcodeViewControllerAllowSkip:(id)arg0 ;
-(NSUInteger)numberOfAppsUsingPearl;
-(id)biometricLogo;
-(id)biometricNameDescription;
-(id)biometricTableViewHeader;
-(id)headerForUseBiometricSection;
-(id)init;
-(id)numberOfAppsUsingPearlDescription:(id)arg0 ;
-(id)passcodeController;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg0 ;
-(id)pearlEnrollSpecifiers;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)backgrounded:(id)arg0 ;
-(void)cancelModalFlow;
-(void)dealloc;
-(void)deleteAllIdentities;
-(void)deleteFaceIDIdentitiesCheckWithSpecifier:(id)arg0 ;
-(void)enroll:(id)arg0 ;
-(void)enrollBiometric;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)passcodeViewController:(id)arg0 didFinishWithPasscodeCreation:(id)arg1 ;
-(void)pearlEnrollController:(id)arg0 finishedEnrollWithError:(id)arg1 ;
-(void)pearlLearnMoreTapped:(id)arg0 ;
-(void)popPearlEnrollmentController;
-(void)presentAlertForAlternateAppearanceIfNecessary:(id)arg0 ;
-(void)presentAlertForDeletingPearlIdentities;
-(void)presentSecondAlertForDeletingMatchedBiometricTemplate;
-(void)pushPasscodePane;
-(void)refetchBiometricTemplateWithSpecifier:(id)arg0 action:(id)arg1 ;
-(void)setBiometricUnlockEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)validateBiometricTemplateUUIDAndEnroll:(id)arg0 ;
-(void)validateBiometricTemplateUUIDWithSpecifier:(id)arg0 action:(id)arg1 ;


@end


#endif