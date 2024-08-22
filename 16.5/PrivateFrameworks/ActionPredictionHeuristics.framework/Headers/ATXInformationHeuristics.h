// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFORMATIONHEURISTICS_H
#define ATXINFORMATIONHEURISTICS_H

@class NSMutableSet, _PASSimpleCoalescingTimer;
@protocol ATXInformationHeuristicRefreshTriggerDelegate, OS_dispatch_queue, ATXInformationHeuristicsDelegate;

#import <Foundation/Foundation.h>


@interface ATXInformationHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate>

 {
    NSMutableSet *_heuristicRefreshTriggers;
    NSMutableSet *_heuristicsPendingRefresh;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshOperation;
}


@property (weak, nonatomic) NSObject<ATXInformationHeuristicsDelegate> *delegate; // ivar: _delegate


-(BOOL)_refreshResultsForHeuristics:(id)arg0 ;
-(id)_criteriaForRefreshJobOnDate:(id)arg0 ;
-(id)getResultsFromHeuristicInterpreter:(id)arg0 ;
-(id)init;
-(id)sourceIdentifierForHeuristicWithName:(id)arg0 ;
-(void)_refreshResultsForAllHeuristics:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_setRefreshCTSJobForCriteria:(id)arg0 forHeuristics:(id)arg1 ;
-(void)informationHeuristicRefreshTrigger:(id)arg0 didTriggerRefreshForHeuristics:(id)arg1 ;
-(void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id)arg0 ;
-(void)refreshResultsForAllHeuristicsWithCompletionHandler:(id)arg0 ;


@end


#endif