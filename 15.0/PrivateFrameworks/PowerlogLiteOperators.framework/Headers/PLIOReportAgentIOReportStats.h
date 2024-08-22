// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLIOREPORTAGENTIOREPORTSTATS_H
#define PLIOREPORTAGENTIOREPORTSTATS_H

@class PLAgent, PLTimer;


#import "PLIOReportStats.h"

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent; // ivar: _agent
@property (retain) PLTimer *halfHourTimer; // ivar: _halfHourTimer
@property NSUInteger sampleAPAwakeTime; // ivar: _sampleAPAwakeTime


+(BOOL)shouldLogSoCStatsPMGRCountersID;
+(id)columnNameForChannelID:(NSUInteger)arg0 ;
+(id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;
+(id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+(id)entryEventBackwardDefinitions;
+(id)maskedNameForChannelID:(NSUInteger)arg0 ;
+(int)idNumberFromIDDiff:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithAgent:(id)arg0 ;
-(void)initTaskOperatorDependancies;
-(void)logEventBackwardSoCStatsPMGRCounters;


@end


#endif