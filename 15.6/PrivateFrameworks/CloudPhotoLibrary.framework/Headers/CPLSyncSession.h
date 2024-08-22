// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSYNCSESSION_H
#define CPLSYNCSESSION_H

@class NSString, NSDate;
@protocol CPLSyncSessionPredictorObserver, OS_xpc_object, CPLSyncSessionRescheduler;

#import <Foundation/Foundation.h>

#import "CPLSyncSessionPredictor.h"
#import "CPLEngineScheduler.h"

@interface CPLSyncSession : NSObject <CPLSyncSessionPredictorObserver>

 {
    os_unfair_lock_s _lock;
    BOOL _watchingPredictor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDetached) BOOL detached;
@property (retain, nonatomic) NSObject<OS_xpc_object> *detachedActivity; // ivar: _detachedActivity
@property (readonly, nonatomic) NSDate *expectedDate; // ivar: _expectedDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mightNeedForegroundToStart;
@property (readonly, nonatomic) CPLSyncSessionPredictor *predictor; // ivar: _predictor
@property (readonly, nonatomic) NSUInteger requiredStateAtEndOfSyncSession; // ivar: _requiredStateAtEndOfSyncSession
@property (retain, nonatomic) NSObject<CPLSyncSessionRescheduler> *rescheduler; // ivar: _rescheduler
@property (readonly, weak, nonatomic) CPLEngineScheduler *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly, nonatomic) BOOL shouldRescheduleASyncSession; // ivar: _shouldRescheduleASyncSession
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *whenItWillStartDescription;


+(id)detachedSyncSessionWithScheduler:(id)arg0 ;
-(BOOL)isAfterDate:(id)arg0 ;
-(BOOL)isBeforeDate:(id)arg0 ;
-(BOOL)isInLessThanTimeInterval:(CGFloat)arg0 ;
-(BOOL)isInMoreThanTimeInverval:(CGFloat)arg0 ;
-(id)initWithSequenceNumber:(NSUInteger)arg0 expectedDate:(id)arg1 scheduler:(id)arg2 ;
-(id)redactedDescription;
-(void)_unwatchPredictor;
-(void)_updatePrediction:(id)arg0 ;
-(void)_watchOrUnwatchPredictorIfNecessary;
-(void)_watchPredictor;
-(void)deferWithBlock:(id)arg0 ;
-(void)dropExpectedDate;
-(void)engineIsClosing;
-(void)predictor:(id)arg0 changedPrediction:(id)arg1 ;
-(void)requestSyncStateAtEndOfSyncSession:(NSUInteger)arg0 reschedule:(BOOL)arg1 ;
-(void)sessionIsDone;
-(void)sessionWontHappen;


@end


#endif