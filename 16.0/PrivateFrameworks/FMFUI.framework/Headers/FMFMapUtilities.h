// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFMAPUTILITIES_H
#define FMFMAPUTILITIES_H


#import <Foundation/Foundation.h>


@interface FMFMapUtilities : NSObject



+(BOOL)doNotAnimateToNewLocation:(struct CLLocationCoordinate2D )arg0 forMapView:(id)arg1 ;
+(struct ? )mapRectForCoordinateRegion:(struct ? )arg0 ;
+(struct ? )regionForAnnotations:(id)arg0 ;


@end


#endif