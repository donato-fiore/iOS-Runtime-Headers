// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYFIELDSVIEWCONTROLLER_H
#define PKAPPLYFIELDSVIEWCONTROLLER_H

@class PKApplyRequiredFieldsPage, NSString;
@protocol PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol;


#import "PKDynamicProvisioningFieldsPageViewController.h"
#import "PKApplyController.h"

@interface PKApplyFieldsViewController : PKDynamicProvisioningFieldsPageViewController <PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol>

 {
    PKApplyController *_controller;
    PKApplyRequiredFieldsPage *_applyPage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
-(NSUInteger)onPresentationRemoveViewControllersAfterMarker;
-(id)currentPage;
-(id)defaultHeaderViewSubTitle;
-(id)defaultHeaderViewTitle;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 applyPage:(id)arg2 ;
-(void)_analyticsReportError:(id)arg0 ;
-(void)_analyticsReportRowTapForFieldCell:(id)arg0 ;
-(void)_completeInWalletLater;
-(void)_featureApplicationUpdated;
-(void)_handleNextStep;
-(void)_handleNextViewController:(id)arg0 displayableError:(id)arg1 terminationHandler:(id)arg2 ;
-(void)_terminateFlow;
-(void)_withdrawApplicationTapped;
-(void)didTapFooterLink:(id)arg0 ;
-(void)didTapLink:(id)arg0 termsIdentifier:(id)arg1 analyticsIdentifier:(id)arg2 ;
-(void)fieldCellDidTapButton:(id)arg0 ;
-(void)handleCancelTapped;
-(void)handleNextButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif