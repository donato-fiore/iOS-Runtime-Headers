// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRACENAVIGATIONEVENTRECORDER_H
#define MNTRACENAVIGATIONEVENTRECORDER_H

@class NSError, NSUUID, NSArray, NSString;
@protocol MNNavigationSessionObserver;

#import <Foundation/Foundation.h>

#import "MNTraceRecorder.h"
#import "MNLocation.h"

@interface MNTraceNavigationEventRecorder : NSObject <MNNavigationSessionObserver>

 {
    MNTraceRecorder *_traceRecorder;
    MNLocation *_lastMatchedLocation;
    NSError *_previousSuppressedRerouteError;
    NSUUID *_currentPrimarySignID;
    NSUUID *_currentSecondarySignID;
    NSUUID *_laneGuidanceID;
    NSUUID *_junctionViewID;
    NSArray *_lastARInfos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_descriptionForWaypoint:(id)arg0 ;
-(id)_stringForSignDescription:(id)arg0 ;
-(id)initWithTraceRecorder:(id)arg0 ;
-(void)_recordDebugSettings;
-(void)_recordEvent:(NSInteger)arg0 description:(id)arg1 ;
-(void)_userGotOnRoute;
-(void)_userWentOffRoute;
-(void)navigationSession:(id)arg0 didAnnounce:(id)arg1 stage:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didEnterPreArrivalStateForWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didReceiveTrafficIncidentAlert:(id)arg1 responseCallback:(id)arg2 ;
-(void)navigationSession:(id)arg0 didReceiveTransitAlert:(id)arg1 ;
-(void)navigationSession:(id)arg0 didReroute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 rerouteReason:(NSUInteger)arg4 ;
-(void)navigationSession:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didStartWithRoute:(id)arg1 navigationType:(int)arg2 isReconnecting:(BOOL)arg3 ;
-(void)navigationSession:(id)arg0 didStopWithReason:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 didSuppressReroute:(id)arg1 ;
-(void)navigationSession:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)navigationSession:(id)arg0 hideJunctionViewForId:(id)arg1 ;
-(void)navigationSession:(id)arg0 hideLaneDirectionsForId:(id)arg1 ;
-(void)navigationSession:(id)arg0 matchedToStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 showJunctionView:(id)arg1 ;
-(void)navigationSession:(id)arg0 showLaneDirections:(id)arg1 ;
-(void)navigationSession:(id)arg0 updateSignsWithARInfo:(id)arg1 ;
-(void)navigationSession:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)setLastMatchedLocation:(id)arg0 ;


@end


#endif