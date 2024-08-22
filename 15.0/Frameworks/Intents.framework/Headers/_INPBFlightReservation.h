// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBFLIGHTRESERVATION_H
#define _INPBFLIGHTRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBFlightReservation, NSSecureCoding, NSCopying;


#import "_INPBFlight.h"
#import "_INPBReservation.h"
#import "_INPBSeat.h"

@interface _INPBFlightReservation : PBCodable <_INPBFlightReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBFlight *flight; // ivar: _flight
@property (readonly, nonatomic) BOOL hasFlight;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservedSeat;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBReservation *reservation; // ivar: _reservation
@property (retain, nonatomic) _INPBSeat *reservedSeat; // ivar: _reservedSeat
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