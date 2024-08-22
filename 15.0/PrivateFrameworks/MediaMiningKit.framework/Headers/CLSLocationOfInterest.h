// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSLOCATIONOFINTEREST_H
#define CLSLOCATIONOFINTEREST_H

@class NSUUID, CLLocation, CLCircularRegion, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLSLitePlacemark.h"

@interface CLSLocationOfInterest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger businessItemMuid; // ivar: _businessItemMuid
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CLSLitePlacemark *placemark; // ivar: _placemark
@property (readonly, nonatomic) CLCircularRegion *placemarkRegion; // ivar: _placemarkRegion
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSArray *visits; // ivar: _visits


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)placemarkLocationDistanceFromLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 locationOfInterestType:(NSInteger)arg1 location:(id)arg2 placemarkRegion:(id)arg3 businessItemMuid:(NSUInteger)arg4 radius:(CGFloat)arg5 ;
-(void)addVisit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeVisit:(id)arg0 ;


@end


#endif