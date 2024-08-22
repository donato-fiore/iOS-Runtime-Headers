// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSAGETRACKINGAGENT_H
#define PLUSAGETRACKINGAGENT_H

@class PLAgent, USUsageReporter;



@interface PLUsageTrackingAgent : PLAgent

@property (retain) USUsageReporter *usageReporter; // ivar: _usageReporter


+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionUsageTime;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEntriesFromUsageReports:(id)arg0 ;
-(void)logEventIntervalUsageTime;


@end


#endif