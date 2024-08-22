// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVIGATIONLISTENER_H
#define GEONAVIGATIONLISTENER_H

@class NSXPCConnection, NSString;
@protocol GEONavigationServerListenerXPCInterface, OS_dispatch_queue, GEONavigationListenerDelegate;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"

@interface GEONavigationListener : NSObject <GEONavigationServerListenerXPCInterface>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _navigationStartedToken;
    int _navigationStoppedToken;
    int _navigationRoutePreviewToken;
    BOOL _wantsRoutes;
    int _transportType;
    GEOLocation *_lastLocation;
}


@property (copy, nonatomic) id *activeRouteDetailsDataUpdatedHandler; // ivar: _activeRouteDetailsDataUpdatedHandler
@property (readonly, nonatomic) NSString *currentRoadName; // ivar: _currentRoadName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEONavigationListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *guidanceStateUpdatedHandler; // ivar: _guidanceStateUpdatedHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOLocation *lastLocation;
@property (readonly, nonatomic) NSUInteger navigationState; // ivar: _navigationState
@property (copy, nonatomic) id *navigationVoiceVolumeUpdatedHandler; // ivar: _navigationVoiceVolumeUpdatedHandler
@property (copy, nonatomic) id *positionFromDestinationUpdatedHandler; // ivar: _positionFromDestinationUpdatedHandler
@property (copy, nonatomic) id *positionFromManeuverUpdatedHandler; // ivar: _positionFromManeuverUpdatedHandler
@property (copy, nonatomic) id *positionFromSignUpdatedHandler; // ivar: _positionFromSignUpdatedHandler
@property (copy, nonatomic) id *rideSelectionsUpdatedHandler; // ivar: _rideSelectionsUpdatedHandler
@property (copy, nonatomic) id *routeSummaryUpdatedHandler; // ivar: _routeSummaryUpdatedHandler
@property (copy, nonatomic) id *stepIndexUpdatedHandler; // ivar: _stepIndexUpdatedHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *transitSummaryUpdatedHandler; // ivar: _transitSummaryUpdatedHandler


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 wantsRoutes:(BOOL)arg1 ;
-(void)currentRoadNameUpdated:(id)arg0 ;
-(void)dealloc;
-(void)didArriveAtWaypoint:(id)arg0 endOfLegIndex:(NSUInteger)arg1 ;
-(void)didUpdateLocation:(id)arg0 ;
-(void)didUpdateRoute:(id)arg0 ;
-(void)didUpdateTrafficForCurrentRoute:(id)arg0 ;
-(void)navigationStateChanged:(NSUInteger)arg0 transportType:(int)arg1 ;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg0 ;
-(void)requestActiveRouteDetailsData;
-(void)requestGuidanceState;
-(void)requestNavigationVoiceVolume;
-(void)requestPositionFromDestination;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromSign;
-(void)requestRideSelections;
-(void)requestRoute;
-(void)requestRouteSummary;
-(void)requestStepIndex;
-(void)requestStepNameInfo;
-(void)requestTransitSummary;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg0 ;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg0 ;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg0 ;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg0 ;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg0 ;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg0 ;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg0 ;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg0 ;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg0 ;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg0 ;


@end


#endif