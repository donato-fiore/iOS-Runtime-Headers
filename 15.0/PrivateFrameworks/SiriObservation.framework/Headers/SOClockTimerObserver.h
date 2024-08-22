// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOCLOCKTIMEROBSERVER_H
#define SOCLOCKTIMEROBSERVER_H

@class AFInstanceContext, NSHashTable, AFClockTimerSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;
@protocol AFClockItemStorageDelegate, AFInvalidating, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "SOClockTimerManager.h"

@interface SOClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockTimerManager *_timerManager;
    AFClockTimerSnapshot *_timerSnapshot;
    NSObject<OS_dispatch_group> *_timerSnapshotGroup;
    NSInteger _timerSnapshotGroupDepth;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)_timerSnapshot;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_beginGroup;
-(void)_consolidateNotifiedFiringTimers;
-(void)_endGroup;
-(void)_enumerateListenersUsingBlock:(id)arg0 ;
-(void)_fetchTimersForReason:(id)arg0 completion:(id)arg1 ;
-(void)_handleFetchTimersForReason:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_handleFetchTimersForReason:(id)arg0 result:(id)arg1 completion:(id)arg2 ;
-(void)_reset;
-(void)_setUp;
-(void)_tearDown;
-(void)addListener:(id)arg0 ;
-(void)clockItemStorageDidUpdate:(id)arg0 insertedItemIDs:(id)arg1 updatedItemIDs:(id)arg2 deletedItemIDs:(id)arg3 ;
-(void)dealloc;
-(void)firingTimerChanged:(id)arg0 ;
-(void)firingTimerDismissed:(id)arg0 ;
-(void)getFiringTimerIDsWithCompletion:(id)arg0 ;
-(void)getTimerSnapshotWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)removeListener:(id)arg0 ;
-(void)stateReset:(id)arg0 ;
-(void)timerFired:(id)arg0 ;
-(void)timersAdded:(id)arg0 ;
-(void)timersChanged:(id)arg0 ;
-(void)timersRemoved:(id)arg0 ;
-(void)timersUpdated:(id)arg0 ;


@end


#endif