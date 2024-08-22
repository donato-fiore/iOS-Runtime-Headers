// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIPAYMENTSETUPTASK_H
#define AMSUIPAYMENTSETUPTASK_H

@class AMSTask, NSString, AMSBinaryPromise, UIViewController;
@protocol AMSUIPaymentSetupViewControllerDelegate, OS_dispatch_queue;



@interface AMSUIPaymentSetupTask : AMSTask <AMSUIPaymentSetupViewControllerDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSInteger paymentSetupFeatureState; // ivar: _paymentSetupFeatureState
@property (retain, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (retain, nonatomic) AMSBinaryPromise *resultPromise; // ivar: _resultPromise
@property (retain, nonatomic) AMSBinaryPromise *setupControllerPromise; // ivar: _setupControllerPromise
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_didSucceed;
-(id)_fetchPaymentSetupFeature;
-(id)initWithReferrerIdentifier:(id)arg0 presentingViewController:(id)arg1 ;
-(id)present;
-(void)_presentPaymentSetupControllerWithPaymentSetupFeatures:(id)arg0 ;
-(void)paymentSetupViewControllerDidDismiss;


@end


#endif