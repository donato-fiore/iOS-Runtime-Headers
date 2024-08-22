// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV9PAYMENTUI32PAYMENTSETUPNAVIGATIONCONTROLLER11COORDINATOR_H
#define _TTCV9PAYMENTUI32PAYMENTSETUPNAVIGATIONCONTROLLER11COORDINATOR_H

@protocol PKPaymentSetupDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PaymentUI32PaymentSetupNavigationController11Coordinator : NSObject <PKPaymentSetupDelegate>

 {
    ? parent;
    ? setupFinishedAction;
}




-(id)init;
-(void)paymentSetupDidFinish:(id)arg0 ;


@end


#endif