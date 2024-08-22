// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDDATERANGE_H
#define WDDATERANGE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface WDDateRange : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)dateRangeWithStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)dateRangeWithTimePeriod:(NSInteger)arg0 anchorDate:(id)arg1 ;
-(BOOL)dateInRange:(id)arg0 ;
-(id)_getEndDateFromStartDate:(id)arg0 timePeriod:(NSInteger)arg1 ;
-(id)_getStartDateFromAnchorDate:(id)arg0 timePeriod:(NSInteger)arg1 ;
-(id)description;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithTimePeriod:(NSInteger)arg0 anchorDate:(id)arg1 ;


@end


#endif