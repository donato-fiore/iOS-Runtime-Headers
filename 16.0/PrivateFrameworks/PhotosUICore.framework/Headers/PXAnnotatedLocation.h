// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXANNOTATEDLOCATION_H
#define PXANNOTATEDLOCATION_H

@class CLLocation, NSNumber;

#import <Foundation/Foundation.h>

#import "PXPlaceAnnotation.h"

@interface PXAnnotatedLocation : NSObject

@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain) NSNumber *locationType; // ivar: _locationType
@property (readonly, nonatomic) PXPlaceAnnotation *placeAnnotation; // ivar: _placeAnnotation


-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 placeAnnotation:(id)arg1 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 placeAnnotation:(id)arg2 ;
-(id)initWithLocation:(id)arg0 placeAnnotation:(id)arg1 ;


@end


#endif