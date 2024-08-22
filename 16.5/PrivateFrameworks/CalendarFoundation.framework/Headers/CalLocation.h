// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLOCATION_H
#define CALLOCATION_H

@class CLLocation, NSString, NSData, CLPlacemark;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalLocation : NSObject <NSSecureCoding>

 {
    CLLocation *_location;
    BOOL _isCurrentLocation;
}


@property (copy) NSString *abURLString; // ivar: _abURLString
@property (copy) NSString *address; // ivar: _address
@property (copy) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL isCurrentLocation;
@property (copy, nonatomic) CLLocation *location;
@property (copy) NSData *mapKitHandle; // ivar: _mapKitHandle
@property (retain) CLPlacemark *placemark; // ivar: _placemark
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (copy) NSString *routeType; // ivar: _routeType
@property (copy) NSString *title; // ivar: _title
@property int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)routingModeEnumForCalRouteType:(id)arg0 ;
+(id)coordinatesFromGeoURLString:(id)arg0 ;
+(id)displayStringForAddress:(id)arg0 withoutTitle:(id)arg1 ;
+(id)fullDisplayStringWithTitle:(id)arg0 address:(id)arg1 ;
+(id)geoURLStringFromCoordinates:(id)arg0 ;
+(id)routeTypeStringForCalLocationRoutingMode:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)distanceFromLocation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayString;
-(id)fullTitleAndAddressString;
-(id)geoURLString;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif