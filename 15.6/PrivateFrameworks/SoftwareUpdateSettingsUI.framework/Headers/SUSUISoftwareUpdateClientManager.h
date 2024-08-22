// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUISOFTWAREUPDATECLIENTMANAGER_H
#define SUSUISOFTWAREUPDATECLIENTMANAGER_H

@class SUManagerClient, SUAutoInstallOperation, NSString;
@protocol SUManagerClientDelegate, SUAutoInstallOperationDelegate, OS_dispatch_queue, SUSUISoftwareUpdateClientManagerDelegate;

#import <Foundation/Foundation.h>


@interface SUSUISoftwareUpdateClientManager : NSObject <SUManagerClientDelegate, SUAutoInstallOperationDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    SUManagerClient *_suClient;
    BOOL _autoDownloadEnabled;
    BOOL _autoUpdateEnabled;
    BOOL _autoUpdateScheduled;
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
-(BOOL)isAutoUpdateArmedAndReady;
-(BOOL)isAutoUpdateScheduled;
-(id)initWithDelegate:(id)arg0 completionQueue:(id)arg1 ;
-(void)_queue_cancelAutoInstall;
-(void)_queue_setAutoUpdateScheduled:(BOOL)arg0 ;
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
-(void)client:(id)arg0 installDidStart:(id)arg1 ;
-(void)client:(id)arg0 installTonightScheduled:(BOOL)arg1 operationID:(id)arg2 ;
-(void)client:(id)arg0 scanRequestDidFinishForOptions:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)client:(id)arg0 scanRequestDidStartForOptions:(id)arg1 ;
-(void)createInstallationKeybagWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)currentAutoInstallOperation:(BOOL)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)destroyInstallationKeybag:(id)arg0 ;
-(void)download:(id)arg0 ;
-(void)enableAutoDownload:(BOOL)arg0 ;
-(void)enableAutoInstall:(BOOL)arg0 ;
-(void)installUpdateWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)isDelayingUpdates:(id)arg0 ;
-(void)isInstallationKeybagRequired:(id)arg0 ;
-(void)isScanning:(id)arg0 ;
-(void)isUpdateReadyForInstallationWithOpions:(id)arg0 completion:(id)arg1 ;
-(void)preferencesChangedCallback:(id)arg0 ;
-(void)purgeDownload:(id)arg0 ;
-(void)queue_setAutoDownloadEnabled:(BOOL)arg0 ;
-(void)queue_setAutoDownloadEnabledIvar:(BOOL)arg0 ;
-(void)queue_setAutoInstallEnabled:(BOOL)arg0 ;
-(void)queue_setAutoInstallEnabledIvar:(BOOL)arg0 ;
-(void)scanforUpdatesWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)setAutoUpdateScheduled:(BOOL)arg0 ;
-(void)softwareUpdatePathRestriction:(id)arg0 ;
-(void)startDownloadWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)updateDownloadOptions:(id)arg0 completion:(id)arg1 ;
-(void)updatesDownloadable:(id)arg0 alternateUpdate:(id)arg1 completion:(id)arg2 ;


@end


#endif