// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT24MANAGEDORDERREGISTRATION_H
#define _TTC10FINANCEKIT24MANAGEDORDERREGISTRATION_H

@class NSManagedObject, NSString, NSDate;


#import "_TtC10FinanceKit12ManagedOrder.h"
#import "_TtC10FinanceKit16ManagedOrderType.h"
#import "_TtC10FinanceKit22ManagedOrderWebService.h"

@interface _TtC10FinanceKit24ManagedOrderRegistration : NSManagedObject

@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *cancellationDate;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *deviceLibraryIdentifier;
@property (nonatomic) BOOL isMaybeRegistered;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, retain) _TtC10FinanceKit12ManagedOrder *order;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic) NSInteger requestAttemptCount;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(void)awakeFromInsert;


@end


#endif