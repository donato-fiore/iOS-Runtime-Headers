// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INBOATRESERVATION_H
#define INBOATRESERVATION_H

@protocol NSCopying, NSSecureCoding;


#import "INReservation.h"
#import "INBoatTrip.h"
#import "INSeat.h"

@interface INBoatReservation : INReservation <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INBoatTrip *boatTrip; // ivar: _boatTrip
@property (readonly, copy, nonatomic) INSeat *reservedSeat; // ivar: _reservedSeat


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_duration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 URL:(id)arg6 reservedSeat:(id)arg7 boatTrip:(id)arg8 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 url:(id)arg6 reservedSeat:(id)arg7 boatTrip:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif