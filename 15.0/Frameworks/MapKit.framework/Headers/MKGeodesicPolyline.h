// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKGEODESICPOLYLINE_H
#define MKGEODESICPOLYLINE_H



#import "MKPolyline.h"

@interface MKGeodesicPolyline : MKPolyline



+(id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg0 count:(NSUInteger)arg1 ;
+(id)polylineWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 ;


@end


#endif