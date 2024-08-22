// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYEXPLANATIONVIEWCONTROLLER_H
#define PKAPPLYEXPLANATIONVIEWCONTROLLER_H

@class NSString;
@protocol PKApplyFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;


#import "PKDynamicProvisioningPageViewController.h"
#import "PKBusinessChatController.h"
#import "PKApplyController.h"

@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol>

 {
    BOOL _isLoading;
    PKBusinessChatController *_businessChatController;
}


@property (copy, nonatomic) id *auxiliaryAction; // ivar: _auxiliaryAction
@property (copy, nonatomic) id *bodyButtonAction;
@property (copy, nonatomic) id *continueAction; // ivar: _continueAction
@property (retain, nonatomic) PKApplyController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *doneAction; // ivar: _doneAction
@property (copy, nonatomic) id *doneButtonAction;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *learnMoreAction; // ivar: _learnMoreAction
@property (copy, nonatomic) id *primaryButtonAction;
@property (copy, nonatomic) id *secondaryButtonAction;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(id)analyticsAdditionalValues;
-(id)analyticsPageTag;
-(id)currentPage;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 ;
-(void)_analyticsReportButtonTap:(id)arg0 ;
-(void)_auxiliary;
-(void)_cancel;
-(void)_continue;
-(void)_done;
-(void)_featureApplicationUpdated;
-(void)_learnMore;
-(void)_linkAction:(id)arg0 ;
-(void)_performActionForBlock:(id)arg0 ;
-(void)_performDoneAction:(BOOL)arg0 ;
-(void)_performLearnMoreAction;
-(void)_presentInvitationContactSupport;
-(void)_presentTermsWithIdentifier:(id)arg0 ;
-(void)handleNextStep;
-(void)handleNextViewController:(id)arg0 displayableError:(id)arg1 ;
-(void)showNavigationBarSpinner:(BOOL)arg0 ;
-(void)terminateSetupFlow;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif