// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPVERIFICATIONCOMPLETIONVIEWCONTROLLER_H
#define PKPAYMENTSETUPVERIFICATIONCOMPLETIONVIEWCONTROLLER_H

@class PKPaymentVerificationObserver, UIColor, NSString, PKPaymentProvisioningController;
@protocol UITextFieldDelegate, PKPaymentVerificationObserverDelegate, PKForegroundActiveArbiterObserver, PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKActivityTableCell.h"
#import "PKTableHeaderView.h"
#import "PKPaymentSetupFooterView.h"
#import "PKPaymentVerificationController.h"

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentVerificationObserverDelegate, PKForegroundActiveArbiterObserver>

 {
    PKActivityTableCell *_verificationCodeCell;
    BOOL _verificationCodeAccepted;
    BOOL _resignedResponder;
    PKPaymentVerificationObserver *_verificationObserver;
    PKTableHeaderView *_tableHeader;
    PKPaymentSetupFooterView *_tableFooter;
    UIColor *_editableTextFieldColor;
    NSInteger _mode;
    BOOL _offerOtherMethods;
    ? _foregroundActiveState;
    BOOL _verificationAlreadyHandled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentVerificationController *verificationController; // ivar: _verificationController


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithVerificationController:(id)arg0 mode:(NSInteger)arg1 offerOtherMethods:(BOOL)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_applicationDidBecomeActive;
-(void)_applicationWillResignActive;
-(void)_disableUI;
-(void)_enableUI;
-(void)_handleNextStep;
-(void)_handlePassVerifiedNotification:(id)arg0 ;
-(void)_performAddToWatchFlow;
-(void)_showActivationError:(id)arg0 ;
-(void)_showAddToWatchOfferForPass:(id)arg0 ;
-(void)_showCompletedUIForPass:(id)arg0 ;
-(void)_showCompletedUIWithNextHandler:(id)arg0 ;
-(void)_startVerificationObserver;
-(void)_stopVerificationObserver;
-(void)_submitVerificationCode;
-(void)_terminateFlow;
-(void)dealloc;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)loadView;
-(void)next:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)verificationObserver:(id)arg0 didObserveVerificationCode:(id)arg1 ;
-(void)verificationObserverDidTimeout:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif