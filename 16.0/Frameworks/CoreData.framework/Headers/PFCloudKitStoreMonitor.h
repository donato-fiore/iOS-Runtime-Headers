// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCLOUDKITSTOREMONITOR_H
#define PFCLOUDKITSTOREMONITOR_H

@class NSString;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NSPersistentStoreCoordinator.h"
#import "NSPersistentStore.h"

@interface PFCloudKitStoreMonitor : NSObject {
    NSObject<OS_dispatch_group> *_monitorGroup;
    os_unfair_lock_s _aliveLock;
    BOOL _storeIsAlive;
    BOOL _declaredDead;
    int _retryCount;
    int _timeoutSeconds;
    NSPersistentStoreCoordinator *_monitoredCoordinator;
    NSPersistentStore *_monitoredStore;
    NSString *_storeIdentifier;
}




-(id)initForStore:(id)arg0 ;
-(void)coordinatorWillRemoveStore:(id)arg0 ;
-(void)dealloc;


@end


#endif