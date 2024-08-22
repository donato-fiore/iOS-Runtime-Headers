// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCSTORECONNECTIONMANAGER_H
#define NSXPCSTORECONNECTIONMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSXPCStoreConnectionManager : NSObject {
    NSMutableArray *_availableConnections;
    NSMutableArray *_allConnections;
    NSUInteger _maxConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    os_unfair_lock_s _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}




-(id)initForStore:(id)arg0 ;
-(void)dealloc;


@end


#endif