// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSHIPPINGMETHODDATAITEM_H
#define PKPAYMENTSHIPPINGMETHODDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKShippingMethod.h"

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKShippingMethod *shippingMethod;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;


@end


#endif