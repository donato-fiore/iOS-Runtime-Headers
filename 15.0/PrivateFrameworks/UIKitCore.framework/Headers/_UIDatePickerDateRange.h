// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERDATERANGE_H
#define _UIDATEPICKERDATERANGE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _UIDatePickerDateRange : NSObject {
    ? _flags;
}


@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)_containsDate:(id)arg0 withAccuracy:(NSUInteger)arg1 inCalendar:(id)arg2 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)containsDay:(id)arg0 ;
-(BOOL)containsMonth:(id)arg0 ;
-(id)dateInRangeForDate:(id)arg0 ;
-(id)init;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif