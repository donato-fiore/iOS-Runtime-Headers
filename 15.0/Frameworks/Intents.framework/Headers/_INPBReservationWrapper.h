// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRESERVATIONWRAPPER_H
#define _INPBRESERVATIONWRAPPER_H

@class PBCodable, NSString;
@protocol _INPBReservationWrapper, NSSecureCoding, NSCopying;


#import "_INPBBoatReservation.h"
#import "_INPBBusReservation.h"
#import "_INPBFlightReservation.h"
#import "_INPBLodgingReservation.h"
#import "_INPBRentalCarReservation.h"
#import "_INPBRestaurantReservation.h"
#import "_INPBTicketedEventReservation.h"
#import "_INPBTrainReservation.h"

@interface _INPBReservationWrapper : PBCodable <_INPBReservationWrapper, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBBoatReservation *boatReservation; // ivar: _boatReservation
@property (retain, nonatomic) _INPBBusReservation *busReservation; // ivar: _busReservation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBFlightReservation *flightReservation; // ivar: _flightReservation
@property (readonly, nonatomic) BOOL hasBoatReservation;
@property (readonly, nonatomic) BOOL hasBusReservation;
@property (readonly, nonatomic) BOOL hasFlightReservation;
@property (readonly, nonatomic) BOOL hasLodgingReservation;
@property (readonly, nonatomic) BOOL hasRentalCarReservation;
@property (readonly, nonatomic) BOOL hasRestaurantReservation;
@property (readonly, nonatomic) BOOL hasTicketedEventReservation;
@property (readonly, nonatomic) BOOL hasTrainReservation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLodgingReservation *lodgingReservation; // ivar: _lodgingReservation
@property (retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation; // ivar: _rentalCarReservation
@property (retain, nonatomic) _INPBRestaurantReservation *restaurantReservation; // ivar: _restaurantReservation
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation; // ivar: _ticketedEventReservation
@property (retain, nonatomic) _INPBTrainReservation *trainReservation; // ivar: _trainReservation


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