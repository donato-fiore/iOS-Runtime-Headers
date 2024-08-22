// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVIRTUALCARDENROLLMENTVIEWCONTROLLER_H
#define PKVIRTUALCARDENROLLMENTVIEWCONTROLLER_H

@class NSString, PKPaymentPass;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationViewControllerDelegate, PKVirtualCardEnrollmentViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKHeroCardExplainationHeaderView.h"

@interface PKVirtualCardEnrollmentViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationViewControllerDelegate>

 {
    PKHeroCardExplainationHeaderView *_heroCardView;
    BOOL _didBeginPassManagementSubject;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKVirtualCardEnrollmentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithPaymentPass:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)_beginReportingIfNecessary;
-(void)_endReportingIfNecessary;
-(void)dealloc;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)passDidNotUpdateInTime;
-(void)passDidUpdate;
-(void)paymentAuthorizationViewController:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationViewControllerDidFinish:(id)arg0 ;
-(void)receivedPassUpdatedNotification:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)waitForPassToUpdate;


@end


#endif