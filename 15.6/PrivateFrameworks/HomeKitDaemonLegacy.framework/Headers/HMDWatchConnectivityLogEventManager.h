// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDWATCHCONNECTIVITYLOGEVENTMANAGER_H
#define HMDWATCHCONNECTIVITYLOGEVENTMANAGER_H

@class HMFObject, NSString, HMFUnfairLock, HMFTimer;
@protocol HMFTimerDelegate;



@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompleteReport; // ivar: _hasCompleteReport
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFUnfairLock *lock; // ivar: _lock
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger watchAddedNotificationCountForCurrentIncompleteReport; // ivar: _watchAddedNotificationCountForCurrentIncompleteReport
@property (nonatomic) NSUInteger watchAddedNotificationCountForLastCompleteReport; // ivar: _watchAddedNotificationCountForLastCompleteReport
@property (retain, nonatomic) HMFTimer *watchConnectivityLogEventManagerTimer; // ivar: _watchConnectivityLogEventManagerTimer
@property (nonatomic) NSUInteger watchRemovedNotificationCountForCurrentIncompleteReport; // ivar: _watchRemovedNotificationCountForCurrentIncompleteReport
@property (nonatomic) NSUInteger watchRemovedNotificationCountForLastCompleteReport; // ivar: _watchRemovedNotificationCountForLastCompleteReport


+(id)sharedInstance;
-(id)init;
-(struct HMDWatchConnectivityLogEventManagerSnapshot )currentWatchConnectivitySnapshot;
-(void)completeCurrentReport;
-(void)incrementWatchAddedNotificationCount;
-(void)incrementWatchRemovedNotificationCount;
-(void)timerDidFire:(id)arg0 ;


@end


#endif