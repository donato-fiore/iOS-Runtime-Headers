// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKWORKOUTOBSERVER_H
#define _HKWORKOUTOBSERVER_H

@class NSLock, NSMutableArray, NSString, NSUUID;
@protocol _HKXPCExportable, _HKWorkoutObserverDelegate;

#import <Foundation/Foundation.h>

#import "_HKCurrentWorkoutSnapshot.h"
#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface _HKWorkoutObserver : NSObject <_HKXPCExportable>

 {
    NSLock *_lock;
    _HKCurrentWorkoutSnapshot *_latestSnapshot;
    BOOL _receivedInitialSnapshot;
    id<_HKWorkoutObserverDelegate> *_delegate;
    NSMutableArray *_pendingHandlers;
    int _notifyToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_HKWorkoutObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_lock_startTaskServerIfNeeded;
-(void)_startTaskServerIfNeeded;
-(void)clientRemote_didUpdateWorkoutSnapshot:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)currentWorkoutSnapshotWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)waitForAutomaticWorkoutRecoveryWithCompletion:(id)arg0 ;


@end


#endif