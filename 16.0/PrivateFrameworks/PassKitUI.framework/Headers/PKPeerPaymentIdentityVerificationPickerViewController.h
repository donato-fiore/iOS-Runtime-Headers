// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTIDENTITYVERIFICATIONPICKERVIEWCONTROLLER_H
#define PKPEERPAYMENTIDENTITYVERIFICATIONPICKERVIEWCONTROLLER_H

@class PKPaymentSetupFieldPicker, NSString, NSArray;
@protocol PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKPeerPaymentIdentityVerificationController.h"
#import "PKTableHeaderView.h"

@interface PKPeerPaymentIdentityVerificationPickerViewController : PKPaymentSetupTableViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>

 {
    PKPeerPaymentIdentityVerificationController *_controller;
    PKPaymentSetupFieldPicker *_pickerField;
    NSString *_footerText;
    PKTableHeaderView *_headerView;
    NSUInteger _identityVerificaionError;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    BOOL _navigationEnabled;
    BOOL _rightBarButtonItemsEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly) Class superclass;


-(BOOL)isComplete;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)headerView;
-(id)initWithController:(id)arg0 pickerField:(id)arg1 footerText:(id)arg2 ;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 pickerField:(id)arg2 footerText:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_handleCancelButtonTapped:(id)arg0 ;
-(void)_handleError:(id)arg0 ;
-(void)_handleNextButtonTapped:(id)arg0 ;
-(void)_processNextViewController;
-(void)_setIdleTimerDisabled:(BOOL)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_setRightBarButtonItemsEnabled:(BOOL)arg0 ;
-(void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)_showNavigationBarSpinner:(BOOL)arg0 ;
-(void)_terminateFlow;
-(void)_updateNavigationItemAnimated:(BOOL)arg0 ;
-(void)_updateRightBarButtonState;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)hideActivitySpinner;
-(void)hideActivitySpinnerWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsDismissCurrentViewControllerAnimated:(BOOL)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setHeaderViewTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)showActivitySpinnerWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif