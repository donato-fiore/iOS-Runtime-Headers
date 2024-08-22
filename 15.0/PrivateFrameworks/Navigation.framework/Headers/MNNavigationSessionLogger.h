// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVIGATIONSESSIONLOGGER_H
#define MNNAVIGATIONSESSIONLOGGER_H

@class NSUUID, NSArray, NSError, NSMutableDictionary, NSHashTable, NSString;
@protocol MNNavigationSessionObserver;

#import <Foundation/Foundation.h>


@interface MNNavigationSessionLogger : NSObject <MNNavigationSessionObserver>

 {
    NSUUID *_lastGuidanceSignID;
    NSArray *_lastARInfos;
    NSError *_previousSuppressedRerouteError;
    NSMutableDictionary *_displayETALookup;
    NSHashTable *_activeCameraInfos;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_stringForLocationType:(NSUInteger)arg0 ;
-(id)_stringForStyleAttributeKey:(unsigned int)arg0 ;
-(id)init;
-(void)_updateCameraStyleAttributesForLocation:(id)arg0 ;
-(void)navigationSession:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didChangeNavigationState:(int)arg1 ;
-(void)navigationSession:(id)arg0 didEnterPreArrivalStateForWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didFailRerouteWithError:(id)arg1 ;
-(void)navigationSession:(id)arg0 didReceiveTrafficIncidentAlert:(id)arg1 responseCallback:(id)arg2 ;
-(void)navigationSession:(id)arg0 didReroute:(id)arg1 withLocation:(id)arg2 withAlternateRoutes:(id)arg3 rerouteReason:(NSUInteger)arg4 ;
-(void)navigationSession:(id)arg0 didResumeNavigatingFromWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 didStartWithRoute:(id)arg1 navigationType:(int)arg2 isReconnecting:(BOOL)arg3 ;
-(void)navigationSession:(id)arg0 didStopWithReason:(NSUInteger)arg1 ;
-(void)navigationSession:(id)arg0 didSuppressReroute:(id)arg1 ;
-(void)navigationSession:(id)arg0 didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateAlternateRoutes:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateDisplayETA:(id)arg1 remainingDistance:(id)arg2 ;
-(void)navigationSession:(id)arg0 didUpdateETAResponseForRoute:(id)arg1 ;
-(void)navigationSession:(id)arg0 didUpdateMatchedLocation:(id)arg1 ;
-(void)navigationSession:(id)arg0 matchedToStepIndex:(NSUInteger)arg1 segmentIndex:(NSUInteger)arg2 ;
-(void)navigationSession:(id)arg0 updateSignsWithARInfo:(id)arg1 ;
-(void)navigationSession:(id)arg0 updateSignsWithInfo:(id)arg1 ;
-(void)navigationSessionDidArrive:(id)arg0 ;
-(void)navigationSessionDidCancelReroute:(id)arg0 ;
-(void)navigationSessionDidEnterPreArrivalState:(id)arg0 ;
-(void)navigationSessionWillReroute:(id)arg0 ;


@end


#endif