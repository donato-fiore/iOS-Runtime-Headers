// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRENTALCARRESERVATION_H
#define _INPBRENTALCARRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBRentalCarReservation, NSSecureCoding, NSCopying;


#import "_INPBLocationValue.h"
#import "_INPBRentalCar.h"
#import "_INPBDateTimeRange.h"
#import "_INPBReservation.h"

@interface _INPBRentalCarReservation : PBCodable <_INPBRentalCarReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBLocationValue *dropOffLocation; // ivar: _dropOffLocation
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (readonly, nonatomic) BOOL hasRentalCar;
@property (readonly, nonatomic) BOOL hasRentalDuration;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation; // ivar: _pickupLocation
@property (retain, nonatomic) _INPBRentalCar *rentalCar; // ivar: _rentalCar
@property (retain, nonatomic) _INPBDateTimeRange *rentalDuration; // ivar: _rentalDuration
@property (retain, nonatomic) _INPBReservation *reservation; // ivar: _reservation
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