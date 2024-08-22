// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMETRICSDEVICESTATEMANAGER_H
#define HMDMETRICSDEVICESTATEMANAGER_H

@class HMFObject, NSString;
@protocol HMDMetricsDeviceStateProvider, HMDLogEventDailyTaskRunner, HAPSystemKeyCountProvider, HMMLogEventSubmitting;



@interface HMDMetricsDeviceStateManager : HMFObject <HMDMetricsDeviceStateProvider, HMDLogEventDailyTaskRunner>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSUInteger bitMappedDuplicateKeys; // ivar: _bitMappedDuplicateKeys
@property (readonly) NSUInteger bitMappedMissingKeys; // ivar: _bitMappedMissingKeys
@property (readonly) NSUInteger currentDataSyncState; // ivar: _currentDataSyncState
@property (readonly) NSUInteger currentHomeManagerStatus; // ivar: _currentHomeManagerStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HAPSystemKeyCountProvider> *keyCountProvider; // ivar: _keyCountProvider
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


-(NSUInteger)bitMaskForKeyType:(NSUInteger)arg0 ;
-(NSUInteger)duplicateKeysBitMapFromKeyCounts:(id)arg0 ;
-(NSUInteger)missingKeysBitMapFromKeyCounts:(id)arg0 ;
-(id)initWithLogEventSubmitter:(id)arg0 dailyScheduler:(id)arg1 ;
-(id)initWithLogEventSubmitter:(id)arg0 dailyScheduler:(id)arg1 keyCountProvider:(id)arg2 ;
-(void)handleHomeDataLoaded;
-(void)registerForNotifications;
-(void)runDailyTask;
-(void)updateCachedPairingKeyStates;
-(void)updateWithDataSyncState:(NSUInteger)arg0 ;
-(void)updateWithHomeManagerStatus:(NSUInteger)arg0 ;


@end


#endif