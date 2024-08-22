// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHDAYNODECOLLECTION_H
#define PGGRAPHDAYNODECOLLECTION_H



#import "PGGraphCalendarUnitNodeCollection.h"

@interface PGGraphDayNodeCollection : PGGraphCalendarUnitNodeCollection



+(NSUInteger)calendarUnit;
+(id)dateOfDay;
+(id)dayNodesForDay:(NSInteger)arg0 inGraph:(id)arg1 ;


@end


#endif