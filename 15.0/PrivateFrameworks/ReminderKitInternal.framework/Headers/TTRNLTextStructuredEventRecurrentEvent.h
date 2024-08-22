// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTRNLTEXTSTRUCTUREDEVENTRECURRENTEVENT_H
#define TTRNLTEXTSTRUCTUREDEVENTRECURRENTEVENT_H

@class NSDate, NSDateComponents, NSDictionary;

#import <Foundation/Foundation.h>


@interface TTRNLTextStructuredEventRecurrentEvent : NSObject

@property (readonly, nonatomic) NSInteger dayFrequency;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDateComponents *endDateComponents; // ivar: _endDateComponents
@property (copy, nonatomic) NSDictionary *frequency; // ivar: _frequency
@property (copy, nonatomic) NSDateComponents *frequencyComponents; // ivar: _frequencyComponents
@property (readonly, nonatomic) NSInteger hourFrequency;
@property (nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (readonly, nonatomic) NSInteger monthFrequency;
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents
@property (readonly, nonatomic) NSInteger weekDay;
@property (readonly, nonatomic) NSInteger weekOfMonthFrequency;
@property (readonly, nonatomic) NSInteger weekOfYear;
@property (readonly, nonatomic) NSInteger weekdayEnd;
@property (readonly, nonatomic) NSInteger weekdayOrdinal;
@property (readonly, nonatomic) NSInteger weekdayStart;
@property (readonly, nonatomic) NSInteger yearFrequency;


-(NSInteger)frequencyForKey:(id)arg0 ;
-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 startDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 frequency:(id)arg4 ;
-(id)initWithRange:(struct _NSRange )arg0 startDate:(id)arg1 endDate:(id)arg2 isAllDay:(BOOL)arg3 startComponents:(id)arg4 endComponents:(id)arg5 frequencyComponents:(id)arg6 ;


@end


#endif