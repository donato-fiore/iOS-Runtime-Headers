// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHMONTHDAYNODECOLLECTION_H
#define PGGRAPHMONTHDAYNODECOLLECTION_H



#import "PGGraphCalendarUnitNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphMonthDayNodeCollection : PGGraphCalendarUnitNodeCollection

@property (readonly, nonatomic) PGGraphPersonNodeCollection *anniversaryPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *birthdayPersonNodes;


+(NSUInteger)calendarUnit;
+(id)dateOfMonthDay;
+(id)monthDayNodesForLocalDate:(id)arg0 inGraph:(id)arg1 ;
+(id)monthDayNodesForMonth:(NSInteger)arg0 day:(NSInteger)arg1 inGraph:(id)arg2 ;


@end


#endif