// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCOUPONCODEDATAITEM_H
#define PKPAYMENTCOUPONCODEDATAITEM_H

@class NSString, NSArray;


#import "PKPaymentDataItem.h"

@interface PKPaymentCouponCodeDataItem : PKPaymentDataItem

@property (readonly, nonatomic, getter=isAwaitingCouponCodeUpdate) BOOL awaitingCouponCodeUpdate;
@property (readonly, copy, nonatomic) NSString *couponCode;
@property (readonly, copy, nonatomic) NSArray *errors;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;


@end


#endif