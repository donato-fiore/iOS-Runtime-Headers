// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEDICATIONSCHEDULEDAILYANALYTICS_H
#define HDMEDICATIONSCHEDULEDAILYANALYTICS_H

@class HDProfile, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HDMedicationScheduleDailyAnalytics : NSObject <HKAnalyticsEvent>

 {
    HDProfile *_profile;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


+(id)_medicationCountForSchedulesWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)_medicationCountForUnavailableSchedulesWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)_makeMedicationCountPayloadForSchedulesWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif