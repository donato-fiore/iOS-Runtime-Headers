// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPERSISTENTHISTORYCHANGEDISTRIBUTOR_H
#define PLPERSISTENTHISTORYCHANGEDISTRIBUTOR_H

@class NSPersistentStoreCoordinator, NSPersistentHistoryToken, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLCoreDataChangeMerger.h"
#import "PLChangeHandlingNotificationObserver.h"

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    os_unfair_lock_s _observerCountLock;
    NSUInteger _observerCount;
    NSString *_observerCountLastTokenDescription;
}




-(id)fetchTransactionsSinceLastToken;
-(id)initWithPersistentStoreCoordinator:(id)arg0 bundle:(id)arg1 changeMerger:(id)arg2 ;
-(id)localEventFromTransactions:(id)arg0 ;
-(id)makeManagedObjectContext;
-(void)_advanceTokenToCurrent;
-(void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)arg0 xpcTransaction:(id)arg1 ;
-(void)_inq_setLastToken:(id)arg0 ;
-(void)_inq_startObservingRemoteNotifications;
-(void)beginObservingChanges;
-(void)dealloc;
-(void)distributeNewTransactionsSinceLastToken;
-(void)distributeTransactions:(id)arg0 withXPCTransaction:(id)arg1 ;
-(void)endObservingChanges;
-(void)forceUserInterfaceReload;
-(void)handleRemoteNotificationOfType:(NSInteger)arg0 withTransaction:(id)arg1 ;
-(void)invalidate;
-(void)startObservingRemoteNotifications;
-(void)stopObservingRemoteNotifications;


@end


#endif