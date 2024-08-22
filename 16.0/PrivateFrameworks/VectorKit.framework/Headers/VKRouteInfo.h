// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKROUTEINFO_H
#define VKROUTEINFO_H

@class NSArray, GEOComposedRoute;

#import <Foundation/Foundation.h>

#import "VKRouteRangeAnnotationInfo.h"
#import "VKRouteEtaDescription.h"

@interface VKRouteInfo : NSObject {
    VKRouteRangeAnnotationInfo *_routeEtaAnnotation;
}


@property (retain, nonatomic) NSArray *debugAnnotations; // ivar: _debugAnnotations
@property (retain, nonatomic) VKRouteEtaDescription *etaDescription; // ivar: _etaDescription
@property (readonly, nonatomic) NSArray *exitSignAnnotations; // ivar: _exitSignAnnotations
@property (nonatomic) BOOL hasFocus; // ivar: _hasFocus
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (readonly, nonatomic) BOOL hasRouteLegEtas;
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (retain, nonatomic) NSArray *routeLegEtaAnnotations; // ivar: _routeLegEtaAnnotations
@property (readonly, nonatomic) NSArray *trafficAnnotations; // ivar: _trafficAnnotations
@property (readonly, nonatomic) NSArray *waypoints; // ivar: _waypoints


-(id)initWithComposedRoute:(id)arg0 etaDescription:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg0 etaText:(id)arg1 ;
-(id)waypointForWaypoint:(id)arg0 ;
-(void)_decodeVisualInfos:(id)arg0 withRouteEtaType:(NSInteger)arg1 into:(id)arg2 ;
-(void)visitAnnotations:(id)arg0 ;


@end


#endif