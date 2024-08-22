// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INRESTAURANTRESERVATION_H
#define INRESTAURANTRESERVATION_H

@class NSNumber, CLPlacemark;
@protocol NSCopying, NSSecureCoding;


#import "INReservation.h"
#import "INDateComponentsRange.h"

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *partySize; // ivar: _partySize
@property (readonly, copy, nonatomic) INDateComponentsRange *reservationDuration; // ivar: _reservationDuration
@property (readonly, copy, nonatomic) CLPlacemark *restaurantLocation; // ivar: _restaurantLocation


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_duration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 URL:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 reservationDuration:(id)arg6 partySize:(id)arg7 restaurantLocation:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif