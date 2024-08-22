// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBTICKETEDEVENTRESERVATION_H
#define _INPBTICKETEDEVENTRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBTicketedEventReservation, NSSecureCoding, NSCopying;


#import "_INPBTicketedEvent.h"
#import "_INPBReservation.h"
#import "_INPBSeat.h"

@interface _INPBTicketedEventReservation : PBCodable <_INPBTicketedEventReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBTicketedEvent *event; // ivar: _event
@property (readonly, nonatomic) BOOL hasEvent;
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