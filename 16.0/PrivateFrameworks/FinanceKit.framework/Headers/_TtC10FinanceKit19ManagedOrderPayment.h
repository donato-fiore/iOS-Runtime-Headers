// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT19MANAGEDORDERPAYMENT_H
#define _TTC10FINANCEKIT19MANAGEDORDERPAYMENT_H

@class NSManagedObject, NSSet, NSArray, NSDecimalNumber, NSString;



@interface _TtC10FinanceKit19ManagedOrderPayment : NSManagedObject

@property (nonatomic, copy) NSSet *applePayTransactionIdentifierObjects;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSSet *summaryItemObjects;
@property (nonatomic, retain) NSDecimalNumber *totalAmount;
@property (nonatomic, copy) NSString *totalCurrencyCode;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif