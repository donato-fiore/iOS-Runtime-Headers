// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATESESSION_H
#define HMDACCESSORYFIRMWAREUPDATESESSION_H

@class HMFObject, HMFSoftwareVersion, HMFTimer, UARPAssetID, NSString, UARPAccessory;
@protocol HMDDataStreamSocketDelegate, HMFTimerDelegate, UARPControllerDelegateProtocol, HMFLogging, HMDDataStreamSocket, HMDAccessoryFirmwareUpdateSessionWingman, OS_dispatch_queue;


#import "HMDAccessoryFirmwareUpdateManager.h"
#import "HMDHAPAccessory.h"
#import "HMDAccessoryFirmwareUpdateConcurrencyLogEventManager.h"
#import "HMDAccessoryFirmwareUpdateScheduler.h"

@interface HMDAccessoryFirmwareUpdateSession : HMFObject <HMDDataStreamSocketDelegate, HMFTimerDelegate, UARPControllerDelegateProtocol, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager; // ivar: _accessoryFirmwareUpdateManager
@property (readonly, nonatomic) HMFSoftwareVersion *accessoryVersion;
@property (readonly, nonatomic) CGFloat allowedApplyDuration;
@property (retain, nonatomic) HMFTimer *allowedApplyDurationTimer; // ivar: _allowedApplyDurationTimer
@property (nonatomic) NSUInteger applyHDSRetryCount; // ivar: _applyHDSRetryCount
@property (retain) UARPAssetID *assetID; // ivar: _assetID
@property BOOL assetOfferedForCurrentDataStream; // ivar: _assetOfferedForCurrentDataStream
@property (nonatomic) NSUInteger currentAutomaticApplyRetriesCount; // ivar: _currentAutomaticApplyRetriesCount
@property (nonatomic) NSUInteger currentCommunicationErrorCount; // ivar: _currentCommunicationErrorCount
@property (nonatomic) NSUInteger currentRegisterFailureCount; // ivar: _currentRegisterFailureCount
@property (readonly, getter=isCurrentUpdateLatest) BOOL currentUpdateLatest;
@property (readonly, getter=isCurrentlyStaging) BOOL currentlyStaging;
@property (nonatomic) BOOL dataStreamOpenInProgress; // ivar: _dataStreamOpenInProgress
@property (retain, nonatomic) NSObject<HMDDataStreamSocket> *dataStreamSocket; // ivar: _dataStreamSocket
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *documentationPath; // ivar: _documentationPath
@property (readonly, nonatomic) CGFloat expectedApplyDuration;
@property (retain, nonatomic) HMFTimer *expectedApplyDurationTimer; // ivar: _expectedApplyDurationTimer
@property (readonly, getter=isFirmwareVersionUpToDate) BOOL firmwareVersionUpToDate;
@property (readonly, weak, nonatomic) HMDHAPAccessory *hapAccessory; // ivar: _hapAccessory
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger internalState; // ivar: _internalState
@property (nonatomic) BOOL isVerifyingUpdate; // ivar: _isVerifyingUpdate
@property (retain, nonatomic) HMFSoftwareVersion *lastStagedVersion; // ivar: _lastStagedVersion
@property (readonly, weak) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *logEventManager; // ivar: _logEventManager
@property (retain, nonatomic) HMFTimer *queryFirmwareUpdateResultDurationTimer; // ivar: _queryFirmwareUpdateResultDurationTimer
@property (readonly, getter=isReadyForStaging) BOOL readyForStaging;
@property (readonly, getter=isReadyToApplyUpdate) BOOL readyToApplyUpdate;
@property (retain, nonatomic) HMFTimer *registerFailureRetryTimer; // ivar: _registerFailureRetryTimer
@property (copy) id *registerFailureRetryTimerFactory; // ivar: _registerFailureRetryTimerFactory
@property (nonatomic) BOOL remoteApplyInProgress; // ivar: _remoteApplyInProgress
@property BOOL sessionEnded; // ivar: _sessionEnded
@property (readonly, nonatomic) NSUInteger sessionState;
@property (retain, nonatomic) HMFTimer *socketIdleTimer; // ivar: _socketIdleTimer
@property (readonly) Class superclass;
@property (readonly) UARPAccessory *uarpAccessory; // ivar: _uarpAccessory
@property (retain, nonatomic) HMDAccessoryFirmwareUpdateScheduler *updateScheduler; // ivar: _updateScheduler
@property (readonly, nonatomic, getter=isUserInitiatedInstall) BOOL userInitiatedInstall; // ivar: _userInitiatedInstall
@property (readonly, nonatomic, getter=isUserInitiatedStaging) BOOL userInitiatedStaging; // ivar: _userInitiatedStaging
@property (readonly) NSObject<HMDAccessoryFirmwareUpdateSessionWingman> *wingman; // ivar: _wingman
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)__calculateDigestDataFromFile:(id)arg0 maxDataSize:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)logCategory;
-(BOOL)documentationAvailable;
-(BOOL)isCurrentlyApplying;
-(BOOL)isStagedFirmwareVersionUpToDate;
-(BOOL)sendMessageToAccessory:(id)arg0 uarpMsg:(id)arg1 error:(*id)arg2 ;
-(BOOL)startManualUpdate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)nextStateToSchedule;
-(id)init;
-(id)initWithHAPAccessory:(id)arg0 uarpAccessory:(id)arg1 accessoryFirmwareUpdateManager:(id)arg2 logEventManager:(id)arg3 ;
-(id)initWithHAPAccessory:(id)arg0 uarpAccessory:(id)arg1 accessoryFirmwareUpdateManager:(id)arg2 logEventManager:(id)arg3 wingman:(id)arg4 ;
-(id)logIdentifier;
-(id)newDocumentationMetadata;
-(id)newSoftwareUpdateWithState:(NSInteger)arg0 ;
-(id)privateDescription;
-(void)_applyFailed;
-(void)_applyFirmware;
-(void)_automaticUpdateEnabledChanged:(BOOL)arg0 ;
-(void)_cancelApplyTimer;
-(void)_cancelQueryFirmwareUpdateResultTimer;
-(void)_cancelRegisterFailureRetryTimer;
-(void)_cancelSocketIdleTimer;
-(void)_endSession;
-(void)_evaluateHDSRetryForApplyFirmware;
-(void)_handleApplyTimerFired;
-(void)_handleAutomaticUpdateEnabledChanged:(id)arg0 ;
-(void)_handleQueryFirmwareUpdateResultTimeout;
-(void)_handleRegisterFailureRetryTimeout;
-(void)_handleSocketTimeout;
-(void)_logApplyEventWithStatus:(NSInteger)arg0 ;
-(void)_logDebugStates:(char *)arg0 ;
-(void)_register;
-(void)_resetAvailableSoftwareUpdate;
-(void)_schedule;
-(void)_stagingFailed;
-(void)_startSocketIdleTimer;
-(void)_syncStateWithAccessoryOnResume;
-(void)_updateAvailableSoftwareUpdate;
-(void)_updateAvailableSoftwareUpdateDocumentation;
-(void)_updateAvailableSoftwareUpdateState:(NSInteger)arg0 ;
-(void)_updateSoftwareUpdateNotReadyReasons;
-(void)_verifyUpdateComplete;
// -(void)_withOpenSocketDoBlock:(id)arg0 error:(unk)arg1  ;
-(void)applyFirmware;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)configure;
-(void)dealloc;
-(void)firmwareStagingComplete:(id)arg0 assetID:(id)arg1 withStatus:(NSUInteger)arg2 ;
-(void)firmwareStagingProgress:(id)arg0 assetID:(id)arg1 bytesSent:(NSUInteger)arg2 bytesTotal:(NSUInteger)arg3 ;
-(void)firmwareUpdateResult:(id)arg0 vendorSpecificStatus:(unsigned int)arg1 error:(id)arg2 ;
-(void)handleAccessoryFirmwareVersionChangedNotification:(id)arg0 ;
-(void)handleFirmwareUpdateStateChangedNotification:(id)arg0 ;
-(void)handleNotReadyReasonsChanged:(id)arg0 ;
-(void)handleStagedFirmwareVersionChangedNotification:(id)arg0 ;
-(void)logDebugStates;
-(void)pause;
-(void)registerAccessory;
-(void)rescindStagedAsset:(id)arg0 ;
-(void)resumeWithState:(NSUInteger)arg0 ;
-(void)socket:(id)arg0 didFailWithError:(id)arg1 ;
-(void)socketDidClose:(id)arg0 ;
-(void)socketDidReceiveData:(id)arg0 ;
-(void)stageFirmware;
-(void)stagedFirmwareRescindComplete:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(void)stagingComplete;
-(void)startApplyDurationTimers;
-(void)timerDidFire:(id)arg0 ;
-(void)unregisterAccessory;
-(void)updateAccessoryFirmwareVersion;
-(void)updateAccessoryStagedFirmwareVersion;
-(void)updateAvailableSoftwareUpdate;
-(void)updateAvailableSoftwareUpdateState:(NSInteger)arg0 ;


@end


#endif