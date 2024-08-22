// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHWEEKOFYEARNODECOLLECTION_H
#define PGGRAPHWEEKOFYEARNODECOLLECTION_H



#import "PGGraphCalendarUnitNodeCollection.h"

@interface PGGraphWeekOfYearNodeCollection : PGGraphCalendarUnitNodeCollection



+(NSUInteger)calendarUnit;
+(id)dateOfWeekOfYear;
+(id)weekOfYearNodesForWeekOfYear:(NSInteger)arg0 inGraph:(id)arg1 ;


@end


#endif