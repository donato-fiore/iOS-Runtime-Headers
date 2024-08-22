// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMANAGERHH2SHAREDUSERLASTSYNCMANAGER_H
#define HMDHOMEMANAGERHH2SHAREDUSERLASTSYNCMANAGER_H

@class HMFObject, NSMutableArray, NSMutableDictionary, NSDate, HMFTimer, NSString;
@protocol HMFTimerDelegate, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject <HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _valid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSMutableArray *_userLastSyncs;
    NSMutableDictionary *_homeToUserMap;
    NSDate *_creationDate;
    HMFTimer *_delayTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, getter=isValid) BOOL valid;


+(id)shortDescription;
-(BOOL)_shouldExpire;
-(BOOL)_shouldPushNow;
-(CGFloat)_expireInterval;
-(CGFloat)_interval;
-(CGFloat)_nextInterval;
-(CGFloat)_pushInterval;
-(id)initWithHomeManager:(id)arg0 archivePaths:(id)arg1 ;
-(id)privateDescription;
-(id)shortDescription;
-(void)_pushAllUserSyncData;
-(void)_removeAllUserLastSyncData;
-(void)_scheduleNextPush;
-(void)configure;
-(void)removeUserLastSyncData:(id)arg0 ;
-(void)scheduleNextPush;
-(void)timerDidFire:(id)arg0 ;


@end


#endif