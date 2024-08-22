// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT30MANAGEDORDERPAYMENTSUMMARYITEM_H
#define _TTC10FINANCEKIT30MANAGEDORDERPAYMENTSUMMARYITEM_H

@class NSManagedObject, NSDecimalNumber, NSString;


#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit30ManagedOrderPaymentSummaryItem : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *label;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) NSDecimalNumber *valueAmount;
@property (nonatomic, copy) NSString *valueCurrencyCode;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif