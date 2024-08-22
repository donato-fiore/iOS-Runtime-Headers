// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT27MANAGEDPENDINGAPPLEPAYORDER_H
#define _TTC10FINANCEKIT27MANAGEDPENDINGAPPLEPAYORDER_H

@class NSManagedObject, NSString, NSDate;


#import "_TtC10FinanceKit16ManagedOrderType.h"
#import "_TtC10FinanceKit22ManagedOrderWebService.h"

@interface _TtC10FinanceKit27ManagedPendingApplePayOrder : NSManagedObject

@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic) NSInteger requestAttemptCount;
@property (nonatomic) NSInteger responseCount;
@property (nonatomic, copy) NSString *transactionIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(void)awakeFromInsert;


@end


#endif