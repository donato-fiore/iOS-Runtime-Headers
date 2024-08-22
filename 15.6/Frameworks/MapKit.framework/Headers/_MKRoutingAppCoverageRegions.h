// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKROUTINGAPPCOVERAGEREGIONS_H
#define _MKROUTINGAPPCOVERAGEREGIONS_H


#import <Foundation/Foundation.h>

#import "_MKMultiPolygonGeoRegion.h"

@interface _MKRoutingAppCoverageRegions : NSObject {
    _MKMultiPolygonGeoRegion *_regions;
}




-(BOOL)containsCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;


@end


#endif