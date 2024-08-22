// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONUSERDOMAINCONCEPTDAILYANALYTICS_H
#define HDMEDICATIONUSERDOMAINCONCEPTDAILYANALYTICS_H

@class HDProfile, NSUserDefaults, NSCalendar, NSDate, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HDMedicationUserDomainConceptDailyAnalytics : NSObject <HKAnalyticsEvent>

 {
    HDProfile *_profile;
    NSUserDefaults *_medicationsUserDefaults;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


+(id)_countOfUserDomainConceptsWithPredicate:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)_medicationsAddedCountSinceDate:(id)arg0 transaction:(id)arg1 ;
+(id)_predicateForMedicationsSinceDate:(id)arg0 ;
-(id)_hasAddedMedsInPastIHAGatedPayloadWithTransaction:(id)arg0 ;
-(id)_hasAddedMedsInPastUnrestrictedPayloadWithTransaction:(id)arg0 ;
-(id)_hasAnyLifestyleFactorEnabledPayload;
-(id)_hasMedsListPayloadWithTransaction:(id)arg0 ;
-(id)_medsCountPayloadWithTransaction:(id)arg0 ;
-(id)_medsInteractionsPayloadWithTransaction:(id)arg0 ;
-(id)_weeksSinceFirstAddedMedPayloadWithTransaction:(id)arg0 ;
-(id)initWithProfile:(id)arg0 medicationsUserDefaults:(id)arg1 calendar:(id)arg2 currentDate:(id)arg3 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif