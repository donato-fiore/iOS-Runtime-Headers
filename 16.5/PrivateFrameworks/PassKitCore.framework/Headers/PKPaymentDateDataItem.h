// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTDATEDATAITEM_H
#define PKPAYMENTDATEDATAITEM_H

@class NSDate, NSTimeZone;


#import "PKPaymentDataItem.h"

@interface PKPaymentDateDataItem : PKPaymentDataItem

@property (retain, nonatomic) NSDate *paymentDate; // ivar: _paymentDate
@property (nonatomic) NSInteger paymentFrequency; // ivar: _paymentFrequency
@property (retain, nonatomic) NSTimeZone *paymentTimeZone; // ivar: _paymentTimeZone


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;
-(id)initWithModel:(id)arg0 ;


@end


#endif