// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRENTALCARRESERVATION_H
#define INRENTALCARRESERVATION_H

@class CLPlacemark;
@protocol NSCopying, NSSecureCoding;


#import "INReservation.h"
#import "INRentalCar.h"
#import "INDateComponentsRange.h"

@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation; // ivar: _dropOffLocation
@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation; // ivar: _pickupLocation
@property (readonly, copy, nonatomic) INRentalCar *rentalCar; // ivar: _rentalCar
@property (readonly, copy, nonatomic) INDateComponentsRange *rentalDuration; // ivar: _rentalDuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_duration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 URL:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 rentalCar:(id)arg6 rentalDuration:(id)arg7 pickupLocation:(id)arg8 dropOffLocation:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif