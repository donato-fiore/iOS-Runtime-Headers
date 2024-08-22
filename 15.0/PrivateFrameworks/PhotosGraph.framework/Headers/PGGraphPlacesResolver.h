// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPLACESRESOLVER_H
#define PGGRAPHPLACESRESOLVER_H


#import <Foundation/Foundation.h>


@interface PGGraphPlacesResolver : NSObject



+(id)_businessItemsAtCoordinate:(struct CLLocationCoordinate2D )arg0 inCache:(id)arg1 ;
+(id)_clusteredRegionsFromFeeder:(id)arg0 ;
+(id)poiStringFromSpatialLookupCategory:(NSInteger)arg0 ;
+(id)resolvePlacesForMomentNode:(id)arg0 feeder:(id)arg1 ;
+(id)resolvedPlaceForRegion:(id)arg0 withPlaceItems:(id)arg1 ;


@end


#endif