// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEARTDAILYANALYTICSBUILDER_H
#define HDHEARTDAILYANALYTICSBUILDER_H

@class NSUserDefaults, NSCalendar, NSDateInterval;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDHeartDailyAnalytics.h"

@interface HDHeartDailyAnalyticsBuilder : NSObject {
    HDProfile *_profile;
    HDHeartDailyAnalytics *_heartDailyAnalytics;
    NSUserDefaults *_heartRateNotificationsUserDefaults;
    NSUserDefaults *_heartRhythmUserDefaults;
    NSUserDefaults *_remoteFeatureAvailabilityUserDefaults;
    BOOL _isHealthDataSubmissionAllowed;
    NSCalendar *_calendar;
    NSDateInterval *_dateInterval;
}




-(id)heartDailyAnalyticsWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 calendar:(id)arg1 dateInterval:(id)arg2 heartRateNotificationsUserDefaults:(id)arg3 heartRhythmUserDefaults:(id)arg4 remoteFeatureAvailabilityUserDefaults:(id)arg5 isHealthDataSubmissionAllowed:(BOOL)arg6 ;


@end


#endif