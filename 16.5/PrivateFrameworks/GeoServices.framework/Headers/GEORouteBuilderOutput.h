// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEBUILDEROUTPUT_H
#define GEOROUTEBUILDEROUTPUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"
#import "GEOComposedRouteCellularCoverage.h"
#import "GEOComposedRouteCoordinateArray.h"
#import "GEOElevationProfile.h"

@interface GEORouteBuilderOutput : NSObject

@property (retain, nonatomic) GEOMapRegion *boundingMapRegion; // ivar: _boundingMapRegion
@property (retain, nonatomic) NSArray *cameraInfos; // ivar: _cameraInfos
@property (retain, nonatomic) GEOComposedRouteCellularCoverage *cellularCoverage; // ivar: _cellularCoverage
@property (retain, nonatomic) GEOComposedRouteCoordinateArray *coordinatesArray; // ivar: _coordinatesArray
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) GEOElevationProfile *elevationProfile; // ivar: _elevationProfile
@property (retain, nonatomic) NSArray *enrouteNotices; // ivar: _enrouteNotices
@property (retain, nonatomic) NSArray *guidanceEvents; // ivar: _guidanceEvents
@property (retain, nonatomic) NSArray *legs; // ivar: _legs
@property (retain, nonatomic) NSArray *pointSections; // ivar: _pointSections
@property (retain, nonatomic) NSArray *segments; // ivar: _segments
@property (retain, nonatomic) NSArray *steps; // ivar: _steps
@property (nonatomic) BOOL usesZilch; // ivar: _usesZilch
@property (retain, nonatomic) NSArray *visualInfos; // ivar: _visualInfos




@end


#endif