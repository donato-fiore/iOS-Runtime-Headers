// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT16MANAGEDORDERTYPE_H
#define _TTC10FINANCEKIT16MANAGEDORDERTYPE_H

@class NSManagedObject, NSString, NSDate, NSSet, NSData;



@interface _TtC10FinanceKit16ManagedOrderType : NSManagedObject

@property (nonatomic) NSInteger countOfOrdersWithEffectiveAutomaticUpdatesEnabled;
@property (nonatomic, copy) NSString *deviceLibraryIdentifier;
@property (nonatomic) BOOL hasPushToken;
@property (nonatomic, copy) NSDate *lastRequestTokenAttemptDate;
@property (nonatomic, retain) NSSet *orderRegistrations;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, retain) NSSet *orderWebServices;
@property (nonatomic, retain) NSSet *orders;
@property (nonatomic, retain) NSSet *pendingApplePayOrders;
@property (nonatomic) NSInteger propagateUpdateSequenceNumber;
@property (nonatomic, copy) NSData *pushToken;
@property (nonatomic) NSInteger requestTokenAttemptCount;
@property (nonatomic) NSInteger updateSequenceNumber;
@property (nonatomic) short updateTokenCount;
@property (nonatomic, copy) NSDate *updateTokenRefillDate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(void)willSave;


@end


#endif