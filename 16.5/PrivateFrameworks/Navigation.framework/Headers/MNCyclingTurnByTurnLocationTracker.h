// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNCYCLINGTURNBYTURNLOCATIONTRACKER_H
#define MNCYCLINGTURNBYTURNLOCATIONTRACKER_H

@class NSMutableArray, NSString;
@protocol MNTunnelLocationProjectorDelegate;


#import "MNTurnByTurnLocationTracker.h"
#import "MNTunnelLocationProjector.h"
#import "MNAlternateRoutesUpdater.h"

@interface MNCyclingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTunnelLocationProjectorDelegate>

 {
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    NSMutableArray *_etauPositions;
    CGFloat _lastKnownCourse;
    CGFloat _consecutiveValidCourseCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowSwitchToTransportType:(int)arg0 forLocation:(id)arg1 ;
-(BOOL)shouldProjectAlongRoute;
-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)_newMapMatcherForRoute:(id)arg0 ;
-(id)_overrideLocationForLocation:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(id)userLocationForUpdateManager:(id)arg0 ;
-(int)_detectedMotionForLocation:(id)arg0 ;
-(int)transportType;
-(void)_updateForAlternateRoutes:(id)arg0 ;
-(void)_updateForArrivalAtLegIndex:(NSUInteger)arg0 ;
-(void)_updateForLocation:(id)arg0 ;
-(void)_updateForReroute:(id)arg0 rerouteReason:(NSUInteger)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)startTrackingWithInitialLocation:(id)arg0 targetLegIndex:(NSUInteger)arg1 ;
-(void)stopTracking;
-(void)tunnelLocationProjector:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)updateForETAUResponse:(id)arg0 ;


@end


#endif