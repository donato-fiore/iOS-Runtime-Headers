// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESTAURANTRESERVATIONBOOKING_H
#define INRESTAURANTRESERVATIONBOOKING_H

@class NSDate, NSString, NSArray;
@protocol INRestaurantReservationBookingExport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "INRestaurant.h"

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSSecureCoding, NSCopying>



@property (nonatomic, getter=isBookingAvailable) BOOL bookingAvailable; // ivar: _bookingAvailable
@property (copy, nonatomic) NSDate *bookingDate; // ivar: _bookingDate
@property (copy, nonatomic) NSString *bookingDescription; // ivar: _bookingDescription
@property (copy, nonatomic) NSString *bookingIdentifier; // ivar: _bookingIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *offers; // ivar: _offers
@property (nonatomic) NSUInteger partySize; // ivar: _partySize
@property (nonatomic) BOOL requiresEmailAddress; // ivar: _requiresEmailAddress
@property (nonatomic) BOOL requiresManualRequest; // ivar: _requiresManualRequest
@property (nonatomic) BOOL requiresName; // ivar: _requiresName
@property (nonatomic) BOOL requiresPhoneNumber; // ivar: _requiresPhoneNumber
@property (copy, nonatomic) INRestaurant *restaurant; // ivar: _restaurant
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestaurant:(id)arg0 bookingDate:(id)arg1 partySize:(NSUInteger)arg2 bookingIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif