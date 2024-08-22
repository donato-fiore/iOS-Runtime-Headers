// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHLOCALHOSTSCENEENVIRONMENTUPDATERTIMELINESCALCULATOR_H
#define BLSHLOCALHOSTSCENEENVIRONMENTUPDATERTIMELINESCALCULATOR_H

@class NSMutableSet, NSMutableDictionary, NSDateInterval, NSDate, NSArray, NSString;
@protocol BLSHEngineRequestDatesOperationDelegate, BLSBacklightSceneEnvironment, BLSHOSTimerProviding;

#import <Foundation/Foundation.h>

#import "BLSHEngineRequestDatesOperation.h"

@interface BLSHLocalHostSceneEnvironmentUpdaterTimelinesCalculator : NSObject <BLSHEngineRequestDatesOperationDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_lock_timelines;
    NSMutableDictionary *_lock_incompleteTimelineEntriesForDateInterval;
    BLSHEngineRequestDatesOperation *_lock_requestDatesOperation;
    BOOL _lock_requestDatesOperationComplete;
    BOOL _lock_localHostEnvTimelinesComplete;
    NSDateInterval *_dateInterval;
    NSDate *_previousPresentationDate;
    id<BLSBacklightSceneEnvironment> *_localHostEnvironment;
    NSArray *_subHostedHostEnvironments;
    id<BLSHOSTimerProviding> *_osTimerProvider;
    BOOL _shouldReset;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)calculateWithCompletion:(id)arg0 ;
-(void)callCompletionIfDone;
-(void)lock_completeAllTimelineEntries;
-(void)requestDatesOperation:(id)arg0 didTimeoutPendingEnvironments:(id)arg1 ;
-(void)requestDatesOperation:(id)arg0 environment:(id)arg1 didProvideSpecifiers:(id)arg2 forPresentationInterval:(id)arg3 isComplete:(BOOL)arg4 ;


@end


#endif