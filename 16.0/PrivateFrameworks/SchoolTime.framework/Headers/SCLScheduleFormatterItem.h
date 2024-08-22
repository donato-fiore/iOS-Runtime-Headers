// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHEDULEFORMATTERITEM_H
#define SCLSCHEDULEFORMATTERITEM_H

@class NSCalendar, NSArray;

#import <Foundation/Foundation.h>


@interface SCLScheduleFormatterItem : NSObject {
    NSInteger _days;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy, nonatomic) NSArray *timeIntervals; // ivar: _timeIntervals


-(NSInteger)days;
-(NSInteger)earliestWeekdayInCalendar;
-(id)dayRanges;
-(id)initWithCalendar:(id)arg0 timeIntervals:(id)arg1 ;
-(void)addDay:(NSInteger)arg0 ;


@end


#endif