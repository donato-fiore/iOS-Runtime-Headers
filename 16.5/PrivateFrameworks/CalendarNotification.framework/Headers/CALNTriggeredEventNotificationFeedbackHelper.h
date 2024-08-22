// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONFEEDBACKHELPER_H
#define CALNTRIGGEREDEVENTNOTIFICATIONFEEDBACKHELPER_H


#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationFeedbackHelper : NSObject



+(void)recordDisplayOfInitialTimeToLeaveAlertForSourceClientIdentifier:(id)arg0 event:(id)arg1 hypothesis:(id)arg2 travelAdvisoryTimelinessPeriod:(NSUInteger)arg3 foundInAppsEventTracker:(id)arg4 suggestionsServiceLogger:(id)arg5 ttlEventTracker:(id)arg6 ;
+(void)sendFeedbackForPostingNotificationWithTravelAdvisoryTimelinessPeriod:(NSUInteger)arg0 sourceClientIdentifier:(id)arg1 travelEngine:(id)arg2 ;


@end


#endif