// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLYFIELDSVIEWCONTROLLER_H
#define PKAPPLYFIELDSVIEWCONTROLLER_H

@class UIBarButtonItem, PKApplyRequiredFieldsPage, NSString;
@protocol PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol;


#import "PKPaymentSetupFieldsViewController.h"
#import "PKApplyController.h"

@interface PKApplyFieldsViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol>

 {
    PKApplyController *_controller;
    UIBarButtonItem *_cancelButton;
    PKApplyRequiredFieldsPage *_applyPage;
    BOOL _isLoading;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
-(id)_analyticsErrorTextForError:(NSInteger)arg0 ;
-(id)currentPage;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 applyPage:(id)arg2 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)_analyticsReportError:(id)arg0 ;
-(void)_analyticsReportRowTapForFieldCell:(id)arg0 ;
-(void)_cancelPressed;
-(void)_completeInWalletLater;
-(void)_featureApplicationUpdated;
-(void)_handleNextStep;
-(void)_handleNextViewController:(id)arg0 displayableError:(id)arg1 terminationHandler:(id)arg2 ;
-(void)_showSubmissionSpinner:(BOOL)arg0 ;
-(void)_terminateFlow;
-(void)_withdrawApplicationTapped;
-(void)fieldCellDidTapButton:(id)arg0 ;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif