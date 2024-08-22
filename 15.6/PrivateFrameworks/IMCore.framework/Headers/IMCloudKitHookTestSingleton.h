// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCLOUDKITHOOKTESTSINGLETON_H
#define IMCLOUDKITHOOKTESTSINGLETON_H

@class IMSingletonOverride, NSArray, NSDate, NSDictionary;


#import "IMCloudKitMockSyncState.h"

@interface IMCloudKitHookTestSingleton : IMSingletonOverride

@property (retain, nonatomic) NSArray *IMCloudKitSyncErrors;
@property (nonatomic) BOOL eligibleForTruthZone;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger isChangingEnabledState; // ivar: _isChangingEnabledState
@property (nonatomic) BOOL isDisablingDevices; // ivar: _isDisablingDevices
@property (nonatomic) BOOL isStartingSync; // ivar: _isStartingSync
@property (retain, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) BOOL rampedIntoTruthZone; // ivar: _rampedIntoTruthZone
@property (nonatomic) NSUInteger syncControllerSyncState; // ivar: _syncControllerSyncState
@property (retain, nonatomic) NSDictionary *syncStats; // ivar: _syncStats
@property (nonatomic) NSInteger syncType; // ivar: _syncType
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (retain, nonatomic) IMCloudKitMockSyncState *testState; // ivar: _testState


+(id)logHandle;
-(BOOL)isInExitState;
-(id)init;
-(id)logHandle;
-(id)syncStateDictionary;
-(void)fetchSyncStateStatistics;
-(void)initiatePeriodicSync;
-(void)sendSyncChangedEvent;
-(void)setControllerSyncState:(NSUInteger)arg0 ;
-(void)setControllerSyncType:(NSInteger)arg0 ;
-(void)setIsInExitState:(BOOL)arg0 ;


@end


#endif