// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHYEARNODECOLLECTION_H
#define PGGRAPHYEARNODECOLLECTION_H

@class NSArray;


#import "PGGraphCalendarUnitNodeCollection.h"

@interface PGGraphYearNodeCollection : PGGraphCalendarUnitNodeCollection

@property (readonly, nonatomic) NSArray *years;


+(NSUInteger)calendarUnit;
+(id)dateOfYear;
+(id)yearNodesForYear:(NSInteger)arg0 inGraph:(id)arg1 ;


@end


#endif