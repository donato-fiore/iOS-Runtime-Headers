// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAPPLICATIONEXPRESSSTATE_H
#define PKPAYMENTAPPLICATIONEXPRESSSTATE_H

@class PKPaymentApplication;

#import <Foundation/Foundation.h>


@interface PKPaymentApplicationExpressState : NSObject {
    ? _isExpressEnabled;
    ? _isPending;
}


@property (nonatomic) BOOL isExpressEnabled;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication; // ivar: paymentApplication


-(id)init;
-(id)initWithPaymentApplication:(id)arg0 ;


@end


#endif