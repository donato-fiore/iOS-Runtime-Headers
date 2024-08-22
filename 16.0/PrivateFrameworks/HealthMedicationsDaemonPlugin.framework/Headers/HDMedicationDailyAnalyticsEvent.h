// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONDAILYANALYTICSEVENT_H
#define HDMEDICATIONDAILYANALYTICSEVENT_H

@class HDProfile, NSUserDefaults, NSCalendar, NSDate, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>

#import "HDMedicationDoseEventDailyAnalytics.h"
#import "HDMedicationUserDomainConceptDailyAnalytics.h"
#import "HDMedicationOntologyDailyAnalytics.h"
#import "HDMedicationScheduleDailyAnalytics.h"

@interface HDMedicationDailyAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HDProfile *_profile;
    NSUserDefaults *_medicationsUserDefaults;
    NSCalendar *_calendar;
    NSDate *_currentDate;
    HDMedicationDoseEventDailyAnalytics *_doseEventAnalytics;
    HDMedicationUserDomainConceptDailyAnalytics *_medicationConceptAnalytics;
    HDMedicationOntologyDailyAnalytics *_ontologyAnalytics;
    HDMedicationScheduleDailyAnalytics *_scheduleAnalytics;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)arg0 ;
-(id)_lifestyleInteractionsAnalyticsPayload;
-(id)_reminderAnalyticsPayload;
-(id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif