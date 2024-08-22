// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSHIPPINGADDRESSDATAITEM_H
#define PKPAYMENTSHIPPINGADDRESSDATAITEM_H

@class NSAttributedString, CNContact, NSString;


#import "PKPaymentDataItem.h"

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSAttributedString *formattedAddressString;
@property (readonly, nonatomic) BOOL isShippingEditable;
@property (readonly, nonatomic) CNContact *shippingAddress;
@property (readonly, nonatomic) NSString *shippingType;


+(NSInteger)dataType;
-(BOOL)isShippingServicableWithError:(*id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)_shippingName;
-(id)errors;
-(id)paymentContactFormatErrors;


@end


#endif