// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BRCOPERATION_H
#define _BRCOPERATION_H

@class NSOperation, NSDate, NSHashTable, NSMutableArray, NSString, NSError, CKOperationGroup, NSUUID;
@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_source, OS_dispatch_group, OS_os_activity;


#import "BRCThrottle.h"
#import "BRCSyncContext.h"

@interface _BRCOperation : NSOperation {
    unsigned char _operationUUID;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_os_transaction> *_executionTransaction;
    NSDate *_finishDate;
    NSDate *_lastTryDate;
    NSDate *_nextTryDate;
    NSInteger _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_subOperations;
    NSObject<OS_os_activity> *_Activity;
    NSMutableArray *_associatedEventMetrics;
    NSString *_personaID;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSError *error; // ivar: _lastError
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (copy, nonatomic) id *finishBlock; // ivar: _finishBlock
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _operationGroup
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *highPriorityWaitGroup; // ivar: _highPriorityWaitGroup
@property (readonly, nonatomic) NSUInteger logSections; // ivar: _logSections
@property (copy, nonatomic) id *mainBlock; // ivar: _mainBlock
@property (nonatomic) BOOL nonDiscretionary; // ivar: _nonDiscretionary
@property (nonatomic) BRCThrottle *operationFailureThrottle; // ivar: _operationFailureThrottle
@property (readonly, nonatomic) NSUUID *operationID;
@property (nonatomic) BRCThrottle *operationThrottle; // ivar: _operationThrottle
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) BRCSyncContext *syncContext; // ivar: _syncContext
@property (readonly, nonatomic) BOOL usesBackgroundSession;


-(BOOL)_finishIfCancelled;
-(BOOL)finishIfCancelled;
-(BOOL)isConcurrent;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)description;
-(id)descriptionWithContext:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 syncContext:(id)arg1 ;
-(id)initWithName:(id)arg0 syncContext:(id)arg1 group:(id)arg2 ;
-(id)stateWithContext:(id)arg0 ;
-(id)subclassableDescriptionWithContext:(id)arg0 ;
-(void)_completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)_executeWithPreviousError:(id)arg0 ;
-(void)_main;
-(void)_scheduleExecutionWithPreviousError:(id)arg0 ;
-(void)_setTelemetryHeaderOnCKOpIfNecessary:(id)arg0 ;
-(void)addDependency:(id)arg0 ;
-(void)addSubOperation:(id)arg0 ;
-(void)addSubOperation:(id)arg0 overrideContext:(id)arg1 allowsCellularAccess:(id)arg2 ;
-(void)associateCKOperationsToEventMetric:(id)arg0 ;
-(void)blockOnHighPriorityOperation:(id)arg0 ;
-(void)cancel;
-(void)cancelAfterDelay:(CGFloat)arg0 ;
-(void)completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)schedule;
-(void)start;


@end


#endif