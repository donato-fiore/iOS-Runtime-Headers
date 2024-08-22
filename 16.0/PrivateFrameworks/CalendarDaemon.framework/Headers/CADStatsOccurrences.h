// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADSTATSOCCURRENCES_H
#define CADSTATSOCCURRENCES_H

@class NSMutableArray, CalDateRange;


#import "CADStatCollector.h"

@interface CADStatsOccurrences : CADStatCollector {
    NSMutableArray *_occurrenceInfos;
    CalDateRange *_last1Day;
    CalDateRange *_next1Day;
    CalDateRange *_next7Days;
    CalDateRange *_next30Days;
    CalDateRange *_next365Days;
    CalDateRange *_desiredOccurrenceRange;
}




+(id)eventName;
-(BOOL)wantsOccurrences;
-(id)desiredOccurrenceRange;
-(id)eventDictionaries;
-(void)prepareWithContext:(id)arg0 ;
-(void)processOccurrences:(id)arg0 ;


@end


#endif