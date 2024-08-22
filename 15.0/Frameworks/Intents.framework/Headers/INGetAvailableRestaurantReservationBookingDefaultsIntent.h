// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETAVAILABLERESTAURANTRESERVATIONBOOKINGDEFAULTSINTENT_H
#define INGETAVAILABLERESTAURANTRESERVATIONBOOKINGDEFAULTSINTENT_H

@class NSString;
@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentExport;


#import "INIntent.h"
#import "INRestaurant.h"

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent <INGetAvailableRestaurantReservationBookingDefaultsIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INRestaurant *restaurant; // ivar: _restaurant
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestaurant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif