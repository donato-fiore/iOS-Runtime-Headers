// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEADPHONEAUDIOEXPOSURESTATISTICSSNAPSHOT_H
#define HDHEADPHONEAUDIOEXPOSURESTATISTICSSNAPSHOT_H

@class NSDate, HKStatistics;

#import <Foundation/Foundation.h>


@interface HDHeadphoneAudioExposureStatisticsSnapshot : NSObject

@property (readonly, nonatomic) BOOL includesPrunableData; // ivar: _includesPrunableData
@property (readonly, nonatomic) NSDate *previousNotificationDate; // ivar: _previousNotificationDate
@property (readonly, nonatomic) HKStatistics *statistics; // ivar: _statistics


-(id)initWithStatistics:(id)arg0 includesPrunableData:(BOOL)arg1 previousNotificationDate:(id)arg2 ;
-(id)unitTesting_hearingSevenDayDoseCategorySampleWithNow:(id)arg0 error:(*id)arg1 ;


@end


#endif