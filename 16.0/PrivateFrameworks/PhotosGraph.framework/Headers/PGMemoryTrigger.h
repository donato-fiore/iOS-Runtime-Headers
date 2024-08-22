// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYTRIGGER_H
#define PGMEMORYTRIGGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGMemoryTrigger : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) BOOL supportsFutureLookup;
@property (readonly, nonatomic) NSUInteger triggerType;


+(NSUInteger)triggerTypeFromString:(id)arg0 ;
+(id)dateNodesInGraph:(id)arg0 startDayOffset:(NSInteger)arg1 endDayOffset:(NSInteger)arg2 fromLocalDate:(id)arg3 inTimeZone:(id)arg4 ;
+(id)localDateIntervalFromLocalDate:(id)arg0 startDayOffset:(NSInteger)arg1 endDayOffset:(NSInteger)arg2 inTimeZone:(id)arg3 ;
+(id)memoryTriggerResultsForMemoryNodes:(id)arg0 withValidityInterval:(id)arg1 ;
+(id)memoryTriggerResultsForMemoryNodesArray:(id)arg0 withValidityInterval:(id)arg1 ;
+(id)monthDayCalendarUnitValuesForLocalDateInterval:(id)arg0 ;
+(id)monthDayNodesInGraph:(id)arg0 startDayOffset:(NSInteger)arg1 endDayOffset:(NSInteger)arg2 fromLocalDate:(id)arg3 inTimeZone:(id)arg4 ;
+(id)singleDayValidityIntervalWithContext:(id)arg0 ;
+(id)stringFromTriggerType:(NSUInteger)arg0 ;
+(id)validityIntervalForLocalStartDate:(id)arg0 localEndDate:(id)arg1 timeZone:(id)arg2 ;
-(id)init;
-(id)initWithLoggingConnection:(id)arg0 ;
-(id)relevantFeatureNodesInFeatureNodes:(id)arg0 ;
-(id)resultsTriggeredWithContext:(id)arg0 inGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif