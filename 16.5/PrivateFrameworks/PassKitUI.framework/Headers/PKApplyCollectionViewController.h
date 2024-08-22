// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYCOLLECTIONVIEWCONTROLLER_H
#define PKAPPLYCOLLECTIONVIEWCONTROLLER_H

@class NSString, PKDynamicProvisioningPageContent;
@protocol PKApplyFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKApplyController.h"

@interface PKApplyCollectionViewController : PKPaymentSetupOptionsViewController <PKApplyFlowControllerProtocol>



@property (readonly, nonatomic) PKApplyController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKDynamicProvisioningPageContent *page; // ivar: _page
@property (copy, nonatomic) id *primaryButtonAction; // ivar: _primaryButtonAction
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(BOOL)shouldDisplayErrorOnWithdraw;
-(id)_secondaryButton;
-(id)additionalAnalyticsDictionaryForViewAppearing:(BOOL)arg0 ;
-(id)currentPage;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 ;
-(void)_cancelPressed;
-(void)_reportViewDidAppear:(BOOL)arg0 ;
-(void)_withdrawApplicationTapped;
-(void)didTapFooterLink:(id)arg0 ;
-(void)didTapLearnMore:(id)arg0 ;
-(void)didTapLink:(id)arg0 termsIdentifier:(id)arg1 analyticsIdentifier:(id)arg2 ;
-(void)displayDisplayableError:(id)arg0 ;
-(void)handleNextStep;
-(void)handleNextViewController:(id)arg0 displayableError:(id)arg1 ;
-(void)primaryButtonTapped;
-(void)secondaryButtonTapped;
-(void)terminateSetupFlow;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif