// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHMONTHNODECOLLECTION_H
#define PGGRAPHMONTHNODECOLLECTION_H



#import "PGGraphCalendarUnitNodeCollection.h"

@interface PGGraphMonthNodeCollection : PGGraphCalendarUnitNodeCollection



+(NSUInteger)calendarUnit;
+(id)dateOfMonth;
+(id)monthNodesForMonth:(NSInteger)arg0 inGraph:(id)arg1 ;


@end


#endif