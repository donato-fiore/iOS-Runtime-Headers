// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPRECOVERYKEYENTRYVIEWCONTROLLER_H
#define CDPRECOVERYKEYENTRYVIEWCONTROLLER_H

@class PSKeychainSyncSecurityCodeController, NSString;


#import "CDPRecoveryKeyCreateHeaderView.h"
#import "CDPRecoveryKeyEntryViewModel.h"

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController {
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
}




-(BOOL)hidesNextButton;
-(id)footerActionButton;
-(id)footerTextLabel;
-(id)headerView;
-(id)initWithRecoveryContext:(id)arg0 ;
-(id)placeholderText;
-(id)specifiers;
-(id)textEntryCell;
-(void)_handleRecoveryKeyValidationWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)cancelFlow:(id)arg0 ;
-(void)continueFlow:(id)arg0 ;
-(void)dealloc;
-(void)didFinishEnteringText:(id)arg0 ;
-(void)disableUserInteractionAndStartSpinner;
-(void)enableUserInteractionAndStopSpinner;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif