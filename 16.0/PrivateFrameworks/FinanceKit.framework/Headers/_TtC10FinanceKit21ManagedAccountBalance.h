// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT21MANAGEDACCOUNTBALANCE_H
#define _TTC10FINANCEKIT21MANAGEDACCOUNTBALANCE_H

@class NSManagedObject, NSDecimalNumber, NSDate, NSString, NSUUID, NSData;


#import "_TtC10FinanceKit14ManagedAccount.h"

@interface _TtC10FinanceKit21ManagedAccountBalance : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit14ManagedAccount *accountObject;
@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, copy) NSDate *balanceDate;
@property (nonatomic) short creditDebitIndicatorValue;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *metadata;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif