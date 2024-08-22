// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAVROUTINGSESSIONHELPER_H
#define ATXAVROUTINGSESSIONHELPER_H

@class AVRoutingSessionManager;

#import <Foundation/Foundation.h>

#import "ATXAVRouteInfo.h"

@interface ATXAVRoutingSessionHelper : NSObject {
    float _threshold;
    AVRoutingSessionManager *_avRoutingSessionManager;
    ATXAVRouteInfo *_internalPredictedRouteInfo;
}


@property (readonly, nonatomic) float acceptThreshod;
@property (readonly, nonatomic) ATXAVRouteInfo *predictedRouteInfo;


-(id)_atxAVRouteInfoWithRoute:(id)arg0 ;
-(id)_filterTopRouteFromRoutes:(id)arg0 withAcceptThreshold:(float)arg1 ;
-(id)_predictedRouteInfoWithAcceptThreshold:(float)arg0 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)arg1 ;
-(id)_predictedRouteWithAcceptThreshold:(float)arg0 ;
-(id)_selectedOrPendingRoute;
-(id)init;
-(id)initWithAcceptThreshold:(float)arg0 avRoutingSessionManager:(id)arg1 ;


@end


#endif