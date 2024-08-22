// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERARECORDINGREACHABILITYEVENTMANAGER_H
#define HMCAMERARECORDINGREACHABILITYEVENTMANAGER_H

@class NSString, HMFUnfairLock, NSUUID, NSNotificationCenter, NSHashTable;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMCameraRecordingReachabilityEventManager : NSObject <HMFMessageReceiver, HMFLogging>



@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)logCategory;
-(id)initWithContext:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)initWithContext:(id)arg0 uniqueIdentifier:(id)arg1 notificationCenter:(id)arg2 ;
-(id)logIdentifier;
-(void)addObserver:(id)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)deleteAllEventsWithCompletionHandler:(id)arg0 ;
-(void)fetchAllEventsWithCompletion:(id)arg0 ;
-(void)fetchCountOfAllEventsWithCompletion:(id)arg0 ;
-(void)fetchCountOfEventsWithDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)fetchEventsAfterDate:(id)arg0 withLimit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchEventsBeforeDate:(id)arg0 withLimit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchEventsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchEventsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 shouldOrderAscending:(BOOL)arg2 completion:(id)arg3 ;
-(void)handleDaemonReconnectedNotification:(id)arg0 ;
-(void)handleDidChangeEventsMessage:(id)arg0 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)subscribe;
-(void)unsubscribe;


@end


#endif