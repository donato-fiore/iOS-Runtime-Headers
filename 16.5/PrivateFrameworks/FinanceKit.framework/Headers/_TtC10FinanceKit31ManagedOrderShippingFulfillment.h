// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT31MANAGEDORDERSHIPPINGFULFILLMENT_H
#define _TTC10FINANCEKIT31MANAGEDORDERSHIPPINGFULFILLMENT_H

@class NSManagedObject, NSString, NSDate, NSSet, CNPostalAddress, NSURL;


#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit31ManagedOrderShippingFulfillment : NSManagedObject

@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *carrierIdentifier;
@property (nonatomic, copy) NSDate *deliveryDate;
@property (nonatomic, copy) NSDate *estimatedDeliveryDate;
@property (nonatomic, copy) NSString *estimatedDeliveryWindowDurationValue;
@property (nonatomic, copy) NSString *fulfillmentIdentifier;
@property (nonatomic, copy) NSSet *lineItemObjects;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *notes;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) CNPostalAddress *recipientAddress;
@property (nonatomic, copy) NSString *recipientFamilyName;
@property (nonatomic, copy) NSString *recipientGivenName;
@property (nonatomic, copy) NSString *recipientOrganizationName;
@property (nonatomic, copy) NSDate *shippedDate;
@property (nonatomic) short shippingTypeValue;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *statusDescription;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSString *trackingNumber;
@property (nonatomic, copy) NSURL *trackingURL;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif