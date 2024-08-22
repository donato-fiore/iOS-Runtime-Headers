// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSPLACE_H
#define CLSPLACE_H

@class NSArray, NSString, CLCircularRegion;


#import "CLSPrimitive.h"
#import "CLSBusinessItem.h"
#import "CLSLitePlacemark.h"

@interface CLSPlace : CLSPrimitive

@property (readonly, nonatomic) CLSBusinessItem *businessItem; // ivar: _businessItem
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CLSLitePlacemark *placemark; // ivar: _placemark
@property (readonly, nonatomic) CLCircularRegion *region; // ivar: _region


+(id)placeWithBusinessItem:(id)arg0 ;
+(id)placeWithLocation:(id)arg0 ;
+(id)placeWithPlacemark:(id)arg0 ;
-(BOOL)isEqualToPlace:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif