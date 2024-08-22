// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT12MANAGEDORDER_H
#define _TTC10FINANCEKIT12MANAGEDORDER_H

@class NSManagedObject, NSString, NSDate;


#import "_TtC10FinanceKit20ManagedOrderContents.h"
#import "_TtC10FinanceKit17ManagedOrderMonth.h"
#import "_TtC10FinanceKit24ManagedOrderRegistration.h"
#import "_TtC10FinanceKit16ManagedOrderType.h"
#import "_TtC10FinanceKit22ManagedOrderWebService.h"

@interface _TtC10FinanceKit12ManagedOrder : NSManagedObject

@property (nonatomic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, copy) NSDate *archiveDate;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSDate *automaticArchivingDate;
@property (nonatomic) BOOL automaticUpdatesEnabled;
@property (nonatomic, copy) NSDate *automaticUpdatesEnabledModificationDate;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) BOOL effectiveAutomaticUpdatesEnabled;
@property (nonatomic) BOOL effectiveNotificationsEnabled;
@property (nonatomic) NSInteger fetchSequenceNumber;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic, copy) NSDate *notificationsEnabledModificationDate;
@property (nonatomic, retain) _TtC10FinanceKit20ManagedOrderContents *orderContents;
@property (nonatomic, copy) NSDate *orderContentsModificationDate;
@property (nonatomic, copy) NSDate *orderContentsUpdatedDate;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit17ManagedOrderMonth *orderMonth;
@property (nonatomic, retain) _TtC10FinanceKit24ManagedOrderRegistration *orderRegistration;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;
@property (nonatomic) NSInteger requestAttemptCount;
@property (nonatomic) BOOL showsAsActive;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic) NSInteger updateSequenceNumber;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(void)awakeFromInsert;
-(void)willSave;


@end


#endif