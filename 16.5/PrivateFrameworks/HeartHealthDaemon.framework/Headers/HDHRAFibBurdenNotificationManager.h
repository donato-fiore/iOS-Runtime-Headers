// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRAFIBBURDENNOTIFICATIONMANAGER_H
#define HDHRAFIBBURDENNOTIFICATIONMANAGER_H

@class HDProfile, HKCalendarCache, HKAnalyticsEventSubmissionManager;
@protocol HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate, HDHRAFibBurdenNotificationManagerNotificationLastSentDateStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDHRAFibBurdenNotificationModeDeterminer.h"

@interface HDHRAFibBurdenNotificationManager : NSObject <HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate>

 {
    HDProfile *_profile;
    id *_dateGenerator;
    HKCalendarCache *_calendarCache;
    HDHRAFibBurdenNotificationModeDeterminer *_modeDeterminer;
    id<HDHRAFibBurdenNotificationManagerNotificationLastSentDateStore> *_notificationLastSentDateStore;
    HKAnalyticsEventSubmissionManager *_eventSubmissionManager;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)_buildNotificationBodyForCurrentPercentageString:(id)arg0 isCurrentValueClamped:(BOOL)arg1 previousPercentageString:(id)arg2 isPreviousValueClamped:(BOOL)arg3 ;
+(id)_buildNotificationForAFibBurdenCurrentPercentage:(id)arg0 isCurrentValueClamped:(BOOL)arg1 previousPercentage:(id)arg2 isPreviousValueClamped:(BOOL)arg3 startDate:(id)arg4 endDate:(id)arg5 currentDate:(id)arg6 expirationDate:(id)arg7 uuid:(id)arg8 calendar:(id)arg9 ;
+(id)_buildNotificationForLackOfAFibBurdenWithCurrentDate:(id)arg0 expirationDate:(id)arg1 shouldForwardToWatch:(BOOL)arg2 uuid:(id)arg3 ;
+(id)_generateDateRangeStringForAnalysisSampleWithStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
+(id)_julianDayFromDate:(id)arg0 calendar:(id)arg1 ;
+(id)_notificationBodyKeyForCurrentPercentageString:(id)arg0 isCurrentValueClamped:(BOOL)arg1 previousPercentageString:(id)arg2 isPreviousValueClamped:(BOOL)arg3 ;
-(id)_buildNotificationForMode:(id)arg0 ;
-(id)_buildValueNotificationForMode:(id)arg0 currentDate:(id)arg1 ;
-(id)_generateExpirationDateWithCurrentDate:(id)arg0 ;
-(id)_userNotificationCenter;
-(id)initWithProfile:(id)arg0 ;
// -(id)initWithProfile:(id)arg0 modeDeterminer:(id)arg1 notificationLastSentDateStore:(id)arg2 calendarCache:(id)arg3 dateGenerator:(id)arg4 eventSubmissionManager:(unk)arg5  ;
-(void)_sendNotificationRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)sevenDayAnalysisScheduler:(id)arg0 didSuccessfullyCompleteAnalysisWithSample:(id)arg1 onboardedWithinAnalysisInterval:(BOOL)arg2 featureStatus:(id)arg3 ;


@end


#endif