// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBREQUESTRIDEINTENT_H
#define _INPBREQUESTRIDEINTENT_H

@class PBCodable, NSString;
@protocol _INPBRequestRideIntent, NSSecureCoding, NSCopying;


#import "_INPBLocation.h"
#import "_INPBIntentMetadata.h"
#import "_INPBInteger.h"
#import "_INPBPaymentMethod.h"
#import "_INPBDataString.h"
#import "_INPBDateTimeRange.h"

@interface _INPBRequestRideIntent : PBCodable <_INPBRequestRideIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBLocation *dropOffLocation; // ivar: _dropOffLocation
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasPartySize;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (readonly, nonatomic) BOOL hasPaymentMethodName;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (readonly, nonatomic) BOOL hasPickupTime;
@property (readonly, nonatomic) BOOL hasRideOptionName;
@property (readonly, nonatomic) BOOL hasScheduledPickupTime;
@property (nonatomic) BOOL hasUsesApplePayForPayment;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBInteger *partySize; // ivar: _partySize
@property (retain, nonatomic) _INPBPaymentMethod *paymentMethod; // ivar: _paymentMethod
@property (retain, nonatomic) _INPBDataString *paymentMethodName; // ivar: _paymentMethodName
@property (retain, nonatomic) _INPBLocation *pickupLocation; // ivar: _pickupLocation
@property (retain, nonatomic) _INPBDateTimeRange *pickupTime; // ivar: _pickupTime
@property (retain, nonatomic) _INPBDataString *rideOptionName; // ivar: _rideOptionName
@property (retain, nonatomic) _INPBDateTimeRange *scheduledPickupTime; // ivar: _scheduledPickupTime
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesApplePayForPayment; // ivar: _usesApplePayForPayment


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif