// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTNOTIFICATIONAPPURLHELPER_H
#define PKPAYMENTNOTIFICATIONAPPURLHELPER_H


#import <Foundation/Foundation.h>


@interface PKPaymentNotificationAppURLHelper : NSObject



+(BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)arg0 ;
+(id)_appURLForNotificationOfType:(id)arg0 paymentPass:(id)arg1 serviceIdentifier:(id)arg2 appLaunchToken:(id)arg3 pathSuffix:(id)arg4 usingDeviceAccountNumber:(BOOL)arg5 ;
+(id)appURLForMessageNotification:(id)arg0 pass:(id)arg1 appLaunchToken:(id)arg2 ;
+(id)appURLForTransactionNotification:(id)arg0 excludeTransactionIdentifier:(BOOL)arg1 pass:(id)arg2 pathSuffix:(id)arg3 appLaunchToken:(id)arg4 ;
+(id)appURLForTransactionNotification:(id)arg0 pass:(id)arg1 appLaunchToken:(id)arg2 ;


@end


#endif