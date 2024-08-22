// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCONFLICTDETAILS_H
#define EKCONFLICTDETAILS_H

@class CalDateRange, NSArray;

#import <Foundation/Foundation.h>


@interface EKConflictDetails : NSObject

@property (retain) CalDateRange *conflictPeriodForSeries; // ivar: _conflictPeriodForSeries
@property (retain) NSArray *conflictingDates; // ivar: _conflictingDates
@property (retain) NSArray *conflictingEvents; // ivar: _conflictingEvents
@property (retain) NSArray *needsActionEvents; // ivar: _needsActionEvents
@property NSUInteger totalConflictingEvents; // ivar: _totalConflictingEvents
@property NSUInteger totalConflictsInSeries; // ivar: _totalConflictsInSeries
@property NSUInteger totalNeedsActionEvents; // ivar: _totalNeedsActionEvents
@property NSUInteger totalOccurrencesInSeries; // ivar: _totalOccurrencesInSeries


+(CGFloat)_maxRangeLengthForRule:(id)arg0 ;
+(id)_dateRangeToScanForConflictsForEvent:(id)arg0 dateForNow:(id)arg1 ;
+(id)calendarIdentifiersToScanForConflictsForEvent:(id)arg0 ;
+(id)dateRangeToScanForConflictsForEvent:(id)arg0 ;
+(id)infoWithConflicts:(NSInteger)arg0 needsAction:(NSInteger)arg1 event:(id)arg2 ;
+(id)infoWithConflictsInSeries:(NSInteger)arg0 outOf:(NSInteger)arg1 withPeriod:(id)arg2 conflictingDates:(id)arg3 ;
-(id)description;
-(id)initWithConflictingDates:(id)arg0 conflictingEvents:(id)arg1 needsActionEvents:(id)arg2 totalOccurrencesInSeries:(NSUInteger)arg3 conflictPeriodForSeries:(id)arg4 ;


@end


#endif