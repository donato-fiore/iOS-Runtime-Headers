// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT20MANAGEDORDERLINEITEM_H
#define _TTC10FINANCEKIT20MANAGEDORDERLINEITEM_H

@class NSManagedObject, NSString, NSDecimalNumber;


#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit20ManagedOrderLineItem : NSManagedObject

@property (nonatomic, copy) NSString *gtin;
@property (nonatomic, copy) NSString *image;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) NSDecimalNumber *priceAmount;
@property (nonatomic, copy) NSString *priceCurrency;
@property (nonatomic) NSInteger quantity;
@property (nonatomic, copy) NSString *sku;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *subtitle;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *title;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif