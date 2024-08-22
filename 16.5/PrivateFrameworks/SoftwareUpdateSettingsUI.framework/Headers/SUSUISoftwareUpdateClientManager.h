// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUISOFTWAREUPDATECLIENTMANAGER_H
#define SUSUISOFTWAREUPDATECLIENTMANAGER_H

@class SUManagerClient, SURollbackDescriptor, SUAutoInstallOperation, NSString;
@protocol SUManagerClientDelegate, SUAutoInstallOperationDelegate, OS_dispatch_queue, SUSUISoftwareUpdateClientManagerDelegate;

#import <Foundation/Foundation.h>


@interface SUSUISoftwareUpdateClientManager : NSObject <SUManagerClientDelegate, SUAutoInstallOperationDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    SUManagerClient *_suClient;
    BOOL _autoUpdateScheduled;
    BOOL _rollingBack;
    SURollbackDescriptor *_rollbackDescriptor;
    SUAutoInstallOperation *_autoInstallOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SUSUISoftwareUpdateClientManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) SUManagerClient *suManagerClient;
@property (readonly) Class superclass;


-(BOOL)isAutoDownloadEnabled;
-(BOOL)isAutoInstallEnabled;
-(BOOL)isAutoInstallPreviousUserSettingsEnabled;
-(BOOL)isAutoUpdateArmedAndReady;
-(BOOL)isAutoUpdateScheduled;
-(BOOL)isAutomaticInstallSystemDataFilesEnabled;
-(BOOL)isRollingBack;
-(BOOL)isSecurityResponseEnabled;
-(BOOL)previousUserSpecifiedSecurityResponseEnabled;
-(id)eligibleRollback;
-(id)initWithDelegate:(id)arg0 completionQueue:(id)arg1 ;
-(void)_queue_cancelAutoInstall;
-(void)_queue_setAutoUpdateScheduled:(BOOL)arg0 ;
-(void)_queue_setEligibleRollback:(id)arg0 ;
-(void)_queue_setRollingBack:(BOOL)arg0 ;
-(void)autoInstallOperationDidConsent:(id)arg0 ;
-(void)autoInstallOperationIsReadyToInstall:(id)arg0 withResponse:(id)arg1 ;
-(void)autoInstallOperationPasscodePolicyDidChange:(id)arg0 passcodePolicyType:(NSUInteger)arg1 ;
-(void)autoInstallOperationWasCancelled:(id)arg0 ;
-(void)cancelAutoInstall;
-(void)client:(id)arg0 downloadDidFail:(id)arg1 withError:(id)arg2 ;
-(void)client:(id)arg0 downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2 ;
-(void)client:(id)arg0 downloadDidStart:(id)arg1 ;
-(void)client:(id)arg0 downloadProgressDidChange:(id)arg1 ;
-(void)client:(id)arg0 downloadWasInvalidatedForNewUpdatesAvailable:(id)arg1 ;
-(void)client:(id)arg0 installDidFail:(id)arg1 withError:(id)arg2 ;
-(void)client:(id)arg0 installDidFinish:(id)arg1 ;
-(void)client:(id)arg0 installDidStart:(id)arg1 ;
-(void)client:(id)arg0 installTonightScheduled:(BOOL)arg1 operationID:(id)arg2 ;
-(void)client:(id)arg0 rollbackDidFail:(id)arg1 withError:(id)arg2 ;
-(void)client:(id)arg0 rollbackDidFinish:(id)arg1 ;
-(void)client:(id)arg0 rollbackDidStart:(id)arg1 ;
-(void)client:(id)arg0 scanRequestDidFinishForOptions:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)client:(id)arg0 scanRequestDidStartForOptions:(id)arg1 ;
-(void)createInstallationKeybagWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)currentAutoInstallOperation:(BOOL)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)destroyInstallationKeybag:(id)arg0 ;
-(void)download:(id)arg0 ;
-(void)enableAutoDownload:(BOOL)arg0 ;
-(void)enableAutoInstall:(BOOL)arg0 ;
-(void)enableAutoInstallPreviousUserSettings:(BOOL)arg0 ;
-(void)enableAutomaticInstallSystemDataFiles:(BOOL)arg0 ;
-(void)installUpdateWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)isClearingSpaceForDownload:(id)arg0 ;
-(void)isDelayingUpdates:(id)arg0 ;
-(void)isInstallationKeybagRequired:(id)arg0 ;
-(void)isInstallationKeybagRequiredForDescriptor:(id)arg0 result:(id)arg1 ;
-(void)isScanning:(id)arg0 ;
-(void)isUpdateReadyForInstallationWithOpions:(id)arg0 completion:(id)arg1 ;
-(void)purgeDownload:(id)arg0 ;
-(void)queue_enableAutoInstallPreviousUserSettings:(BOOL)arg0 ;
-(void)queue_enableAutomaticInstallSystemDataFiles:(BOOL)arg0 ;
-(void)queue_setAutoDownloadEnabled:(BOOL)arg0 ;
-(void)queue_setAutoInstallEnabled:(BOOL)arg0 ;
-(void)queue_setPreviousUserSpecifiedSecurityResponseStatus:(BOOL)arg0 ;
-(void)queue_setSecurityResponseEnabled:(BOOL)arg0 ;
-(void)rollbackUpdateWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)scanforUpdatesWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)setAutoUpdateScheduled:(BOOL)arg0 ;
-(void)setEligibleRollback:(id)arg0 ;
-(void)setPreviousUserSpecifiedSecurityResponseStatus:(BOOL)arg0 ;
-(void)setRollingBack:(BOOL)arg0 rollback:(id)arg1 ;
-(void)setSecurityResponseEnabled:(BOOL)arg0 ;
-(void)softwareUpdatePathRestriction:(id)arg0 ;
-(void)startDownloadWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)updateDownloadOptions:(id)arg0 completion:(id)arg1 ;
-(void)updatesDownloadable:(id)arg0 alternateUpdate:(id)arg1 completion:(id)arg2 ;


@end


#endif