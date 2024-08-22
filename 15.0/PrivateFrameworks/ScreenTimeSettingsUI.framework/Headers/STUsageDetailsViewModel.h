// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUSAGEDETAILSVIEWMODEL_H
#define STUSAGEDETAILSVIEWMODEL_H

@class NSArray, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "STUsageReport.h"

@interface STUsageDetailsViewModel : NSObject

@property (copy) NSArray *dayUsageReportByWeekdays; // ivar: _dayUsageReportByWeekdays
@property BOOL hasAggregateUsageData; // ivar: _hasAggregateUsageData
@property (readonly, nonatomic) BOOL hasUsageData;
@property (copy) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (getter=isLocalDevice) BOOL localDevice; // ivar: _localDevice
@property (copy) NSArray *rawUsageItems; // ivar: _rawUsageItems
@property (nonatomic) NSUInteger selectedDay; // ivar: _selectedDay
@property (retain) STUsageReport *selectedDayUsageReport; // ivar: _selectedDayUsageReport
@property (copy) NSString *selectedItemDisplayName; // ivar: _selectedItemDisplayName
@property (readonly) STUsageReport *selectedUsageReport;
@property (nonatomic) NSUInteger selectedWeek; // ivar: _selectedWeek
@property (retain) STUsageReport *selectedWeekUsageReport; // ivar: _selectedWeekUsageReport
@property (copy) NSArray *weekUsageReports; // ivar: _weekUsageReports


+(id)keyPathsForValuesAffectingHasUsageData;
+(id)keyPathsForValuesAffectingSelectedUsageReport;
+(void)_enumerateDayReportStartDatesWithStartOfWeek:(id)arg0 ascending:(BOOL)arg1 block:(id)arg2 ;
+(void)_enumerateWeeklyReportStartDatesWithReferenceDate:(id)arg0 ascending:(BOOL)arg1 block:(id)arg2 ;
-(NSUInteger)_mostRecentAvailableWeekday;
-(id)init;
-(void)selectToday;
-(void)setWeekReportUsageItems:(id)arg0 weekStartDate:(id)arg1 lastUpdatedDate:(id)arg2 ;


@end


#endif