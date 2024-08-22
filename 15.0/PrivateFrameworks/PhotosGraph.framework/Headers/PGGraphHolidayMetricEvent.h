// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHHOLIDAYMETRICEVENT_H
#define PGGRAPHHOLIDAYMETRICEVENT_H

@class NSDictionary, NSString;


#import "PGAbstractMetricEvent.h"

@interface PGGraphHolidayMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}


@property (retain, nonatomic) NSString *holidayName; // ivar: _holidayName
@property (nonatomic) NSUInteger numberOfCelebrations; // ivar: _numberOfCelebrations


+(id)celebratedHolidayMetricEventsWithGraphManager:(id)arg0 ;
-(id)identifier;
-(id)initWithHolidayName:(id)arg0 numberOfCelebrations:(NSUInteger)arg1 ;
-(id)payload;


@end


#endif