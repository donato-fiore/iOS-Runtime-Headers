// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTDAILYANALYTICSBUILDER_H
#define HDHEARTDAILYANALYTICSBUILDER_H

@class NSUserDefaults, NSCalendar, NSDateInterval, NRPairedDeviceRegistry;

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
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
    BOOL _areHealthNotificationsAuthorized;
}




-(id)heartDailyAnalyticsWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 calendar:(id)arg1 dateInterval:(id)arg2 heartRateNotificationsUserDefaults:(id)arg3 heartRhythmUserDefaults:(id)arg4 remoteFeatureAvailabilityUserDefaults:(id)arg5 pairedDeviceRegistry:(id)arg6 areHealthNotificationsAuthorized:(BOOL)arg7 isHealthDataSubmissionAllowed:(BOOL)arg8 ;


@end


#endif