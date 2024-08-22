// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFREGEMAILCONTROLLER_H
#define CNFREGEMAILCONTROLLER_H

@class PSSpecifier, NSArray, NSTimer, NSString;


#import "CNFRegFirstRunController.h"

@interface CNFRegEmailController : CNFRegFirstRunController {
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    BOOL _validating;
}


@property (copy, nonatomic) NSString *pendingAlias; // ivar: _pendingAlias


-(BOOL)_phoneNumberInAliases:(id)arg0 ;
-(BOOL)emailFieldIsEmpty;
-(BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
-(BOOL)shouldShowAllVettedAliases;
-(BOOL)showActionSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(CGFloat)timeoutDuration;
-(id)_createSpecifierForAlias:(id)arg0 ;
-(id)_rightButtonItem;
-(id)aliasSpecifiers;
-(id)bundle;
-(id)emailTextField;
-(id)logName;
-(id)pendingAliasForSpecifier:(id)arg0 ;
-(id)selectedAliases;
-(id)specifierList;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleString;
-(void)_buildActionGroupSpecifierCache:(id)arg0 ;
-(void)_buildCheckMailSpecifierCache:(id)arg0 ;
-(void)_buildEmailSpecifierCache:(id)arg0 ;
-(void)_buildSpecifierCache:(id)arg0 ;
-(void)_failValidationWithError:(id)arg0 ;
-(void)_finishValidation;
-(void)_handleValidationModeCancelled;
-(void)_refreshEnabledStateOfAliasSpecifiers;
-(void)_returnKeyPressed;
-(void)_setFieldsEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setupEventHandlers;
-(void)_showCheckMailButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_stopValidationModeAnimated:(BOOL)arg0 ;
-(void)_updateControllerState;
-(void)_updateUI;
-(void)checkMailTapped:(id)arg0 ;
-(void)dealloc;
-(void)emailFieldEmptyStateChanged:(id)arg0 forSpecifier:(id)arg1 ;
-(void)nextTapped;
-(void)setAliasSelected:(id)arg0 ;
-(void)startValidationTimeoutTimer;
-(void)stopValidationTimeoutTimer;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)validationTimeout:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif