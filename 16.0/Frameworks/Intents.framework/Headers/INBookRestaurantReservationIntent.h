// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INBOOKRESTAURANTRESERVATIONINTENT_H
#define INBOOKRESTAURANTRESERVATIONINTENT_H

@class NSDate, NSDateComponents, NSString;
@protocol INBookRestaurantReservationIntentExport, NSCopying;


#import "INIntent.h"
#import "INRestaurantGuest.h"
#import "INRestaurant.h"
#import "INRestaurantOffer.h"

@interface INBookRestaurantReservationIntent : INIntent <INBookRestaurantReservationIntentExport, NSCopying>



@property (copy, nonatomic) NSDate *bookingDate; // ivar: _bookingDate
@property (copy, nonatomic) NSDateComponents *bookingDateComponents; // ivar: _bookingDateComponents
@property (copy, nonatomic) NSString *bookingIdentifier; // ivar: _bookingIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) INRestaurantGuest *guest; // ivar: _guest
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText; // ivar: _guestProvidedSpecialRequestText
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger partySize; // ivar: _partySize
@property (copy, nonatomic) INRestaurant *restaurant; // ivar: _restaurant
@property (copy, nonatomic) INRestaurantOffer *selectedOffer; // ivar: _selectedOffer
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestaurant:(id)arg0 bookingDateComponents:(id)arg1 partySize:(NSUInteger)arg2 bookingIdentifier:(id)arg3 guest:(id)arg4 selectedOffer:(id)arg5 guestProvidedSpecialRequestText:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif