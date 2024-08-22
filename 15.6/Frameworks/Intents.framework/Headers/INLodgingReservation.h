// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INLODGINGRESERVATION_H
#define INLODGINGRESERVATION_H

@class CLPlacemark, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "INReservation.h"
#import "INDateComponentsRange.h"

@interface INLodgingReservation : INReservation <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CLPlacemark *lodgingBusinessLocation; // ivar: _lodgingBusinessLocation
@property (readonly, copy, nonatomic) NSNumber *numberOfAdults; // ivar: _numberOfAdults
@property (readonly, copy, nonatomic) NSNumber *numberOfChildren; // ivar: _numberOfChildren
@property (readonly, copy, nonatomic) INDateComponentsRange *reservationDuration; // ivar: _reservationDuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_duration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 URL:(id)arg6 lodgingBusinessLocation:(id)arg7 reservationDuration:(id)arg8 numberOfAdults:(id)arg9 numberOfChildren:(id)arg10 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 lodgingBusinessLocation:(id)arg6 reservationDuration:(id)arg7 numberOfAdults:(id)arg8 numberOfChildren:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif