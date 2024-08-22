// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPSENDERSTRATEGY_H
#define MSPSENDERSTRATEGY_H

@class NSMutableDictionary, NSMutableSet, GEOSharedNavState;

#import <Foundation/Foundation.h>

#import "MSPSharedTripGroupSession.h"

@interface MSPSenderStrategy : NSObject {
    MSPSharedTripGroupSession *_groupSession;
}


@property (retain, nonatomic) NSMutableDictionary *destinationSentStates; // ivar: _destinationSentStates
@property (retain, nonatomic) NSMutableDictionary *etaSentStates; // ivar: _etaSentStates
@property (retain, nonatomic) NSMutableDictionary *lastEtaUpdateDates; // ivar: _lastEtaUpdateDates
@property (retain, nonatomic) NSMutableSet *participants; // ivar: _participants
@property (retain, nonatomic) NSMutableDictionary *routeSentStates; // ivar: _routeSentStates
@property (copy, nonatomic) GEOSharedNavState *state; // ivar: _state
@property (retain, nonatomic) NSMutableDictionary *trafficSentStates; // ivar: _trafficSentStates


-(BOOL)removeParticipant:(id)arg0 ;
-(id)initWithGroupSession:(id)arg0 ;
-(void)_sendDestinationReachedUpdate:(id)arg0 to:(id)arg1 ;
-(void)_sendDestinationUpdate:(id)arg0 to:(id)arg1 ;
-(void)_sendETAUpdate:(id)arg0 to:(id)arg1 ;
-(void)_sendRouteUpdate:(id)arg0 to:(id)arg1 ;
-(void)_sendStoppedUpdate:(id)arg0 to:(id)arg1 ;
-(void)_sendTrafficUpdate:(id)arg0 to:(id)arg1 ;
-(void)addParticipants:(id)arg0 ;
-(void)destinationReached:(id)arg0 ;
-(void)destinationUpdated:(id)arg0 ;
-(void)etaUpdated:(id)arg0 ;
-(void)removeParticipants:(id)arg0 ;
-(void)restoreState:(id)arg0 ;
-(void)routeUpdated:(id)arg0 ;
-(void)sessionStopped:(id)arg0 ;
-(void)stateUpdated:(id)arg0 ;
-(void)trafficUpdated:(id)arg0 ;


@end


#endif