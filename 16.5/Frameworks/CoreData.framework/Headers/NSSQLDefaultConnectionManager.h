// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLDEFAULTCONNECTIONMANAGER_H
#define NSSQLDEFAULTCONNECTIONMANAGER_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;


#import "NSSQLConnectionManager.h"

@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager {
    NSMutableArray *_availableConnections;
    NSArray *_allConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    os_unfair_lock_s _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}




-(BOOL)handleStoreRequest:(id)arg0 ;
-(id)initWithSQLCore:(id)arg0 priority:(NSUInteger)arg1 seedConnection:(id)arg2 ;
-(void)dealloc;
-(void)disconnectAllConnections;
-(void)enumerateAvailableConnectionsWithBlock:(id)arg0 ;
-(void)scheduleBarrierBlock:(id)arg0 ;
-(void)scheduleConnectionsBarrier:(id)arg0 ;
-(void)setExclusiveLockingMode:(BOOL)arg0 ;


@end


#endif