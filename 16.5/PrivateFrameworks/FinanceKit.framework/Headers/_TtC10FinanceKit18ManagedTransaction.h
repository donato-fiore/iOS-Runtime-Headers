// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT18MANAGEDTRANSACTION_H
#define _TTC10FINANCEKIT18MANAGEDTRANSACTION_H

@class NSManagedObject, NSDecimalNumber, NSString, NSUUID, CLLocation, NSData, NSDate;


#import "_TtC10FinanceKit14ManagedAccount.h"

@interface _TtC10FinanceKit18ManagedTransaction : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit14ManagedAccount *accountObject;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic) short categoryValue;
@property (nonatomic) short creditDebitIndicatorValue;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, retain) NSDecimalNumber *foreignAmount;
@property (nonatomic, copy) NSString *foreignCurrency;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) short merchantCategoryCode;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic) short sourceValue;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic, copy) NSString *transactionDescription;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic) short transactionStatusValue;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif