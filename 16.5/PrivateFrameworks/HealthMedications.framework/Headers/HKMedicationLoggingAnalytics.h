// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONLOGGINGANALYTICS_H
#define HKMEDICATIONLOGGINGANALYTICS_H


#import <Foundation/Foundation.h>


@interface HKMedicationLoggingAnalytics : NSObject



+(BOOL)_isAllowed;
+(BOOL)_isMetricEnabled;
+(BOOL)shouldSubmit;
+(void)submitLogMetricWith:(NSInteger)arg0 provenance:(NSInteger)arg1 context:(NSInteger)arg2 loggingMultipleMeds:(BOOL)arg3 hoursAgoLoggedForMax:(id)arg4 hoursAgoLoggedForMin:(id)arg5 hoursFromScheduledTimeLoggedMax:(id)arg6 hoursFromScheduledTimeLoggedMin:(id)arg7 hoursFromScheduledToTakenOrSkippedMax:(id)arg8 hoursFromScheduledToTakenOrSkippedMin:(id)arg9 isPartiallyLoggingScheduledMeds:(id)arg10 dataSource:(id)arg11 ;


@end


#endif