// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAUDIOANALYTICSUTILITIES_H
#define HDAUDIOANALYTICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsUtilities : NSObject



+(CGFloat)doseFromStatistics:(id)arg0 days:(NSInteger)arg1 ;
+(CGFloat)durationFromStatistics:(id)arg0 ;
+(CGFloat)leqFromStatistics:(id)arg0 ;
+(NSInteger)exposureAlertCount:(id)arg0 ;
+(id)_quantityTypeForExposureType:(NSInteger)arg0 ;
+(id)audioAverageAndDurationForExposureType:(NSInteger)arg0 profile:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(*id)arg4 ;
+(id)audioExposureEventsForExposureType:(NSInteger)arg0 profile:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(*id)arg4 ;
+(id)boundedIntegerForDose:(CGFloat)arg0 ;
+(id)boundedIntegerForEventDuration:(CGFloat)arg0 ;
+(id)boundedIntegerForExposureDuration:(CGFloat)arg0 ;
+(id)boundedIntegerForLEQ:(CGFloat)arg0 ;
+(id)boundedIntegerForLockedDuration:(CGFloat)arg0 ;
+(id)boundedIntegerForSoundReductionLEQ:(CGFloat)arg0 ;
+(id)boundedIntegerForSyncDelayDuration:(CGFloat)arg0 ;
+(id)boundedIntegerForTimeSinceLastNotification:(CGFloat)arg0 ;
+(id)boundedIntegerForValue:(CGFloat)arg0 orderedBuckets:(id)arg1 sentinel:(id)arg2 transformer:(id)arg3 ;
+(id)fullDays:(NSInteger)arg0 beforeDate:(id)arg1 ;
+(id)latestAudioExposureEventForExposureType:(NSInteger)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)localGregorianCalendar;
+(id)rollingDays:(NSInteger)arg0 beforeDate:(id)arg1 ;


@end


#endif