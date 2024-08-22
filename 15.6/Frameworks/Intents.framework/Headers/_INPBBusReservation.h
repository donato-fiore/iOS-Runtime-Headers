// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBBUSRESERVATION_H
#define _INPBBUSRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBBusReservation, NSSecureCoding, NSCopying;


#import "_INPBBusTrip.h"
#import "_INPBReservation.h"
#import "_INPBSeat.h"

@interface _INPBBusReservation : PBCodable <_INPBBusReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBBusTrip *busTrip; // ivar: _busTrip
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBusTrip;
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