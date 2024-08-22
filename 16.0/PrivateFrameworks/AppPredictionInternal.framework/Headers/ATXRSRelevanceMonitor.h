// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXRSRELEVANCEMONITOR_H
#define ATXRSRELEVANCEMONITOR_H

@class NSArray, _PASSimpleCoalescingTimer, BMBiomeScheduler, BPSSink;
@protocol OS_dispatch_queue, ATXRSRelevanceMonitorDelegate;

#import <Foundation/Foundation.h>


@interface ATXRSRelevanceMonitor : NSObject {
    NSArray *_queue_candidates;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshCurrentlyRelevantCandidatesOperation;
    BMBiomeScheduler *_computedModeScheduler;
    BPSSink *_computedModeSink;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeSink;
}


@property (weak, nonatomic) NSObject<ATXRSRelevanceMonitorDelegate> *delegate; // ivar: _delegate


-(BOOL)_isBehavioralRelevanceSatisfiedForCandidate:(id)arg0 currentMode:(NSUInteger)arg1 ;
-(BOOL)_isDateRelevanceSatisfied:(id)arg0 ;
-(id)_earliestFutureDateAmongDateRelevanceProviders:(id)arg0 ;
-(id)_nonnullEndDateOfDateRelevanceProvider:(id)arg0 ;
-(id)init;
-(void)_coalescedRefreshCurrentlyRelevantCandidates;
-(void)_queue_clearAllCurrentMonitoring;
-(void)_queue_refreshCurrentlyRelevantCandidates;
-(void)_queue_startMonitoringDateRelevanceProviders:(id)arg0 ;
-(void)_queue_startMonitoringModeChanges;
-(void)resetToMonitorForRelevantWidgetCandidates:(id)arg0 ;


@end


#endif