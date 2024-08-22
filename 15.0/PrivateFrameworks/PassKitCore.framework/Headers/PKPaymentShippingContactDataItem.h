// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSHIPPINGCONTACTDATAITEM_H
#define PKPAYMENTSHIPPINGCONTACTDATAITEM_H

@class NSString;


#import "PKPaymentDataItem.h"

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *phone;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)errors;
-(id)errorsForContactFields:(id)arg0 ;
-(id)paymentContactFormatErrors;
-(id)requiredContactFields;


@end


#endif