// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPNAVIGATIONSESSION_H
#define CPNAVIGATIONSESSION_H

@class NAFuture, NSArray;
@protocol CPNavigationSessionManaging;

#import <Foundation/Foundation.h>

#import "CPMapTemplate.h"
#import "CPTrip.h"

@interface CPNavigationSession : NSObject

@property (retain, nonatomic) NSObject<CPNavigationSessionManaging> *manager; // ivar: _manager
@property (weak, nonatomic) CPMapTemplate *mapTemplate; // ivar: _mapTemplate
@property (retain, nonatomic) NAFuture *navigationSessionManagerFuture; // ivar: _navigationSessionManagerFuture
@property (retain, nonatomic) CPTrip *trip; // ivar: _trip
@property (copy, nonatomic) NSArray *upcomingManeuvers; // ivar: _upcomingManeuvers


-(id)_currentTripId;
-(id)initWithTrip:(id)arg0 mapTemplate:(id)arg1 ;
-(void)cancelTrip;
-(void)finishTrip;
-(void)pauseTripForReason:(NSUInteger)arg0 description:(id)arg1 ;
-(void)pauseTripForReason:(NSUInteger)arg0 description:(id)arg1 turnCardColor:(id)arg2 ;
-(void)updateTravelEstimates:(id)arg0 forManeuver:(id)arg1 ;


@end


#endif