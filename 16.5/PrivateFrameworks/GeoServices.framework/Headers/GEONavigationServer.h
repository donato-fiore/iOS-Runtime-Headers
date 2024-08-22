// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVIGATIONSERVER_H
#define GEONAVIGATIONSERVER_H

@class NSMutableSet, NSData, NSString;
@protocol GEONavigationServerPushStateXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEONavdPeer.h"
#import "GEOLocation.h"
#import "GEOComposedRoute.h"
#import "GEOArrivalTimeAndDistanceInfo.h"

@interface GEONavigationServer : NSObject <GEONavigationServerPushStateXPCInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    GEONavdPeer *_pushStatePeer;
    NSMutableSet *_listenerPeers;
    NSMutableSet *_unEntitledPeers;
    BOOL _isListenerConnectionOpen;
    int _listenerConnectionOpenToken;
    NSUInteger _state;
    int _transportType;
    GEOLocation *_lastLocation;
    ? _lastRouteMatchedCoordinate;
    BOOL _isResumingMultipointRoute;
    GEOComposedRoute *_route;
    GEOArrivalTimeAndDistanceInfo *_timeAndDistanceInfo;
    NSData *_routeSummaryData;
    NSData *_transitSummaryData;
    NSData *_guidanceStateData;
    NSData *_activeRouteDetailsData;
    NSData *_stepIndexData;
    NSData *_stepNameInfoData;
    NSData *_rideSelectionsData;
    NSData *_positionFromSignData;
    NSData *_positionFromManeuverData;
    NSData *_positionFromDestinationData;
    NSData *_navigationVoiceVolumeData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)identifier;
-(BOOL)shouldAcceptNewConnection:(id)arg0 shouldCreateNavigationPeer:(BOOL)arg1 ;
-(id)init;
-(void)_closePushStatePeerConnection;
-(void)_forEachValidPeer:(id)arg0 ;
-(void)_forEachValidPeerOnIsolationQueue:(id)arg0 ;
-(void)_notifyListenersOpenConnection;
-(void)_openPushStatePeerConnection:(id)arg0 ;
-(void)_requestActiveRouteDetailsDataWithPeer:(id)arg0 ;
-(void)_requestETAWithPeer:(id)arg0 ;
-(void)_requestGuidanceStateWithPeer:(id)arg0 ;
-(void)_requestNavigationVoiceVolumeWithPeer:(id)arg0 ;
-(void)_requestPositionFromDestinationWithPeer:(id)arg0 ;
-(void)_requestPositionFromManeuverWithPeer:(id)arg0 ;
-(void)_requestPositionFromSignWithPeer:(id)arg0 ;
-(void)_requestRideSelectionsWithPeer:(id)arg0 ;
-(void)_requestRouteSummaryWithPeer:(id)arg0 ;
-(void)_requestRouteWithPeer:(id)arg0 ;
-(void)_requestStepIndexWithPeer:(id)arg0 ;
-(void)_requestStepNameInfoWithPeer:(id)arg0 ;
-(void)_requestTransitSummaryWithPeer:(id)arg0 ;
-(void)_sendMessage:(NSInteger)arg0 data:(id)arg1 toPeer:(id)arg2 ;
-(void)_updateAllPeersWithMessage:(NSInteger)arg0 data:(id)arg1 ;
-(void)clearAllData;
-(void)setArrivedAtWaypoint:(id)arg0 endOfLegIndex:(NSUInteger)arg1 ;
-(void)setCurrentRoadName:(id)arg0 ;
-(void)setETAUpdate:(id)arg0 ;
-(void)setLocation:(id)arg0 routeMatchedCoordinate:(struct ? )arg1 ;
-(void)setNavigationSessionState:(NSUInteger)arg0 transportType:(int)arg1 isResumingMultipointRoute:(BOOL)arg2 ;
-(void)setNavigationVoiceVolumeWithData:(id)arg0 ;
-(void)setResumedNavigatingFromWaypoint:(id)arg0 endOfLegIndex:(NSUInteger)arg1 ;
-(void)setRoute:(id)arg0 ;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg0 ;
-(void)setRouteSummaryWithGuidanceStateData:(id)arg0 ;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg0 ;
-(void)setRouteSummaryWithPositionFromDestinationData:(id)arg0 ;
-(void)setRouteSummaryWithPositionFromManeuverData:(id)arg0 ;
-(void)setRouteSummaryWithPositionFromSignData:(id)arg0 ;
-(void)setRouteSummaryWithRideSelectionsData:(id)arg0 ;
-(void)setRouteSummaryWithStepIndexData:(id)arg0 ;
-(void)setRouteSummaryWithStepNameInfoData:(id)arg0 ;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg0 ;
-(void)updateTrafficForCurrentRoute:(id)arg0 ;


@end


#endif