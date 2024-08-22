// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREPROCESSMERCHANTACTIVITY_H
#define PKREPROCESSMERCHANTACTIVITY_H

@class UIActivity, PKPaymentTransaction, PKPaymentPass;



@interface PKReprocessMerchantActivity : UIActivity {
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
}




-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)initWithTransaction:(id)arg0 paymentPass:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif