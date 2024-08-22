// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESTAURANTRESERVATIONUSERBOOKING_H
#define INRESTAURANTRESERVATIONUSERBOOKING_H

@class NSString, NSDate;
@protocol INRestaurantReservationUserBookingExport, NSCopying;


#import "INRestaurantReservationBooking.h"
#import "INRestaurantGuest.h"
#import "INRestaurantOffer.h"

@interface INRestaurantReservationUserBooking : INRestaurantReservationBooking <INRestaurantReservationUserBookingExport, NSCopying>



@property (copy, nonatomic) NSString *advisementText; // ivar: _advisementText
@property (copy, nonatomic) NSDate *dateStatusModified; // ivar: _dateStatusModified
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) INRestaurantGuest *guest; // ivar: _guest
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText; // ivar: _guestProvidedSpecialRequestText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer; // ivar: _selectedOffer
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestaurant:(id)arg0 bookingDate:(id)arg1 partySize:(NSUInteger)arg2 bookingIdentifier:(id)arg3 guest:(id)arg4 status:(NSUInteger)arg5 dateStatusModified:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif