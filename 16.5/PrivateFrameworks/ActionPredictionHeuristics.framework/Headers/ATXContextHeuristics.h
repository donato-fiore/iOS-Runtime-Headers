// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTHEURISTICS_H
#define ATXCONTEXTHEURISTICS_H

@class ATXLocationManager, NSMutableSet, ATXContextHeuristicCache, _PASSimpleCoalescingTimer, ATXInformationHeuristicRefreshTimeTrigger, NSString, ATXHeuristicDevice;
@protocol ATXInformationHeuristicRefreshTriggerDelegate, ATXContextHeuristicsEnvironment, OS_dispatch_queue, ATXContextHeuristicsDelegate;

#import <Foundation/Foundation.h>


@interface ATXContextHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate, ATXContextHeuristicsEnvironment>

 {
    ATXLocationManager *_locationManager;
    NSMutableSet *_heuristicRefreshTriggers;
    NSMutableSet *_heuristicsPendingRefresh;
    NSObject<OS_dispatch_queue> *_queue;
    ATXContextHeuristicCache *_resultsCache;
    _PASSimpleCoalescingTimer *_coalescedRefreshOperation;
    ATXInformationHeuristicRefreshTimeTrigger *_earliestRefreshTimeTrigger;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXContextHeuristicsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXHeuristicDevice *heuristicDevice; // ivar: _heuristicDevice
@property (readonly) Class superclass;


-(BOOL)_refreshResultsForHeuristics:(id)arg0 ;
-(id)initWithLocationManager:(id)arg0 ;
-(void)_refreshResultsForAllHeuristicsWithCompletionHandler:(id)arg0 ;
-(void)informationHeuristicRefreshTrigger:(id)arg0 didTriggerRefreshForHeuristics:(id)arg1 ;
-(void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(id)arg0 ;
-(void)updateHeuristicName:(id)arg0 withRefreshTriggers:(id)arg1 ;


@end


#endif