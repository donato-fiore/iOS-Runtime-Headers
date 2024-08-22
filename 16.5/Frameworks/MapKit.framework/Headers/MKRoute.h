// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKROUTE_H
#define MKROUTE_H

@class NSArray, GEOComposedRoute, NSString;

#import <Foundation/Foundation.h>

#import "MKPolyline.h"

@interface MKRoute : NSObject

@property (readonly, nonatomic) NSArray *advisoryNotices;
@property (readonly, nonatomic) CGFloat distance;
@property (readonly, nonatomic) CGFloat expectedTravelTime;
@property (readonly, nonatomic, getter=_geoComposedRoute) GEOComposedRoute *geoComposedRoute; // ivar: _geoComposedRoute
@property (readonly, nonatomic) BOOL hasHighways;
@property (readonly, nonatomic) BOOL hasTolls;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) MKPolyline *polyline; // ivar: _polyline
@property (readonly, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly, nonatomic) NSUInteger transportType;


-(id)_initWithGEOComposedRoute:(id)arg0 ;


@end


#endif