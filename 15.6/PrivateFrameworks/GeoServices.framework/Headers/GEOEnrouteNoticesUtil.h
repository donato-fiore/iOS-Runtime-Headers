// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOENROUTENOTICESUTIL_H
#define GEOENROUTENOTICESUTIL_H


#import <Foundation/Foundation.h>


@interface GEOEnrouteNoticesUtil : NSObject



+(id)_enrouteNoticesForRoute:(id)arg0 provider:(id)arg1 ;
+(id)createEnrouteNoticesForComposedRoute:(id)arg0 routeInitializerData:(id)arg1 ;
+(void)_forEachGeoEnrouteNoticeOnRoute:(id)arg0 handler:(id)arg1 ;


@end


#endif