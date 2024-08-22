// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT29MANAGEDORDERPICKUPFULFILLMENT_H
#define _TTC10FINANCEKIT29MANAGEDORDERPICKUPFULFILLMENT_H

@class NSManagedObject, CNPostalAddress, NSString, NSSet, CLLocation, NSDate;


#import "_TtC10FinanceKit19ManagedOrderBarcode.h"
#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit29ManagedOrderPickupFulfillment : NSManagedObject

@property (nonatomic, retain) CNPostalAddress *address;
@property (nonatomic, retain) _TtC10FinanceKit19ManagedOrderBarcode *barcode;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *displayName;
@property (nonatomic, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic, copy) NSDate *pickedUpDate;
@property (nonatomic, copy) NSDate *pickupDate;
@property (nonatomic, copy) NSString *pickupWindowDurationValue;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusValue;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif