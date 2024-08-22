// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSEXPRESSCHECKOUTPAYMENTCHOICES_H
#define AMSEXPRESSCHECKOUTPAYMENTCHOICES_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSExpressCheckoutPaymentChoices : NSObject <NSSecureCoding>

 {
    ? title;
    ? details;
    ? useApplePayButtonTitle;
    ? useApplePayButtonEnum;
    ? useDifferentPaymentMethodButtonTitle;
    ? eligibleCards;
    ? managePaymentsParams;
    ? metrics;
}


@property (nonatomic, readonly) NSInteger cardsCount;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, copy) NSDictionary *metrics;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif