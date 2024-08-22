// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNTIMETOLEAVEEVENTTRACKERUTILITIES_H
#define CALNTIMETOLEAVEEVENTTRACKERUTILITIES_H


#import <Foundation/Foundation.h>


@interface CALNTimeToLeaveEventTrackerUtilities : NSObject



+(NSUInteger)ttlEventTrackerAlertTypeForDate:(id)arg0 hypothesis:(id)arg1 ;
+(NSUInteger)ttlEventTrackerETATypeForHypothesis:(id)arg0 ;
+(NSUInteger)ttlEventTrackerTransportTypeForGEOTransportType:(int)arg0 ;
+(NSUInteger)ttlEventTrackerTravelStateForHypothesisTravelState:(NSInteger)arg0 ;
+(id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(NSUInteger)arg0 ;
+(void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)arg0 hypothesis:(id)arg1 hasSuggestedLocation:(BOOL)arg2 isOnSharedCalendar:(BOOL)arg3 ;
+(void)trackEmailEngagedForNotificationUsingTTLEventTracker:(id)arg0 hypothesis:(id)arg1 hasSuggestedLocation:(BOOL)arg2 isOnSharedCalendar:(BOOL)arg3 ;


@end


#endif