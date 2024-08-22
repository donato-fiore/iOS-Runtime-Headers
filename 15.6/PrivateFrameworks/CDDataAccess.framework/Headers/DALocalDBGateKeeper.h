// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DALOCALDBGATEKEEPER_H
#define DALOCALDBGATEKEEPER_H

@class NSMutableArray, NSString, NSMutableSet;
@protocol DADataclassLockWatcher;

#import <Foundation/Foundation.h>


@interface DALocalDBGateKeeper : NSObject

@property (nonatomic) BOOL claimedOwnershipOfEvents; // ivar: _claimedOwnershipOfEvents
@property (retain, nonatomic) NSObject<DADataclassLockWatcher> *eventsLockHolder; // ivar: _eventsLockHolder
@property (retain, nonatomic) NSMutableArray *eventsWaiters; // ivar: _eventsWaiters
@property (retain, nonatomic) NSString *unitTestHackRunLoopMode; // ivar: _unitTestHackRunLoopMode
@property (retain, nonatomic) NSMutableSet *waiterIDsExpectingEventsLock; // ivar: _waiterIDsExpectingEventsLock


+(id)sharedGateKeeper;
-(BOOL)_canWakenWaiter:(id)arg0 ;
-(id)init;
-(id)stateString;
-(void)_abortWaiterForWrappers:(id)arg0 ;
-(void)_notifyWaitersForDataclasses:(id)arg0 ;
-(void)_registerWaiter:(id)arg0 forDataclassLocks:(NSInteger)arg1 preempt:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_sendAllClearNotifications;
-(void)claimedOwnershipOfDataclasses:(NSInteger)arg0 ;
-(void)dealloc;
-(void)registerPreemptiveWaiter:(id)arg0 forDataclassLocks:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)registerWaiter:(id)arg0 forDataclassLocks:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)relinquishLocksForWaiter:(id)arg0 dataclasses:(NSInteger)arg1 moreComing:(BOOL)arg2 ;
-(void)unregisterWaiterForDataclassLocks:(id)arg0 ;


@end


#endif