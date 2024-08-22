// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSCARDENROLLMENT_H
#define AMSCARDENROLLMENT_H


#import <Foundation/Foundation.h>


@interface AMSCardEnrollment : NSObject



+(BOOL)beginCardEnrollmentAttemptWithBag:(id)arg0 account:(id)arg1 ;
+(BOOL)shouldAttemptApplePayClassicWithBag:(id)arg0 accessControlRef:(struct __SecAccessControl *)arg1 ;
+(BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)arg0 paymentNetworks:(id)arg1 accessControlRef:(struct __SecAccessControl *)arg2 ;
+(BOOL)shouldAttemptAutoEnrollment;
+(BOOL)shouldAttemptAutoEnrollmentWithBag:(id)arg0 accessControlRef:(struct __SecAccessControl *)arg1 ;
+(BOOL)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg0 ;
+(BOOL)shouldUseApplePayClassicWithBag:(id)arg0 ;
+(BOOL)shouldUseAutoEnrollmentWithBag:(id)arg0 ;
+(BOOL)shouldUseAutoEnrollmentWithPercentage:(CGFloat)arg0 sessionDuration:(CGFloat)arg1 ;
+(id)_cardEligibilityStatusForCountryCode:(id)arg0 ;
+(id)_currentIdentifier;
+(id)_paymentServicesMerchantURLPromise;
+(id)_shouldAttemptApplePayWithCountryCode:(id)arg0 paymentNetworks:(id)arg1 ;
+(id)paymentServicesMerchantURL;
+(void)clearAutoEnrollmentIdentifier;
+(void)finishCardEnrollmentAttemptWithBag:(id)arg0 buyParams:(id)arg1 purchaseResult:(id)arg2 ;
+(void)updateAutoEnrollmentIdentifier;


@end


#endif