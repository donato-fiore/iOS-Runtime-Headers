// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRIDEOPTION_H
#define INRIDEOPTION_H

@class NSString, NSArray, NSDate, NSUserActivity, NSNumber;
@protocol INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INPriceRange.h"
#import "INImage.h"

@interface INRideOption : NSObject <INCacheableContainer, INRideOptionExport, NSCopying, NSSecureCoding>

 {
    NSString *_identifier;
}


@property (copy, nonatomic) NSArray *availablePartySizeOptions; // ivar: _availablePartySizeOptions
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt; // ivar: _availablePartySizeOptionsSelectionPrompt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disclaimerMessage; // ivar: _disclaimerMessage
@property (copy, nonatomic) NSDate *estimatedPickupDate; // ivar: _estimatedPickupDate
@property (copy, nonatomic) NSArray *fareLineItems; // ivar: _fareLineItems
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) INPriceRange *priceRange; // ivar: _priceRange
@property (copy, nonatomic) NSString *specialPricing; // ivar: _specialPricing
@property (copy, nonatomic) INImage *specialPricingBadgeImage; // ivar: _specialPricingBadgeImage
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserActivity *userActivityForBookingInApplication; // ivar: _userActivityForBookingInApplication
@property (copy, nonatomic) NSNumber *usesMeteredFare; // ivar: _usesMeteredFare


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 estimatedPickupDate:(id)arg1 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif