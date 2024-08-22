// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKUNIVERSALPLAYBACKPOSITIONSTORE_H
#define SBKUNIVERSALPLAYBACKPOSITIONSTORE_H

@class NSMutableArray, NSString, NSNumber, NSDate, NSTimer;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

#import <Foundation/Foundation.h>

#import "SBKAsynchronousTask.h"
#import "SBKRequestHandler.h"

@interface SBKUniversalPlaybackPositionStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    BOOL _hasLocalChangesToSync;
    NSMutableArray *_pendingTaskBlocks;
    NSString *_domain;
    NSNumber *_accountIdentifier;
    NSUInteger _automaticSynchronizeOptions;
    CGFloat _initialAutosyncInterval;
    CGFloat _pollingLimitFromBag;
    CGFloat _autorefreshInterval;
    BOOL _refreshTimerActive;
    id *_accountsObserver;
    id *_prefsObserver;
}


@property (nonatomic) NSUInteger automaticSynchronizeOptions;
@property (retain, nonatomic) SBKAsynchronousTask *bagLookupTask; // ivar: _bagLookupTask
@property (retain, nonatomic) SBKAsynchronousTask *currentTask; // ivar: _currentTask
@property (retain, nonatomic) SBKRequestHandler *currentTaskRequestHandler; // ivar: _currentTaskRequestHandler
@property (readonly, weak, nonatomic) NSObject<SBKUniversalPlaybackPositionDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSDate *dateToFireNextTimer; // ivar: _dateToFireNextTimer
@property (nonatomic) BOOL hasLocalChangesToSync;
@property (retain, nonatomic) SBKAsynchronousTask *lookupDomainVersionTask; // ivar: _lookupDomainVersionTask
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(id)keyValueStoreItemIdentifierForItem:(id)arg0 ;
-(BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
-(BOOL)_automaticallySynchronizeOnBecomeActive;
-(BOOL)automaticallySynchronizeLocalChangesOnResignActive;
-(BOOL)automaticallySynchronizeOnBecomeActive;
-(CGFloat)_effectiveAutorefreshRate;
-(id)_accountForSyncing;
-(id)init;
-(id)initWithDomain:(id)arg0 dataSource:(id)arg1 automaticSynchronizeOptions:(NSUInteger)arg2 accountIdentifier:(id)arg3 isActive:(BOOL)arg4 ;
-(id)initWithDomain:(id)arg0 dataSource:(id)arg1 automaticSynchronizeOptions:(NSUInteger)arg2 isActive:(BOOL)arg3 ;
-(id)initWithInitialUpdateDelay:(CGFloat)arg0 ;
-(void)_onQueueLoadBagContextWithCompletionHandler:(id)arg0 ;
-(void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id)arg0 ;
-(void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)_onQueuePushMetadataItem:(id)arg0 completionBlock:(id)arg1 ;
-(void)_onQueueResumeTimer;
-(void)_onQueueRunNextPendingTaskBlock;
// -(void)_onQueueRunTaskWithName:(id)arg0 taskCompletionHandler:(id)arg1 runTaskBlock:(unk)arg2  ;
-(void)_onQueueScheduleTimer;
-(void)_onQueueStartNewTimer;
-(void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(void)_onQueueStopTimer;
-(void)_onQueueSuspendTimer;
-(void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id)arg0 ;
-(void)_onQueueSynchronizeWithAutosynchronizeMask:(NSUInteger)arg0 withCompletionBlock:(id)arg1 ;
-(void)_onQueueUpdateTimerForActiveChanges;
-(void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
-(void)_timerFired:(id)arg0 ;
-(void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg0 ;
-(void)_updateForStoreAccountsChange;
-(void)_updateSettingsFromLoadedBagContext:(id)arg0 ;
-(void)becomeActive;
-(void)checkForAvailabilityWithCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)loadBagContextWithCompletionBlock:(id)arg0 ;
-(void)loadRemoteDomainVersionWithCompletionBlock:(id)arg0 ;
-(void)pullMetadataItemWithItemIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)pushMetadataItem:(id)arg0 completionBlock:(id)arg1 ;
-(void)resignActive;
-(void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg0 ;
-(void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg0 ;
-(void)synchronizeImmediatelyWithCompletionBlock:(id)arg0 ;
-(void)synchronizeImmediatelyWithCompletionHandler:(id)arg0 ;


@end


#endif