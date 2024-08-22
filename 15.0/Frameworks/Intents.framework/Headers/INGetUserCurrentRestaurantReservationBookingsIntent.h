// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETUSERCURRENTRESTAURANTRESERVATIONBOOKINGSINTENT_H
#define INGETUSERCURRENTRESTAURANTRESERVATIONBOOKINGSINTENT_H

@class NSString, NSDate, NSNumber;
@protocol INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying;


#import "INIntent.h"
#import "INRestaurant.h"

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults; // ivar: _earliestBookingDateForResults
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults; // ivar: _maximumNumberOfResults
@property (copy, nonatomic) NSString *reservationIdentifier; // ivar: _reservationIdentifier
@property (copy, nonatomic) INRestaurant *restaurant; // ivar: _restaurant
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestaurant:(id)arg0 reservationIdentifier:(id)arg1 maximumNumberOfResults:(id)arg2 earliestBookingDateForResults:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif