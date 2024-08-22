// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTENTHISTORYCHANGEDISTRIBUTOR_H
#define PLPERSISTENTHISTORYCHANGEDISTRIBUTOR_H

@class NSPersistentStoreCoordinator, NSPersistentHistoryToken;
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
    NSUInteger _observerCount;
}




-(id)fetchTransactionsSinceLastToken;
-(id)initWithPersistentStoreCoordinator:(id)arg0 changeMerger:(id)arg1 ;
-(id)localEventFromTransactions:(id)arg0 ;
-(id)makeManagedObjectContext;
-(void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)arg0 xpcTransaction:(id)arg1 ;
-(void)_inq_startObservingRemoteNotifications;
-(void)dealloc;
-(void)distributeNewTransactionsSinceLastToken;
-(void)distributeTransactions:(id)arg0 withXPCTransaction:(id)arg1 ;
-(void)forceUserInterfaceReload;
-(void)handleRemoteNotificationOfType:(NSInteger)arg0 withTransaction:(id)arg1 ;
-(void)invalidate;
-(void)pauseChangeDistribution;
-(void)resumeChangeDistribution;
-(void)startObservingRemoteNotifications;
-(void)stopObservingRemoteNotifications;


@end


#endif