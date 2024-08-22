// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCLOUDKITSYNCSTATE_H
#define IMCLOUDKITSYNCSTATE_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface IMCloudKitSyncState : NSObject

@property (readonly, nonatomic) BOOL accountIsEnabled; // ivar: _accountIsEnabled
@property (readonly, nonatomic) NSInteger accountStatus; // ivar: _accountStatus
@property (readonly, nonatomic) BOOL canChangeEnabledSetting;
@property (readonly, nonatomic) BOOL canEnableSyncing;
@property (readonly, nonatomic) BOOL canStartSyncing;
@property (readonly, nonatomic) NSInteger changingEnabledState; // ivar: _changingEnabledState
@property (readonly, nonatomic) NSArray *errors; // ivar: _errors
@property (readonly, copy, nonatomic) NSDate *exitDate; // ivar: _exitDate
@property (readonly, nonatomic) BOOL hasExited; // ivar: _hasExited
@property (readonly, nonatomic) BOOL isDisablingDevices; // ivar: _isDisablingDevices
@property (readonly, nonatomic) BOOL isSyncEnabledForDisplayOnly;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isSyncingAvailable;
@property (readonly, nonatomic) BOOL isSyncingEnabled;
@property (readonly, nonatomic) BOOL isSyncingPaused;
@property (readonly, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (readonly, nonatomic) NSInteger syncControllerRecordType; // ivar: _syncControllerRecordType
@property (readonly, nonatomic) NSUInteger syncControllerSyncState; // ivar: _syncControllerSyncState
@property (readonly, nonatomic) NSInteger syncControllerSyncType; // ivar: _syncControllerSyncType
@property (readonly, nonatomic) NSInteger syncState; // ivar: _syncState
@property (readonly, nonatomic) BOOL syncingFailed;


+(id)logHandle;
-(BOOL)_isChangingEnabledState;
-(BOOL)_shouldHideProgressInFirstSevenDays;
-(BOOL)shouldFetchSyncStatistics;
-(BOOL)shouldRescheduleSyncSyncProgress;
-(id)createSyncProgressWithSyncStatistics:(id)arg0 ;
-(id)description;
-(id)initWithAccountEnabled:(BOOL)arg0 stateDictionary:(id)arg1 ;
-(id)logHandle;
-(id)syncErrorWithDomain:(id)arg0 code:(NSInteger)arg1 ;


@end


#endif