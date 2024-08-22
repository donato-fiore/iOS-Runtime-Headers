// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT20MANAGEDORDERCONTENTS_H
#define _TTC10FINANCEKIT20MANAGEDORDERCONTENTS_H

@class NSManagedObject, NSArray, NSSet, NSDate, NSString, NSURL;


#import "_TtC10FinanceKit20ManagedOrderMerchant.h"
#import "_TtC10FinanceKit16ManagedOrderData.h"
#import "_TtC10FinanceKit19ManagedOrderPayment.h"
#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit20ManagedOrderContents : NSManagedObject

@property (nonatomic, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, copy) NSSet *associatedApplicationObjects;
@property (nonatomic) short changeNotificationsValue;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSString *customerEmailAddress;
@property (nonatomic, copy) NSString *customerFamilyName;
@property (nonatomic, copy) NSString *customerGivenName;
@property (nonatomic, copy) NSString *customerOrganizationName;
@property (nonatomic, copy) NSString *customerPhoneNumber;
@property (nonatomic) BOOL hasActiveFulfillment;
@property (nonatomic, retain) NSSet *images;
@property (nonatomic) short internalSchemaVersion;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, retain) _TtC10FinanceKit20ManagedOrderMerchant *merchant;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderData *orderData;
@property (nonatomic, copy) NSURL *orderManagementURL;
@property (nonatomic, copy) NSString *orderNumber;
@property (nonatomic) short orderTypeValue;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderPayment *payment;
@property (nonatomic, copy) NSSet *pickupFulfillmentObjects;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;
@property (nonatomic) short schemaVersion;
@property (nonatomic, copy) NSSet *shippingFulfillmentObjects;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSDate *updatedDate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif