// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHCALENDARUNITEDGE_H
#define PGGRAPHCALENDARUNITEDGE_H



#import "PGGraphPropertylessEdge.h"

@interface PGGraphCalendarUnitEdge : PGGraphPropertylessEdge {
    BOOL _calendarUnit;
}




+(id)dayFilter;
+(id)dayOfWeekFilter;
+(id)monthDayFilter;
+(id)monthFilter;
+(id)weekOfMonthFilter;
+(id)weekOfYearFilter;
+(id)yearFilter;
-(id)initWithCalendarUnit:(NSUInteger)arg0 fromDateNode:(id)arg1 toCalendarUnitNode:(id)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif