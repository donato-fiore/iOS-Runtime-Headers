// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTINVITATIONONBOARDINGVIEWCONTROLLER_H
#define PKACCOUNTINVITATIONONBOARDINGVIEWCONTROLLER_H



#import "PKExplanationViewController.h"
#import "PKAccountInvitationController.h"

@interface PKAccountInvitationOnboardingViewController : PKExplanationViewController {
    PKAccountInvitationController *_controller;
    BOOL _didBeginOnboardingSubject;
}




-(id)initWithController:(id)arg0 ;
-(void)_beginReportingIfNecessary;
-(void)_endReportingIfNecessary;
-(void)_reportContinueTapped;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif