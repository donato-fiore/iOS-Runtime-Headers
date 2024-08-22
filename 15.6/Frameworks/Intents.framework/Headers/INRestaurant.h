// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INRESTAURANT_H
#define INRESTAURANT_H

@class NSString, CLLocation;
@protocol INRestaurantExport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface INRestaurant : NSObject <INRestaurantExport, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *restaurantIdentifier; // ivar: _restaurantIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *vendorIdentifier; // ivar: _vendorIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)location:(id)arg0 equalToLocation:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 name:(id)arg1 vendorIdentifier:(id)arg2 restaurantIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif