// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTBILLINGAGREEMENTDATAITEM_H
#define PKPAYMENTBILLINGAGREEMENTDATAITEM_H

@class NSString;


#import "PKPaymentDataItem.h"

@interface PKPaymentBillingAgreementDataItem : PKPaymentDataItem

@property (readonly, copy, nonatomic) NSString *billingAgreement;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;


@end


#endif