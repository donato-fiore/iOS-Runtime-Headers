// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI17TRANSACTIONSMODEL_H
#define _TTC9PASSKITUI17TRANSACTIONSMODEL_H

@protocol PKPaymentServiceDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI17TransactionsModel : NSObject <PKPaymentServiceDelegate>

 {
    ? wrappedPass;
    ? _transactions;
    ? _notificationServiceUpdatesEnabled;
    ? paymentService;
}




-(id)init;
-(void)dealloc;
-(void)passSettingsDidChangeWithNotification:(id)arg0 ;


@end


#endif