// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPCAMERABOUNDARY_H
#define MKMAPCAMERABOUNDARY_H

@class VKCameraRegionRestriction;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MKMapCameraBoundary : NSObject <NSSecureCoding, NSCopying>

 {
    VKCameraRegionRestriction *_vkRestriction;
}


@property (readonly, nonatomic, getter=_isEmpty) BOOL _empty;
@property (readonly, nonatomic) ? mapRect; // ivar: _mapRect
@property (readonly, nonatomic) ? region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(BOOL)_containsCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMapCameraBoundary:(id)arg0 ;
-(BOOL)isValidCoordinateRegion:(struct ? )arg0 ;
-(BOOL)isValidMapRect:(struct ? )arg0 ;
-(id)_vkRegionRestriction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateRegion:(struct ? )arg0 ;
-(id)initWithMapRect:(struct ? )arg0 ;
-(struct ? )_clampedCoordinateRegionForCoordinateRegion:(struct ? )arg0 ;
-(struct ? )_clampedMapRectForMapRect:(struct ? )arg0 ;
-(struct CLLocationCoordinate2D )_clampedCoordinateForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif