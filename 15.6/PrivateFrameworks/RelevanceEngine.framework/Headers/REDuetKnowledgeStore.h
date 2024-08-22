// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDUETKNOWLEDGESTORE_H
#define REDUETKNOWLEDGESTORE_H

@class _DKKnowledgeStore;


#import "RESingleton.h"

@interface REDuetKnowledgeStore : RESingleton {
    _DKKnowledgeStore *_knowledgeStore;
}




-(id)_createActionsFromDuetEvents:(id)arg0 ;
-(id)_createEventsFromDuetEvents:(id)arg0 ;
-(id)_createTimelineFromPredictionTimeline:(id)arg0 filterEmptyData:(BOOL)arg1 ;
-(id)_createTombstonesFromDuetEvents:(id)arg0 ;
-(id)_duetChargingEventStream;
-(id)_duetDonationsStreams;
-(id)_duetQueryForDonatedActionsAfterDate:(id)arg0 onStreams:(id)arg1 withPredicate:(id)arg2 ;
-(id)_init;
-(id)_queryForDonatedActionsAfterDate:(id)arg0 streams:(id)arg1 ;
-(id)_queryForUnfilteredDonationsForStream:(id)arg0 ;
-(id)queryForAllDonatedActions;
-(id)queryForAllDonatedActionsWithIdentifier:(id)arg0 ;
-(id)queryForAllRelevantShortcuts;
-(id)queryForDeletedActionsAfterDate:(id)arg0 ;
-(id)queryForDonatedActionsAfterDate:(id)arg0 ;
-(id)queryForDuetEventWithIdentifier:(id)arg0 ;
-(id)queryForHistoricChargingEventsWithMinimumDuration:(CGFloat)arg0 inThePastDays:(NSUInteger)arg1 ;
-(id)queryForPredictedChargingEventsWithMinimumDuration:(CGFloat)arg0 ;
-(id)queryForTopNApplications:(NSInteger)arg0 withLikelihoodGreaterThan:(CGFloat)arg1 withTemporalResolution:(int)arg2 ;
-(id)queryForUnfilteredIntentDonations;
-(id)queryForUnfilteredRelevantShortcutDonations;
-(id)queryForUnfilteredUserActivityDonations;
-(id)sleepInterval;
-(void)_executeQuery:(id)arg0 responseQueue:(id)arg1 synchronouslyWithBatching:(BOOL)arg2 completion:(id)arg3 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 completion:(id)arg2 ;
-(void)executeQuerySynchronouslyWithBatching:(id)arg0 completion:(id)arg1 ;


@end


#endif