// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCOMPANIONWORKOUTCREDITMANAGER_H
#define CHCOMPANIONWORKOUTCREDITMANAGER_H

@class HDProfile, NSNumber, NSCalendar, NSString;
@protocol HDProfileReadyObserver, HDDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHCompanionWorkoutCreditManager : NSObject <HDProfileReadyObserver, HDDataObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_anchor;
    NSCalendar *_calendar;
    BOOL _hasPairedWatches;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_queue_generateAndSaveSamplesForIntervals:(id)arg0 withExerciseMinuteTable:(id)arg1 standHourTable:(id)arg2 standMinuteTable:(id)arg3 moveMinuteTable:(id)arg4 error:(id)arg5 ;
-(id)_queue_samplesForType:(id)arg0 fromStartTime:(id)arg1 toEndTime:(id)arg2 ;
-(id)_queue_userLocalProtectedDomain;
-(id)_queue_workoutAnchor;
-(id)_queue_workoutsSinceAnchor:(*id)arg0 error:(id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_queue_fastForwardAnchor;
-(void)_queue_performWorkoutCreditFixup;
-(void)_queue_processWorkouts;
-(void)_queue_setWorkoutAnchor:(id)arg0 ;
-(void)dealloc;
-(void)performWorkoutCreditFixup;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)stopObservingWorkouts;


@end


#endif