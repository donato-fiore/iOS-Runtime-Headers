// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHDATENODECOLLECTION_H
#define PGGRAPHDATENODECOLLECTION_H

@class NSDateInterval;


#import "PGGraphNodeCollection.h"
#import "PGGraphDayNodeCollection.h"
#import "PGGraphHolidayNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphMonthDayNodeCollection.h"
#import "PGGraphMonthNodeCollection.h"
#import "PGGraphSeasonNodeCollection.h"
#import "PGGraphWeekOfMonthNodeCollection.h"
#import "PGGraphWeekOfYearNodeCollection.h"
#import "PGGraphYearNodeCollection.h"

@interface PGGraphDateNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphDayNodeCollection *dayNodes;
@property (readonly, nonatomic) PGGraphHolidayNodeCollection *holidayNodes;
@property (readonly, nonatomic) NSDateInterval *localDateInterval;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMonthDayNodeCollection *monthDayNodes;
@property (readonly, nonatomic) PGGraphMonthNodeCollection *monthNodes;
@property (readonly, nonatomic) PGGraphSeasonNodeCollection *seasonNodes;
@property (readonly, nonatomic) PGGraphWeekOfMonthNodeCollection *weekOfMonthNodes;
@property (readonly, nonatomic) PGGraphWeekOfYearNodeCollection *weekOfYearNodes;
@property (readonly, nonatomic) PGGraphYearNodeCollection *yearNodes;


+(Class)nodeClass;
+(id)dateNodesForLocalDates:(id)arg0 inGraph:(id)arg1 ;


@end


#endif