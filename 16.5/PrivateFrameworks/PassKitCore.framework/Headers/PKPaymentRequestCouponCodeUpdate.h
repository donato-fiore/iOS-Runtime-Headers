// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREQUESTCOUPONCODEUPDATE_H
#define PKPAYMENTREQUESTCOUPONCODEUPDATE_H

@class NSArray;
@protocol NSSecureCoding;


#import "PKPaymentRequestUpdate.h"

@interface PKPaymentRequestCouponCodeUpdate : PKPaymentRequestUpdate <NSSecureCoding>



@property (copy, nonatomic) NSArray *errors; // ivar: _errors


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithErrors:(id)arg0 paymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 ;
-(id)initWithPaymentSummaryItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif