// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBFLIGHT_H
#define _INPBFLIGHT_H

@class PBCodable, NSString;
@protocol _INPBFlight, NSSecureCoding, NSCopying;


#import "_INPBAirline.h"
#import "_INPBAirportGate.h"
#import "_INPBDateTimeRange.h"

@interface _INPBFlight : PBCodable <_INPBFlight, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAirline *airline; // ivar: _airline
@property (retain, nonatomic) _INPBAirportGate *arrivalAirportGate; // ivar: _arrivalAirportGate
@property (retain, nonatomic) _INPBDateTimeRange *boardingTime; // ivar: _boardingTime
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _INPBAirportGate *departureAirportGate; // ivar: _departureAirportGate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDateTimeRange *flightDuration; // ivar: _flightDuration
@property (copy, nonatomic) NSString *flightNumber; // ivar: _flightNumber
@property (readonly, nonatomic) BOOL hasAirline;
@property (readonly, nonatomic) BOOL hasArrivalAirportGate;
@property (readonly, nonatomic) BOOL hasBoardingTime;
@property (readonly, nonatomic) BOOL hasDepartureAirportGate;
@property (readonly, nonatomic) BOOL hasFlightDuration;
@property (readonly, nonatomic) BOOL hasFlightNumber;
@property (readonly) NSUInteger hash;
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