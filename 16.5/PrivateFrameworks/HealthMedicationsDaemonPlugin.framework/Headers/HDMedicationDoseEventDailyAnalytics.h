// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONDOSEEVENTDAILYANALYTICS_H
#define HDMEDICATIONDOSEEVENTDAILYANALYTICS_H

@class HDProfile, NSCalendar, NSDate, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HDMedicationDoseEventDailyAnalytics : NSObject <HKAnalyticsEvent>

 {
    HDProfile *_profile;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


+(id)_countOfDoseEventsWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)_doseEventCountLoggedSinceDate:(id)arg0 transaction:(id)arg1 ;
+(id)_predicateForDoseEventsBetweenDate:(id)arg0 andDate:(id)arg1 ;
+(id)_predicateForDoseEventsLoggedSinceDate:(id)arg0 ;
-(id)_hasLoggedAllScheduledMedsInPreviousDayPayloadWithTransaction:(id)arg0 ;
-(id)_hasLoggedMedsInPastPayloadWithTransaction:(id)arg0 ;
-(id)_weeksSinceFirstLoggedMedPayload;
-(id)initWithProfile:(id)arg0 calendar:(id)arg1 currentDate:(id)arg2 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif