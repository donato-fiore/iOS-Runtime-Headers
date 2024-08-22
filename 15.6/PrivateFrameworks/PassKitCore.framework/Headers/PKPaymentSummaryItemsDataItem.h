// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSUMMARYITEMSDATAITEM_H
#define PKPAYMENTSUMMARYITEMSDATAITEM_H

@class NSString, NSArray;


#import "PKPaymentDataItem.h"

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *paymentSummaryItems;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;


@end


#endif