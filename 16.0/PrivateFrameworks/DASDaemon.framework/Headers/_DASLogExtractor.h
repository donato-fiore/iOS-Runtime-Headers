// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DASLOGEXTRACTOR_H
#define _DASLOGEXTRACTOR_H

@class NSString, NSDateFormatter, OSLogEventStream, OSLogEventStore;

#import <Foundation/Foundation.h>


@interface _DASLogExtractor : NSObject

@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) OSLogEventStream *eventStream; // ivar: _eventStream
@property (retain, nonatomic) OSLogEventStore *logStore; // ivar: _logStore
@property (retain, nonatomic) NSString *subsystem; // ivar: _subsystem


+(id)extractorForArchive:(id)arg0 ;
-(BOOL)didActivityFinish:(id)arg0 forActivity:(id)arg1 ;
-(BOOL)didActivityRun:(id)arg0 forActivity:(id)arg1 ;
-(id)copyActivitySummary:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 detail:(BOOL)arg3 error:(*int)arg4 ;
-(id)descriptionOfHigherThresholds:(id)arg0 ;
-(id)descriptionOfIncompatibilityDenials:(id)arg0 ;
-(id)descriptionOfPolicyToIntervalsMap:(id)arg0 ;
-(id)getActivityStartBeforeDate:(id)arg0 forActivity:(id)arg1 ;
-(id)getDefaultFilterPredicate;
-(id)getIncompatibilityReasons:(id)arg0 forActivity:(id)arg1 ;
-(id)getInstancesOfHigherThreshold:(id)arg0 forActivity:(id)arg1 ;
-(id)getMessagesAfterRunning:(id)arg0 forActivity:(id)arg1 ;
-(id)getMessagesBeforeRunning:(id)arg0 forActivity:(id)arg1 ;
-(id)getPolicyDenialReasonsFromMessage:(id)arg0 ;
-(id)getScheduledBlocksOfMessages:(id)arg0 forActivity:(id)arg1 ;
-(id)getSummaryFromLogs:(id)arg0 forActivity:(id)arg1 detail:(BOOL)arg2 ;
-(id)getpolicyToIntervals:(id)arg0 ;
-(id)initWithArchive:(id)arg0 ;
-(id)objectForTrigger:(id)arg0 fromCondition:(id)arg1 compactRepresentation:(BOOL)arg2 ;
-(id)summarizeAllDenialsOverMessages:(id)arg0 forActivity:(id)arg1 detail:(BOOL)arg2 ;
-(id)summarizePolicyDenialsOverMessages:(id)arg0 maxDuration:(CGFloat)arg1 ;
-(id)summarizeRuntimeOverMessages:(id)arg0 forActivity:(id)arg1 ;
-(int)handleLogEventsLogEvents:(id)arg0 sinceDate:(id)arg1 withHandler:(id)arg2 ;
-(int)summarizeActivity:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 detail:(BOOL)arg3 ;
-(int)sysConditionsLog:(BOOL)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)addConditionToHistory:(id)arg0 fromMessage:(id)arg1 atTimestamp:(id)arg2 compactRepresentation:(BOOL)arg3 ;


@end


#endif