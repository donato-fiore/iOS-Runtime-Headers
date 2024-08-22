// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCARDENROLLMENTUPSELLOPERATION_H
#define SUCARDENROLLMENTUPSELLOPERATION_H

@class ISOperation, NSString, UIViewController;
@protocol SUPaymentSetupViewControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;



@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (readonly, nonatomic) BOOL didSucceed;
@property (nonatomic) NSInteger paymentSetupFeatureState; // ivar: _paymentSetupFeatureState
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)_paymentSetupFeature;
-(id)initWithViewController:(id)arg0 ;
-(void)paymentSetupViewControllerDidDismiss;
-(void)run;


@end


#endif