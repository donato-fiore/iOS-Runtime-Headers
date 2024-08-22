// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKLOCALPOINTSOFINTERESTREQUEST_H
#define MKLOCALPOINTSOFINTERESTREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MKPointOfInterestFilter.h"

@interface MKLocalPointsOfInterestRequest : NSObject <NSCopying>



@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, nonatomic, getter=_createdFromRegion) BOOL createdFromRegion; // ivar: _createdFromRegion
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) ? region; // ivar: _region


-(BOOL)_isValidCoordinateRegion:(struct ? )arg0 ;
-(CGFloat)_deriveRadiusFromCoordinateRegion:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCenterCoordinate:(struct CLLocationCoordinate2D )arg0 radius:(CGFloat)arg1 ;
-(id)initWithCoordinateRegion:(struct ? )arg0 ;
-(struct ? )_clampedCoordinateRegionForCoordinateRegion:(struct ? )arg0 ;


@end


#endif