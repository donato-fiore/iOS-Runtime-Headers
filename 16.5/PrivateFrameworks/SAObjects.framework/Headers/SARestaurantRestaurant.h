// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARESTAURANTRESTAURANT_H
#define SARESTAURANTRESTAURANT_H

@class NSArray, NSURL;


#import "SALocalSearchBusiness2.h"

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (copy, nonatomic) NSArray *attributeSet;
@property (copy, nonatomic) NSArray *makeReservationPunchOuts;
@property (copy, nonatomic) NSURL *menuLink;
@property (copy, nonatomic) NSArray *openings;
@property (copy, nonatomic) NSArray *orderDeliveryPunchOuts;


+(id)restaurant;
+(id)restaurantWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif