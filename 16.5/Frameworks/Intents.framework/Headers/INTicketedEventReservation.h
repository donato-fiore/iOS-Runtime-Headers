// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTICKETEDEVENTRESERVATION_H
#define INTICKETEDEVENTRESERVATION_H

@protocol NSCopying, NSSecureCoding;


#import "INReservation.h"
#import "INTicketedEvent.h"
#import "INSeat.h"

@interface INTicketedEventReservation : INReservation <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INTicketedEvent *event; // ivar: _event
@property (readonly, copy, nonatomic) INSeat *reservedSeat; // ivar: _reservedSeat


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_duration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 URL:(id)arg6 reservedSeat:(id)arg7 event:(id)arg8 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 reservedSeat:(id)arg6 event:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif