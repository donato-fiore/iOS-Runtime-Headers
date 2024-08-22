// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBRIDEOPTION_H
#define _INPBRIDEOPTION_H

@class PBCodable, NSArray, NSString;
@protocol _INPBRideOption, NSSecureCoding, NSCopying;


#import "_INPBTimestamp.h"
#import "_INPBPriceRangeValue.h"
#import "_INPBImageValue.h"
#import "_INPBUserActivity.h"

@interface _INPBRideOption : PBCodable <_INPBRideOption, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *availablePartySizeOptions; // ivar: _availablePartySizeOptions
@property (readonly, nonatomic) NSUInteger availablePartySizeOptionsCount;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt; // ivar: _availablePartySizeOptionsSelectionPrompt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disclaimerMessage; // ivar: _disclaimerMessage
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate; // ivar: _estimatedPickupDate
@property (copy, nonatomic) NSArray *fareLineItems; // ivar: _fareLineItems
@property (readonly, nonatomic) NSUInteger fareLineItemsCount;
@property (readonly, nonatomic) BOOL hasAvailablePartySizeOptionsSelectionPrompt;
@property (readonly, nonatomic) BOOL hasDisclaimerMessage;
@property (readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPriceRange;
@property (readonly, nonatomic) BOOL hasSpecialPricing;
@property (readonly, nonatomic) BOOL hasSpecialPricingBadgeImage;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasUserActivityForBookingInApplication;
@property (nonatomic) BOOL hasUsesMeteredFare;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange; // ivar: _priceRange
@property (copy, nonatomic) NSString *specialPricing; // ivar: _specialPricing
@property (retain, nonatomic) _INPBImageValue *specialPricingBadgeImage; // ivar: _specialPricingBadgeImage
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBUserActivity *userActivityForBookingInApplication; // ivar: _userActivityForBookingInApplication
@property (nonatomic) BOOL usesMeteredFare; // ivar: _usesMeteredFare


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)availablePartySizeOptionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)fareLineItemsAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addAvailablePartySizeOptions:(id)arg0 ;
-(void)addFareLineItems:(id)arg0 ;
-(void)clearAvailablePartySizeOptions;
-(void)clearFareLineItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif