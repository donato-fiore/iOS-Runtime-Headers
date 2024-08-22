// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNEKTTLEVENTTRACKER_H
#define CALNEKTTLEVENTTRACKER_H

@protocol CALNTTLEventTracker;

#import <Foundation/Foundation.h>


@interface CALNEKTTLEventTracker : NSObject <CALNTTLEventTracker>





+(id)sharedInstance;
-(void)trackDirectionsEngagedForTTLAlertWithTransportType:(NSUInteger)arg0 etaType:(NSUInteger)arg1 hasSuggestedLocation:(BOOL)arg2 isOnSharedCalendar:(BOOL)arg3 ;
-(void)trackEmailEngagedForTTLAlertWithTransportType:(NSUInteger)arg0 etaType:(NSUInteger)arg1 hasSuggestedLocation:(BOOL)arg2 isOnSharedCalendar:(BOOL)arg3 ;
-(void)trackEventFiredTTLAlertWithAlertType:(NSUInteger)arg0 transportType:(NSUInteger)arg1 etaType:(NSUInteger)arg2 travelState:(NSUInteger)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5 ;


@end


#endif