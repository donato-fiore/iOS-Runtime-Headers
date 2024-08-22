// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT22MANAGEDORDERWEBSERVICE_H
#define _TTC10FINANCEKIT22MANAGEDORDERWEBSERVICE_H

@class NSManagedObject, NSURL, NSString, NSDate, NSSet;


#import "_TtC10FinanceKit16ManagedOrderType.h"

@interface _TtC10FinanceKit22ManagedOrderWebService : NSManagedObject

@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic) NSInteger countOfLogEntries;
@property (nonatomic) NSInteger countOfOrdersWithEffectiveAutomaticUpdatesEnabled;
@property (nonatomic) NSInteger fetchChangesSequenceNumber;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic, copy) NSDate *lastModifiedValueModificationDate;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, copy) NSSet *logEntries;
@property (nonatomic, retain) NSSet *orderRegistrations;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *pendingApplePayOrders;
@property (nonatomic) NSInteger requestAttemptCount;
@property (nonatomic) NSInteger updateSequenceNumber;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif