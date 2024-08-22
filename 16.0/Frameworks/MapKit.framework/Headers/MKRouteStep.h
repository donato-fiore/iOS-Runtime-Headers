// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKROUTESTEP_H
#define MKROUTESTEP_H

@class GEOComposedRouteStep, NSString;

#import <Foundation/Foundation.h>

#import "MKPolyline.h"

@interface MKRouteStep : NSObject

@property (readonly, nonatomic) CGFloat distance;
@property (readonly, nonatomic, getter=_geoComposedRouteStep) GEOComposedRouteStep *geoComposedRouteStep; // ivar: _geoComposedRouteStep
@property (readonly, nonatomic) NSString *instructions; // ivar: _instructions
@property (readonly, nonatomic) NSString *notice;
@property (readonly, nonatomic) MKPolyline *polyline; // ivar: _polyline
@property (readonly, nonatomic) NSUInteger transportType; // ivar: _transportType


-(id)_initWithGEOComposedRouteStep:(id)arg0 instructions:(id)arg1 transportType:(NSUInteger)arg2 polyline:(id)arg3 ;


@end


#endif