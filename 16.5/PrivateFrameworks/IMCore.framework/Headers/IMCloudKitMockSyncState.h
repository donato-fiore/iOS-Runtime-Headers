// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCLOUDKITMOCKSYNCSTATE_H
#define IMCLOUDKITMOCKSYNCSTATE_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface IMCloudKitMockSyncState : NSObject

@property BOOL IMCloudKitIsEligibleForTruthZone; // ivar: _IMCloudKitIsEligibleForTruthZone
@property BOOL IMCloudKitIsInExitState; // ivar: _IMCloudKitIsInExitState
@property BOOL IMCloudKitIsRemovedFromBackup; // ivar: _IMCloudKitIsRemovedFromBackup
@property BOOL IMCloudKitIsSyncing; // ivar: _IMCloudKitIsSyncing
@property BOOL IMCloudKitStartingDisableDevices; // ivar: _IMCloudKitStartingDisableDevices
@property NSInteger IMCloudKitStartingEnabledSettingChange; // ivar: _IMCloudKitStartingEnabledSettingChange
@property BOOL IMCloudKitStartingInitialSync; // ivar: _IMCloudKitStartingInitialSync
@property BOOL IMCloudKitStartingPeriodicSync; // ivar: _IMCloudKitStartingPeriodicSync
@property NSInteger IMCloudKitSyncControllerSyncRecordType; // ivar: _IMCloudKitSyncControllerSyncRecordType
@property NSUInteger IMCloudKitSyncControllerSyncState; // ivar: _IMCloudKitSyncControllerSyncState
@property NSInteger IMCloudKitSyncControllerSyncType; // ivar: _IMCloudKitSyncControllerSyncType
@property (retain) NSDate *IMCloudKitSyncDate; // ivar: _IMCloudKitSyncDate
@property (retain) NSArray *IMCloudKitSyncErrors; // ivar: _IMCloudKitSyncErrors
@property BOOL IMCloudKitSyncPaused; // ivar: _IMCloudKitSyncPaused
@property BOOL IMCloudKitSyncingEnabled; // ivar: _IMCloudKitSyncingEnabled


-(id)convertToDictionary;


@end


#endif