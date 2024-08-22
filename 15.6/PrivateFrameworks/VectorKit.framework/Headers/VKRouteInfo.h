// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKROUTEINFO_H
#define VKROUTEINFO_H

@class NSArray, GEOComposedRoute;

#import <Foundation/Foundation.h>

#import "VKRouteEtaDescription.h"

@interface VKRouteInfo : NSObject

@property (retain, nonatomic) VKRouteEtaDescription *etaDescription; // ivar: _etaDescription
@property (readonly, nonatomic) NSArray *exitSignAnnotations; // ivar: _exitSignAnnotations
@property (nonatomic) BOOL hasFocus; // ivar: _hasFocus
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (readonly, nonatomic) NSArray *trafficAnnotations; // ivar: _trafficAnnotations
@property (readonly, nonatomic) NSArray *waypoints; // ivar: _waypoints


-(id)initWithComposedRoute:(id)arg0 etaDescription:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg0 etaText:(id)arg1 ;
-(void)_decodeVisualInfos:(id)arg0 withRouteEtaType:(NSInteger)arg1 into:(id)arg2 ;
-(void)dealloc;


@end


#endif