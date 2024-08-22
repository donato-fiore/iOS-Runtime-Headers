// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYTRIGGERUPCOMINGHOLIDAY_H
#define PGMEMORYTRIGGERUPCOMINGHOLIDAY_H

@class NSSet;


#import "PGHolidayMemoryTrigger.h"

@interface PGMemoryTriggerUpcomingHoliday : PGHolidayMemoryTrigger {
    NSSet *_validHolidaysNames;
}




-(NSUInteger)triggerType;
-(id)initWithLoggingConnection:(id)arg0 holidayService:(id)arg1 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif