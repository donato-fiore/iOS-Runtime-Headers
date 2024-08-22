// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOETAUPDATER_H
#define GEOETAUPDATER_H

@class NSTimer, NSData, NSString;
@protocol GEOETAUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "GEOETATrafficUpdateRequest.h"
#import "GEOComposedETARoute.h"
#import "GEOCommonOptions.h"
#import "GEOApplicationAuditToken.h"
#import "GEOComposedWaypoint.h"
#import "GEOComposedRoute.h"
#import "GEORouteAttributes.h"
#import "GEORouteMatch.h"
#import "GEOLocation.h"

@interface GEOETAUpdater : NSObject {
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOComposedETARoute *_etaRoute;
    NSInteger _etaState;
    NSTimer *_etaIdleTimer;
    CGFloat _lastETARequestTime;
    GEOCommonOptions *_commonOptions;
}


@property (nonatomic) BOOL allowRequests; // ivar: _allowRequests
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (nonatomic) CGFloat debugTimeWindowDuration; // ivar: _debugTimeWindowDuration
@property (weak, nonatomic) NSObject<GEOETAUpdaterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (retain, nonatomic) NSData *directionsResponseID; // ivar: _directionsResponseID
@property (nonatomic) NSUInteger maxAlternateRoutesCount; // ivar: _maxAlternateRoutesCount
@property (readonly, nonatomic) BOOL requestInProgress;
@property (nonatomic) CGFloat requestInterval; // ivar: _requestInterval
@property (retain, nonatomic) NSString *requestingAppIdentifier; // ivar: _requestingAppIdentifier
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (retain, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (retain, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch
@property (nonatomic) BOOL shouldUpdateTrafficOnRoute; // ivar: _shouldUpdateTrafficOnRoute
@property (nonatomic) BOOL shouldUseConditionalRequest; // ivar: _shouldUseConditionalRequest
@property (retain, nonatomic) GEOLocation *userLocation; // ivar: _userLocation


-(BOOL)_shouldStartConditionalETARequest;
-(CGFloat)_calculateNextTransitionTime;
-(CGFloat)_currentTime;
-(id)_updateOrCreateRequest:(id)arg0 ;
-(id)currentStep;
-(id)init;
-(id)initWithRoute:(id)arg0 destination:(id)arg1 routeAttributes:(id)arg2 ;
-(void)_addRouteAttributesToRequest:(id)arg0 completion:(id)arg1 ;
-(void)_clearTimer;
-(void)_continueUpdateRequests;
-(void)_sendRequest:(id)arg0 ;
-(void)_startConditionalConnectionETARequest;
-(void)_startStateWaitingForBestTimeStart:(id)arg0 ;
-(void)_trafficRequest:(id)arg0 finished:(id)arg1 ;
-(void)_updateRequest:(id)arg0 ;
-(void)cancelRequest;
-(void)dealloc;
-(void)requestUpdate;
-(void)reset;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;


@end


#endif