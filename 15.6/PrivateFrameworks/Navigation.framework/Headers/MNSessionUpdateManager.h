// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNSESSIONUPDATEMANAGER_H
#define MNSESSIONUPDATEMANAGER_H

@class GEOTransitRouteUpdater, NSMutableDictionary, NSTimer, NSDate, GEOETATrafficUpdateRequest, GEOComposedETARoute, NSError, GEOApplicationAuditToken, NSString, GEODataRequestThrottlerToken, GEOLatLng;
@protocol GEOTransitRouteUpdaterDelegate, MNSessionUpdateManagerDelegate;

#import <Foundation/Foundation.h>


@interface MNSessionUpdateManager : NSObject <GEOTransitRouteUpdaterDelegate>

 {
    GEOTransitRouteUpdater *_transitUpdater;
    NSMutableDictionary *_subscribers;
    NSTimer *_etaTimer;
    CGFloat _etaRequestInterval;
    CGFloat _initialRequestDelay;
    CGFloat _opportunisticRequestTimeWindow;
    NSDate *_dateOfLastUpdate;
    BOOL _lastRequestWasServerDriven;
    BOOL _isPaused;
    GEOETATrafficUpdateRequest *_pendingETARequest;
    GEOComposedETARoute *_pendingETARoute;
    NSError *_retryError;
}


@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNSessionUpdateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxAlternateRoutesCount; // ivar: _maxAlternateRoutesCount
@property (copy, nonatomic) NSString *requestingAppIdentifier; // ivar: _requestingAppIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttleToken; // ivar: _throttleToken
@property (retain, nonatomic) GEOLatLng *tripOrigin; // ivar: _tripOrigin


-(BOOL)_hasAtLeastOneActiveSubscriber;
-(id)_baseETARequest;
-(id)_updateETARequest:(id)arg0 withRouteInfo:(id)arg1 andUserLocation:(id)arg2 ;
-(id)init;
-(void)_continueETARequests;
-(void)_handleETAResponse:(id)arg0 forRouteInfo:(id)arg1 etaRoute:(id)arg2 ;
-(void)_scheduleETATimerWithInterval:(CGFloat)arg0 ;
-(void)_sendETARequest;
-(void)_sendETARequestWithRouteAttributes:(id)arg0 ;
-(void)_terminateETARequests;
-(void)_updateRouteAttributesFor:(id)arg0 route:(id)arg1 updatedLocation:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)pauseUpdateRequestsForSubscriber:(id)arg0 ;
-(void)requestUpdateForETAUPosition:(id)arg0 ;
-(void)restartUpdateTimer;
-(void)resumeUpdateRequestsForSubscriber:(id)arg0 ;
-(void)startUpdateRequestsForRoutes:(id)arg0 andNavigationType:(int)arg1 ;
-(void)stopUpdateRequests;
-(void)transitRouteUpdater:(id)arg0 didFailUpdateForRouteIDs:(id)arg1 withError:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)transitRouteUpdater:(id)arg0 didUpdateTransitRoutes:(id)arg1 ;
-(void)transitRouteUpdater:(id)arg0 willSendRequests:(id)arg1 ;
-(void)transitRouteUpdater:(id)arg0 willUpdateTransitForRouteIDs:(id)arg1 ;


@end


#endif