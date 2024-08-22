// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI27PAYMENTPASSACTIONWIDGETVIEW11COORDINATOR_H
#define _TTCV9PASSKITUI27PAYMENTPASSACTIONWIDGETVIEW11COORDINATOR_H

@protocol PKPaymentPassActionWidgetViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI27PaymentPassActionWidgetView11Coordinator : NSObject <PKPaymentPassActionWidgetViewDelegate>

 {
    ? call;
    ? website;
    ? message;
}




-(id)init;
-(void)callIssuer;
-(void)openBusinessChat;
-(void)openIssuerWebsite;


@end


#endif