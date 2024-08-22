// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUMANAGERCLIENT_H
#define SUMANAGERCLIENT_H

@class NSXPCConnection, NSMutableDictionary, NSMutableSet, NSString;
@protocol SUManagerClientInterface, SUInstallationConstraintObserverDelegate, SUPreferencesObserver, SUManagerClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUDescriptor.h"

@interface SUManagerClient : NSObject <SUManagerClientInterface, SUInstallationConstraintObserverDelegate, SUPreferencesObserver>

 {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
    BOOL _installing;
    NSMutableDictionary *_installOperationIDsToOperationHandler;
    NSMutableSet *_installationConstraintObservers;
}


@property (nonatomic) int clientType; // ivar: _clientType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SUManagerClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUDescriptor *installDescriptor; // ivar: _installDescriptor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) SUDescriptor *scanDescriptor; // ivar: _scanDescriptor
@property (readonly) Class superclass;


+(BOOL)_isMultiUserAppleId;
+(BOOL)_shouldDisallowAvailabilityNotifications;
-(BOOL)createInstallationKeybag:(id)arg0 ;
-(BOOL)createInstallationKeybag:(id)arg0 forUnattendedInstall:(BOOL)arg1 ;
-(BOOL)createInstallationKeybagWithOptions:(id)arg0 ;
-(BOOL)isAutoUpdateScheduled;
-(BOOL)isAutomaticDownloadEnabled;
-(BOOL)isAutomaticUpdateV2Enabled;
-(BOOL)isInstallationKeybagRequired;
-(NSUInteger)totalPurgeableSpace;
-(id)_bundleIdentifier;
-(id)_getExistingAutoInstallOperationFromModel:(id)arg0 ;
-(id)_remoteInterface;
-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
// -(id)_remoteInterfaceWithErrorHandler:(id)arg0 connectIfNecessary:(unk)arg1  ;
// -(id)_remoteSynchronousInterfaceWithErrorHandler:(id)arg0 connectIfNecessary:(unk)arg1  ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 andQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 clientType:(int)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 clientType:(int)arg2 ;
-(id)observeInstallationConstraintChangesForDownload:(id)arg0 observer:(id)arg1 ;
-(void)_cancelAutoInstallOperation:(id)arg0 withResult:(id)arg1 ;
-(void)_consentAutoInstallOperation:(id)arg0 withResult:(id)arg1 ;
-(void)_invalidateAllInstallationConstraintObserversForDownload;
-(void)_invalidateConnection;
-(void)_invalidateConstraintObserver:(id)arg0 withError:(id)arg1 ;
-(void)_registerAutoInstallOperationClientHandler:(id)arg0 ;
-(void)_unregisterAutoInstallOperationClientHandler:(id)arg0 ;
-(void)areUpdatesDownloadableWithOptions:(id)arg0 alternateUpdateOptions:(id)arg1 preferredUpdateDownloadable:(*BOOL)arg2 alternateUpdateDownloadable:(*BOOL)arg3 preferredUpdateError:(*id)arg4 alternateUpdateError:(*id)arg5 ;
-(void)autoInstallOperationDidConsent:(id)arg0 ;
-(void)autoInstallOperationDidExpire:(id)arg0 withError:(id)arg1 ;
-(void)autoInstallOperationIsReadyToInstall:(id)arg0 withResult:(id)arg1 ;
-(void)autoInstallOperationPasscodePolicyChanged:(id)arg0 passcodePolicyType:(NSUInteger)arg1 ;
-(void)autoInstallOperationWasCancelled:(id)arg0 ;
-(void)autoScanAndDownloadIfAvailable:(id)arg0 ;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg0 withError:(id)arg1 ;
-(void)cancelDownload:(id)arg0 ;
-(void)connectToServerIfNecessary;
-(void)currentAutoInstallOperation:(BOOL)arg0 withResult:(id)arg1 ;
-(void)currentPasscodePolicy:(id)arg0 ;
-(void)dealloc;
-(void)delayEndDate:(id)arg0 ;
-(void)demoteApps:(NSUInteger)arg0 ;
-(void)descriptor:(id)arg0 ;
-(void)descriptors:(id)arg0 ;
-(void)destroyInstallationKeybag;
-(void)deviceHasSufficientSpaceForDownload:(id)arg0 ;
-(void)deviceHasSufficientSpaceForDownloads:(id)arg0 ;
-(void)download:(id)arg0 ;
-(void)downloadAndInstallState:(id)arg0 ;
-(void)downloadDidFail:(id)arg0 withError:(id)arg1 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 withInstallPolicy:(id)arg1 ;
-(void)downloadDidStart:(id)arg0 ;
-(void)downloadProgressDidChange:(id)arg0 ;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg0 ;
-(void)downloadWasInvalidatedForNewUpdatesAvailable:(id)arg0 ;
-(void)enableAutomaticDownload:(BOOL)arg0 ;
-(void)enableAutomaticUpdateV2:(BOOL)arg0 ;
-(void)extraSpaceNeededForDownloadWithoutAppPurging:(id)arg0 ;
-(void)getMandatorySoftwareUpdateDictionary:(id)arg0 ;
-(void)installDidFail:(id)arg0 withError:(id)arg1 ;
-(void)installDidFinish:(id)arg0 ;
-(void)installDidStart:(id)arg0 ;
-(void)installPolicyDidChange:(id)arg0 ;
-(void)installServerConfiguration;
-(void)installTonightScheduled:(BOOL)arg0 operationID:(id)arg1 ;
-(void)installUpdate:(id)arg0 ;
-(void)installUpdateWithInstallOptions:(id)arg0 withResult:(id)arg1 ;
-(void)installUpdateWithOptions:(id)arg0 withResult:(id)arg1 ;
-(void)installationConstraintMonitor:(id)arg0 constraintsDidChange:(NSUInteger)arg1 ;
-(void)installationConstraintObserverDidRemoveAllObserverBlocks:(id)arg0 ;
-(void)invalidate;
-(void)isAutoUpdateEnabled:(id)arg0 ;
-(void)isAutoUpdateScheduled:(id)arg0 ;
-(void)isDelayingUpdates:(id)arg0 ;
-(void)isDownloading:(id)arg0 ;
-(void)isScanning:(id)arg0 ;
-(void)isUpdateReadyForInstallation:(id)arg0 ;
-(void)isUpdateReadyForInstallationWithOptions:(id)arg0 withResult:(id)arg1 ;
-(void)managedInstallationRequested:(id)arg0 ;
-(void)noteConnectionDropped;
-(void)noteServerExiting;
-(void)pauseDownload:(id)arg0 ;
-(void)preference:(id)arg0 didChange:(id)arg1 ;
-(void)presentAutoUpdateBanner:(id)arg0 ;
-(void)purgeDownload:(id)arg0 ;
-(void)recordSUAnalyticsEvent:(id)arg0 ;
-(void)registerCSInstallPredicatesOnDate:(id)arg0 ;
-(void)resumeDownload:(id)arg0 ;
-(void)scanDidCompleteForOptions:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg0 error:(id)arg1 ;
-(void)scanForUpdates:(id)arg0 withResult:(id)arg1 ;
-(void)scanForUpdates:(id)arg0 withScanResults:(id)arg1 ;
-(void)scanRequestDidFinishForOptions:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(void)scanRequestDidFinishForOptions:(id)arg0 update:(id)arg1 error:(id)arg2 ;
-(void)scanRequestDidStartForOptions:(id)arg0 ;
-(void)scheduleDateActivity:(NSInteger)arg0 ;
-(void)setExclusiveControl:(BOOL)arg0 ;
-(void)setMandatorySoftwareUpdateDictionary:(id)arg0 ;
-(void)slaVersion:(id)arg0 ;
-(void)softwareUpdatePathRestriction:(id)arg0 ;
-(void)startDownload:(id)arg0 ;
-(void)startDownloadWithMetadata:(id)arg0 withResult:(id)arg1 ;
-(void)startDownloadWithOptions:(id)arg0 withResult:(id)arg1 ;
-(void)submitAllSUAnalyticsEvents;
-(void)submitSUAnalyticsEvent:(id)arg0 ;
-(void)submitSUAnalyticsEventsWithName:(id)arg0 ;
-(void)updateDownloadMetadata:(id)arg0 withResult:(id)arg1 ;
-(void)updateDownloadOptions:(id)arg0 withResult:(id)arg1 ;
-(void)updatesDownloadableWithOptions:(id)arg0 alternateDownloadOptions:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif