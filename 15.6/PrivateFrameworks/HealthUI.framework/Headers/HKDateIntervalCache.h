// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATEINTERVALCACHE_H
#define HKDATEINTERVALCACHE_H

@class NSDate, NSArray, NSCalendar, NSDateComponents;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKDateIntervalCache : NSObject {
    NSDate *_minAnchorDate;
    NSDate *_maxAnchorDate;
    CGFloat _previousTimeInterval;
    BOOL _datesInvalidated;
    NSArray *_cachedDates;
    NSCalendar *_currentCalendarOverride;
}


@property (nonatomic) NSUInteger dateAnchorUnit; // ivar: _dateAnchorUnit
@property (readonly, nonatomic) NSArray *datePoints;
@property (readonly, nonatomic) HKValueRange *dateRange; // ivar: _dateRange
@property (retain, nonatomic) NSDateComponents *dateSpacingComponents; // ivar: _dateSpacingComponents
@property (retain, nonatomic) NSDateComponents *minorDateSpacingComponents; // ivar: _minorDateSpacingComponents
@property (retain, nonatomic) NSDateComponents *referenceSpacingComponents; // ivar: _referenceSpacingComponents


-(NSUInteger)_minimumCalendarUnitForComponents:(id)arg0 ;
-(id)_currentCalendar;
-(id)_firstDateAfter:(id)arg0 matchingComponents:(id)arg1 calendar:(id)arg2 ;
-(id)_generateCachedDates;
-(id)_maxAnchorDateFromDate:(id)arg0 ;
-(id)_minAnchorDateFromDate:(id)arg0 ;
-(id)_nextDateForDate:(id)arg0 components:(id)arg1 calendar:(id)arg2 ;
-(id)init;
-(void)_invalidateCachedDates;
-(void)_setCurrentCalendar:(id)arg0 ;
-(void)_updateAnchorDates;


@end


#endif