// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBRESTAURANTRESERVATION_H
#define _INPBRESTAURANTRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBRestaurantReservation, NSSecureCoding, NSCopying;


#import "_INPBInteger.h"
#import "_INPBReservation.h"
#import "_INPBDateTimeRange.h"
#import "_INPBLocation.h"

@interface _INPBRestaurantReservation : PBCodable <_INPBRestaurantReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPartySize;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservationDuration;
@property (readonly, nonatomic) BOOL hasRestaurantLocation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBInteger *partySize; // ivar: _partySize
@property (retain, nonatomic) _INPBReservation *reservation; // ivar: _reservation
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration; // ivar: _reservationDuration
@property (retain, nonatomic) _INPBLocation *restaurantLocation; // ivar: _restaurantLocation
@property (readonly) Class superclass;


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