// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSTATE_H
#define SUSTATE_H

@class SUCorePersistedState, SUCoreDescriptor, NSDate, NSString, NSArray, NSDictionary;
@protocol NSKeyedUnarchiverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUDescriptor.h"
#import "SUInstallPolicy.h"
#import "_SUAutoInstallOperationModel.h"
#import "SUDownload.h"
#import "SUScanOptions.h"
#import "SUManagedDeviceUpdateDelay.h"

@interface SUState : NSObject <NSKeyedUnarchiverDelegate>

 {
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}


@property (copy, nonatomic) SUCoreDescriptor *alternateLastScannedCoreDescriptor; // ivar: _alternateLastScannedCoreDescriptor
@property (copy, nonatomic) SUDescriptor *alternateLastScannedDescriptor; // ivar: _alternateLastScannedDescriptor
@property (retain, nonatomic) NSDate *appliedTime; // ivar: _appliedTime
@property (nonatomic) BOOL autodownloadNeedsOneTimeRetry; // ivar: _autodownloadNeedsOneTimeRetry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *failedPatchDescriptors; // ivar: _failedPatchDescriptors
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUInstallPolicy *installPolicy; // ivar: _installPolicy
@property (retain, nonatomic) NSString *lastAssetAudience; // ivar: _lastAssetAudience
@property (retain, nonatomic) _SUAutoInstallOperationModel *lastAutoInstallOperationModel; // ivar: _lastAutoInstallOperationModel
@property (retain, nonatomic) NSString *lastDeletedSUAssetID; // ivar: _lastDeletedSUAssetID
@property (copy, nonatomic) SUDownload *lastDownload; // ivar: _lastDownload
@property (retain, nonatomic) NSString *lastProductBuild; // ivar: _lastProductBuild
@property (retain, nonatomic) NSString *lastProductType; // ivar: _lastProductType
@property (retain, nonatomic) NSString *lastProductVersion; // ivar: _lastProductVersion
@property (retain, nonatomic) NSString *lastReleaseType; // ivar: _lastReleaseType
@property (retain, nonatomic) NSDate *lastScanDate; // ivar: _lastScanDate
@property (retain, nonatomic) SUScanOptions *lastScannedDescriptorScanOptions; // ivar: _lastScannedDescriptorScanOptions
@property (retain, nonatomic) NSDictionary *mandatoryUpdateDict; // ivar: _mandatoryUpdateDict
@property (retain, nonatomic) SUManagedDeviceUpdateDelay *mdmDelay; // ivar: _mdmDelay
@property (copy, nonatomic) SUCoreDescriptor *preferredLastScannedCoreDescriptor; // ivar: _preferredLastScannedCoreDescriptor
@property (copy, nonatomic) SUDescriptor *preferredLastScannedDescriptor; // ivar: _preferredLastScannedDescriptor
@property (retain, nonatomic) NSDate *scheduledAutodownloadPolicyChangeTime; // ivar: _scheduledAutodownloadPolicyChangeTime
@property (retain, nonatomic) NSDate *scheduledAutodownloadWifiPeriodEndTime; // ivar: _scheduledAutodownloadWifiPeriodEndTime
@property (retain, nonatomic) NSDate *scheduledManualDownloadWifiPeriodEndTime; // ivar: _scheduledManualDownloadWifiPeriodEndTime
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL stashbagPersisted; // ivar: _stashbagPersisted
@property (readonly) Class superclass;
@property (nonatomic) BOOL underExclusiveControl; // ivar: _underExclusiveControl
@property (retain, nonatomic) NSDictionary *unlockCallbacks; // ivar: _unlockCallbacks
@property (retain, nonatomic) NSDictionary *updateDiscoveryDates; // ivar: _updateDiscoveryDates


+(id)currentState;
+(id)statePath;
-(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;
-(id)_stateAsDictionary;
-(id)init;
-(void)_queue_addFailedPatchDescriptor:(id)arg0 ;
-(void)addFailedPatchDescriptor:(id)arg0 ;
-(void)load;
-(void)loadPersistedFailedPatchDescriptors;
-(void)persistFailedPatchDescriptors;
-(void)resetAllHistory;
-(void)resetDownloadAndScanHistory;
-(void)save;


@end


#endif