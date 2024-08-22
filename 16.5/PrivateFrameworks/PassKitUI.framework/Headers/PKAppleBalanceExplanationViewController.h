// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLEBALANCEEXPLANATIONVIEWCONTROLLER_H
#define PKAPPLEBALANCEEXPLANATIONVIEWCONTROLLER_H



#import "PKExplanationViewController.h"
#import "PKAppleBalanceSetupFlowController.h"

@interface PKAppleBalanceExplanationViewController : PKExplanationViewController {
    PKAppleBalanceSetupFlowController *_setupController;
}




-(id)_bodyText;
-(id)_primaryActionTitle;
-(id)_titleText;
-(id)initWithSetupFlowController:(id)arg0 ;
-(void)_presentError:(id)arg0 ;
-(void)_presentNextViewController;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif