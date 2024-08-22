// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELPREDICTIONSCHEDULER_H
#define ATXANCHORMODELPREDICTIONSCHEDULER_H

@class _PASLock, NSDate, NSUserDefaults;
@protocol ATXAnchorModelPredictionForwarderProtocol, ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelHyperParameters.h"

@interface ATXAnchorModelPredictionScheduler : NSObject {
    _PASLock *_schedulerLock;
    id<ATXAnchorModelPredictionForwarderProtocol> *_predictionForwarder;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSDate *_now;
    NSUserDefaults *_defaults;
    NSUInteger _maxPredictions;
}




-(BOOL)dateIsInFuture:(id)arg0 now:(id)arg1 ;
-(id)criteriaForJobOnDate:(id)arg0 ;
-(id)dateOfSoonestUpcomingPredictionChange;
-(id)deduplicatedPredictions:(id)arg0 ;
-(id)deserializePredictionsDataOrInitializeDictionary:(id)arg0 ;
-(id)earlierDateInFuture:(id)arg0 earliestDateSoFar:(id)arg1 now:(id)arg2 ;
-(id)init;
-(id)initWithPredictionForwarder:(id)arg0 hyperParameters:(id)arg1 tracker:(id)arg2 now:(id)arg3 maxPredictions:(NSUInteger)arg4 ;
-(id)now;
-(id)predictions;
-(id)predictionsAfterFilteringInactiveAnchors:(id)arg0 ;
-(id)predictionsValidNow;
-(id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
-(id)readPredictionsFromUserDefaults;
-(id)serializePredictions:(id)arg0 ;
-(void)clearPredictionsForAnchor:(id)arg0 ;
-(void)forwardPredictionUpdates;
-(void)forwardPredictionUpdatesOnDate:(id)arg0 ;
-(void)initializeLock;
-(void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)arg0 ;
-(void)persistPredictions:(id)arg0 anchor:(id)arg1 ;
-(void)registerXPCActivityForPredictionUpdateWithCriteria:(id)arg0 ;
-(void)scheduleExistingPredictions;
-(void)scheduleNextPredictionUpdate;
-(void)schedulePredictions:(id)arg0 anchor:(id)arg1 ;
-(void)writePredictionsToUserDefaults:(id)arg0 ;


@end


#endif