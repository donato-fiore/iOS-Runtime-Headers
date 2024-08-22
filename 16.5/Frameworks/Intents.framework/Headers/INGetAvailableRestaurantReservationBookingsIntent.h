// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INGETAVAILABLERESTAURANTRESERVATIONBOOKINGSINTENT_H
#define INGETAVAILABLERESTAURANTRESERVATIONBOOKINGSINTENT_H

@class NSString, NSDate, NSNumber, NSDateComponents;
@protocol INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying;


#import "INIntent.h"
#import "INRestaurant.h"

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <INGetAvailableRestaurantReservationBookingsIntentExport, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults; // ivar: _earliestBookingDateForResults
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *latestBookingDateForResults; // ivar: _latestBookingDateForResults
@property (copy, nonatomic) NSNumber *maximumNumberOfResults; // ivar: _maximumNumberOfResults
@property (nonatomic) NSUInteger partySize; // ivar: _partySize
@property (retain, nonatomic) NSDate *preferredBookingDate; // ivar: _preferredBookingDate
@property (copy, nonatomic) NSDateComponents *preferredBookingDateComponents; // ivar: _preferredBookingDateComponents
@property (copy, nonatomic) INRestaurant *restaurant; // ivar: _restaurant
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestaurant:(id)arg0 partySize:(NSUInteger)arg1 preferredBookingDateComponents:(id)arg2 maximumNumberOfResults:(id)arg3 earliestBookingDateForResults:(id)arg4 latestBookingDateForResults:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif