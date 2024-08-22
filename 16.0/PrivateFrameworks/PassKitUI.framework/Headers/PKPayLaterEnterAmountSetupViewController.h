// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERENTERAMOUNTSETUPVIEWCONTROLLER_H
#define PKPAYLATERENTERAMOUNTSETUPVIEWCONTROLLER_H

@class PKPayLaterDynamicContentPage, NSString;


#import "PKPayLaterEnterAmountViewController.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterEnterAmountSetupViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    NSString *_minimumString;
    NSString *_maximumString;
    NSString *_pageTag;
}




-(id)headerSubtitle;
-(id)headerTitle;
-(id)initWithSetupFlowController:(id)arg0 ;
-(void)_cancelButtonTapped;
-(void)_reportViewDidAppear:(BOOL)arg0 ;
-(void)currencyAmountUpdated:(id)arg0 ;
-(void)nextButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif