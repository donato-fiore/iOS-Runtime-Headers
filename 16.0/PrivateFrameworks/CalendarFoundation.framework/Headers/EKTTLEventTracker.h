// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKTTLEVENTTRACKER_H
#define EKTTLEVENTTRACKER_H


#import <Foundation/Foundation.h>


@interface EKTTLEventTracker : NSObject



+(id)_valueForAlertType:(NSUInteger)arg0 ;
+(id)_valueForETAType:(NSUInteger)arg0 ;
+(id)_valueForTransportType:(NSUInteger)arg0 ;
+(id)_valueForTravelState:(NSUInteger)arg0 ;
+(void)trackDirectionsEngagedForTTLAlertWithTransportType:(NSUInteger)arg0 etaType:(NSUInteger)arg1 hasSuggestedLocation:(BOOL)arg2 isOnSharedCalendar:(BOOL)arg3 ;
+(void)trackEmailEngagedForTTLAlertWithTransportType:(NSUInteger)arg0 etaType:(NSUInteger)arg1 hasSuggestedLocation:(BOOL)arg2 isOnSharedCalendar:(BOOL)arg3 ;
+(void)trackEventFiredTTLAlertWithAlertType:(NSUInteger)arg0 transportType:(NSUInteger)arg1 etaType:(NSUInteger)arg2 travelState:(NSUInteger)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5 ;
+(void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)arg0 isOnSharedCalendar:(BOOL)arg1 ;


@end


#endif