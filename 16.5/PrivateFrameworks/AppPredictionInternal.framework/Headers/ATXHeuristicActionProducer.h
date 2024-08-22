// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICACTIONPRODUCER_H
#define ATXHEURISTICACTIONPRODUCER_H


#import <Foundation/Foundation.h>


@interface ATXHeuristicActionProducer : NSObject {
    id *_expireNotificationHandle;
}




+(CGFloat)generateScoreForHeuristic:(id)arg0 ;
+(NSUInteger)actionExperienceForScoredHeuristicAction:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isActionBlacklisted:(id)arg0 ;
-(BOOL)userAlreadyEngagedWithAction:(id)arg0 ;
-(id)_criteriaForJobOnDate:(id)arg0 ;
-(id)actionPredictionBlacklist;
-(id)bundleIdForAction:(id)arg0 ;
-(id)digitalHealthBlacklist;
-(id)firstUpdateDateForActions:(id)arg0 ;
-(id)init;
-(id)produceActions;
-(void)coalescedProduceActions;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateOnGlobalQueueWithDelay:(CGFloat)arg0 ;
-(void)scheduleNextHeuristicRefreshGivenActions:(id)arg0 ;
-(void)setUpdateJobForCriteria:(id)arg0 ;


@end


#endif