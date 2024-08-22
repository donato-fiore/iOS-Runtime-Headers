// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(id)currentPage;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 ;
-(void)_cancelPressed;
-(void)_continueTapped;
-(void)_withdrawApplicationTapped;
-(void)didTapFooterLink:(id)arg0 ;
-(void)displayDisplayableError:(id)arg0 ;
-(void)handleNextStep;
-(void)handleNextViewController:(id)arg0 displayableError:(id)arg1 ;
-(void)terminateSetupFlow;
-(void)viewDidLoad;


@end


#endif