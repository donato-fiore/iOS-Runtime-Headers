// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETUPDATEPOLICY_H
#define MAAUTOASSETUPDATEPOLICY_H

@class NSDictionary, NSUUID, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetUpdatePolicy : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *additionalUpdatePolicyControl; // ivar: _additionalUpdatePolicyControl
@property (nonatomic) BOOL allowAutoCheckForNewerOverExpensive; // ivar: _allowAutoCheckForNewerOverExpensive
@property (nonatomic) BOOL allowAutoCheckForNewerWhenBatteryLow; // ivar: _allowAutoCheckForNewerWhenBatteryLow
@property (nonatomic) BOOL allowAutoCheckForNewerWhenCPUHigh; // ivar: _allowAutoCheckForNewerWhenCPUHigh
@property (nonatomic) BOOL allowAutoDownloadWhenBatteryLow; // ivar: _allowAutoDownloadWhenBatteryLow
@property (nonatomic) BOOL allowAutoDownloadWhenCPUHigh; // ivar: _allowAutoDownloadWhenCPUHigh
@property (nonatomic) BOOL allowInterestAcrossTermination; // ivar: _allowInterestAcrossTermination
@property (nonatomic) BOOL allowLockAcrossOTAUpdate; // ivar: _allowLockAcrossOTAUpdate
@property (nonatomic) BOOL allowLockAcrossReboot; // ivar: _allowLockAcrossReboot
@property (nonatomic) BOOL allowLockAcrossTermination; // ivar: _allowLockAcrossTermination
@property (nonatomic) BOOL allowLockOfRevokedContent; // ivar: _allowLockOfRevokedContent
@property (nonatomic) BOOL allowLockWhenFilesystemSpaceCritical; // ivar: _allowLockWhenFilesystemSpaceCritical
@property (retain, nonatomic) NSUUID *assetAudienceUUID; // ivar: _assetAudienceUUID
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (nonatomic) BOOL blockAutoCheckForNewerOverCellular; // ivar: _blockAutoCheckForNewerOverCellular
@property (nonatomic) BOOL blockAutoDownloadOverCellular; // ivar: _blockAutoDownloadOverCellular
@property (nonatomic) BOOL blockIfBeforeFirstUnlock; // ivar: _blockIfBeforeFirstUnlock
@property (nonatomic) BOOL blockUserInitiatedDownloadOverCellular; // ivar: _blockUserInitiatedDownloadOverCellular
@property (nonatomic) BOOL blockUserInitiatedDownloadOverExpensive; // ivar: _blockUserInitiatedDownloadOverExpensive
@property (nonatomic) BOOL blockUserInitiatedDownloadWhenBatteryLow; // ivar: _blockUserInitiatedDownloadWhenBatteryLow
@property (nonatomic) BOOL blockUserInitiatedDownloadWhenCPUHigh; // ivar: _blockUserInitiatedDownloadWhenCPUHigh
@property (readonly, nonatomic) NSArray *categoryList; // ivar: _categoryList
@property (nonatomic) BOOL checkForNewerAsUserInitiated; // ivar: _checkForNewerAsUserInitiated
@property (nonatomic) NSInteger checkForNewerIntervalSecs; // ivar: _checkForNewerIntervalSecs
@property (nonatomic) NSInteger checkForNewerTimeoutSecs; // ivar: _checkForNewerTimeoutSecs
@property (nonatomic) BOOL checkForNewerWithoutRampEnabled; // ivar: _checkForNewerWithoutRampEnabled
@property (nonatomic) NSInteger defaultPreventGarbageCollectionSecs; // ivar: _defaultPreventGarbageCollectionSecs
@property (nonatomic) NSInteger defaultUnlockAfterUsageSecs; // ivar: _defaultUnlockAfterUsageSecs
@property (nonatomic) BOOL downloadWithoutPreferenceForWiFi; // ivar: _downloadWithoutPreferenceForWiFi
@property (retain, nonatomic) id *limitByNetworkType; // ivar: _limitByNetworkType
@property (retain, nonatomic) id *limitCellularByFeeAgreement; // ivar: _limitCellularByFeeAgreement
@property (retain, nonatomic) id *limitCellularByRestrictedTimePeriods; // ivar: _limitCellularByRestrictedTimePeriods
@property (retain, nonatomic) id *limitWiFiByRestrictedTimePeriods; // ivar: _limitWiFiByRestrictedTimePeriods
@property (nonatomic) NSInteger maximumPreventGarbageCollectionSecs; // ivar: _maximumPreventGarbageCollectionSecs
@property (nonatomic) NSInteger maximumUnlockAfterUsageSecs; // ivar: _maximumUnlockAfterUsageSecs
@property (nonatomic) NSInteger newerFoundAutoDownloadJitterSecs; // ivar: _newerFoundAutoDownloadJitterSecs
@property (nonatomic) BOOL newerFoundAutoDownloadPostponed; // ivar: _newerFoundAutoDownloadPostponed
@property (nonatomic) NSInteger newerFoundAutoDownloadTimeoutSecs; // ivar: _newerFoundAutoDownloadTimeoutSecs
@property (nonatomic) NSInteger newerFoundUserInitiatedDownloadTimeoutSecs; // ivar: _newerFoundUserInitiatedDownloadTimeoutSecs
@property (nonatomic) BOOL revokeIgnoredForLockedContent; // ivar: _revokeIgnoredForLockedContent
@property (nonatomic) BOOL revokeIgnoredForUnlockedPurge; // ivar: _revokeIgnoredForUnlockedPurge
@property (nonatomic) BOOL revokeTriggersLockedPurge; // ivar: _revokeTriggersLockedPurge
@property (readonly, nonatomic) NSString *updatePolicyName; // ivar: _updatePolicyName


+(BOOL)supportsSecureCoding;
+(id)activityIntervalString:(NSInteger)arg0 ;
-(id)description;
-(id)initUpdatePolicy:(id)arg0 forAssetType:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif