// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT14MANAGEDACCOUNT_H
#define _TTC10FINANCEKIT14MANAGEDACCOUNT_H

@class NSManagedObject, NSSet, NSString, NSUUID, NSData;



@interface _TtC10FinanceKit14ManagedAccount : NSManagedObject

@property (nonatomic, retain) NSSet *accountBalanceObjects;
@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, copy) NSString *accountIdentificationDisplayIdentifier;
@property (nonatomic, copy) NSString *accountIdentificationIdentifier;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) short accountIdentifierSchemeValue;
@property (nonatomic) short accountStatusValue;
@property (nonatomic) short accountTypeValue;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, retain) NSSet *transactionObjects;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif