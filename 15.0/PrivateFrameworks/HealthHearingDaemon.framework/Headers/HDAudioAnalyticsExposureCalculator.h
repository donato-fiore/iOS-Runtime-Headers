// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAUDIOANALYTICSEXPOSURECALCULATOR_H
#define HDAUDIOANALYTICSEXPOSURECALCULATOR_H

@class HDProfile, NSDate;

#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsExposureCalculator : NSObject

@property (nonatomic) NSInteger audioExposureType; // ivar: _audioExposureType
@property (retain, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSDate *targetDate; // ivar: _targetDate


-(id)audioExposureResultWithError:(*id)arg0 ;
-(id)initWithTargetDate:(id)arg0 exposureType:(NSInteger)arg1 profile:(id)arg2 ;
-(id)notificationCountForRollingDays:(NSInteger)arg0 error:(*id)arg1 ;
-(id)sevenDayDoseForMostRecentNotificationWithError:(*id)arg0 ;


@end


#endif