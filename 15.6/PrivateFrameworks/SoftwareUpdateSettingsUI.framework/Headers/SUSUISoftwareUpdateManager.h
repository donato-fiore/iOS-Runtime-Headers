// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUISOFTWAREUPDATEMANAGER_H
#define SUSUISOFTWAREUPDATEMANAGER_H

@class SUManagerClient, NSString, SUDescriptor, NSError, SUDownload, SUMutableDownloadMetadata, UIViewController, SUInstallPolicy, RUIStyle;
@protocol SUSUISoftwareUpdateClientManagerDelegate, SUNetworkObserver, SUSUISoftwareUpdateManagerDelegate;

#import <Foundation/Foundation.h>

#import "SUSUISoftwareUpdateClientManager.h"
#import "SUSUIUpdateAgreementManager.h"

@interface SUSUISoftwareUpdateManager : NSObject <SUSUISoftwareUpdateClientManagerDelegate, SUNetworkObserver>

 {
    BOOL _manuallyStartedScan;
    BOOL _anyScanInProgress;
    int _networkType;
    BOOL _connectedToPowerSource;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    CGFloat _previousTimeRemaining;
    BOOL _readyToDownloadPreferred;
    BOOL _readyToDownloadAlternate;
    BOOL _readyToResume;
    BOOL _runningInitialScan;
    SUSUISoftwareUpdateClientManager *_suClient;
    SUSUIUpdateAgreementManager *_updateAgreementManager;
}


@property (readonly, nonatomic) SUManagerClient *SUManager; // ivar: _SUManager
@property (retain, nonatomic) NSString *actionString; // ivar: _actionString
@property (nonatomic) BOOL allowCellularOverride; // ivar: _allowCellularOverride
@property (retain, nonatomic) SUDescriptor *alternateUpdate; // ivar: _alternateUpdate
@property (readonly, nonatomic) NSError *alternateUpdateError; // ivar: _alternateUpdateError
@property (nonatomic) BOOL autoInstallArmedAndReady; // ivar: _autoInstallArmedAndReady
@property (nonatomic) BOOL bypassTermsAndConditions; // ivar: _bypassTermsAndConditions
@property (nonatomic) BOOL clientIsBuddy; // ivar: _clientIsBuddy
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SUSUISoftwareUpdateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SUDownload *download; // ivar: _download
@property (retain, nonatomic) SUMutableDownloadMetadata *downloadMetadata; // ivar: _downloadMetadata
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUDescriptor *hiddenAlternateUpdate; // ivar: _hiddenAlternateUpdate
@property (retain, nonatomic) SUDescriptor *hiddenPreferredUpdate; // ivar: _hiddenPreferredUpdate
@property (readonly, nonatomic) BOOL hidingAlternateUpdate; // ivar: _hidingAlternateUpdate
@property (readonly, nonatomic) BOOL hidingPreferredUpdate; // ivar: _hidingPreferredUpdate
@property (weak, nonatomic) UIViewController *hostController; // ivar: _hostController
@property (retain, nonatomic) SUInstallPolicy *installPolicy; // ivar: _installPolicy
@property (nonatomic) BOOL isDelayingUpdates; // ivar: _isDelayingUpdates
@property (readonly, nonatomic) BOOL preferredDeletedForAlternate; // ivar: _preferredDeletedForAlternate
@property (retain, nonatomic) SUDescriptor *preferredUpdate; // ivar: _preferredUpdate
@property (readonly, nonatomic) NSError *preferredUpdateError; // ivar: _preferredUpdateError
@property (readonly, nonatomic) NSString *prettyUpdateName;
@property (retain, nonatomic) NSString *progressString; // ivar: _progressString
@property (retain, nonatomic) RUIStyle *serverFlowStyle; // ivar: _serverFlowStyle
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) BOOL suPathsRestricted; // ivar: _suPathsRestricted
@property (readonly) Class superclass;
@property (retain, nonatomic) SUDescriptor *update; // ivar: _update


-(BOOL)_SUDownloadPhaseIsQueued:(id)arg0 ;
-(BOOL)automaticDownloadEnabled:(*BOOL)arg0 ;
-(BOOL)automaticUpdateEnabled:(*BOOL)arg0 ;
-(BOOL)automaticUpdateScheduled;
-(BOOL)canCancelAutoInstall;
-(BOOL)errorsAreEqual:(id)arg0 error2:(id)arg1 ;
-(BOOL)readyToDownload;
-(BOOL)readyToDownloadAlternateUpdate;
-(BOOL)readyToDownloadPreferredUpdate;
-(BOOL)readyToResume;
-(BOOL)shouldSetStateForInstallError:(id)arg0 outError:(*id)arg1 outState:(*int)arg2 ;
-(BOOL)shouldShowPreferredUpdateAsAlternate;
-(Class)managerClientClass;
-(NSUInteger)ignorableConstraints;
-(id)humanReadableDescriptionForError:(id)arg0 enableButton:(*BOOL)arg1 ;
-(id)humanReadableDescriptionForError:(id)arg0 enableButton:(*BOOL)arg1 showAsButtonFooter:(*BOOL)arg2 ;
-(id)initWithDelegate:(id)arg0 hostController:(id)arg1 ;
-(id)prettyNameForUpdate:(id)arg0 ;
-(void)_alertForDownloadConstraintsWithCompletion:(id)arg0 ;
-(void)_batteryStateChanged:(id)arg0 ;
-(void)_didBecomeActive:(id)arg0 ;
-(void)_notifyScanFailed:(id)arg0 ;
-(void)_reallyDownloadAndInstall:(NSUInteger)arg0 update:(id)arg1 AcceptingCellularFees:(int)arg2 completion:(id)arg3 ;
-(void)_reallyResumeDownloadAcceptingCellularFees:(int)arg0 ;
-(void)_updateDownloadProgressWithDownload:(id)arg0 stateFromDownload:(*int)arg1 ;
-(void)cancelAutoInstall;
-(void)cancelOrPurgeIfNecessary:(id)arg0 ;
-(void)checkAndSetReadyToInstall;
-(void)checkAutoInstall;
-(void)clearPastScanResults;
-(void)dealloc;
-(void)handleDownloadError:(id)arg0 ;
-(void)handleScanError:(id)arg0 ;
-(void)hideAlternateUpdate;
-(void)hidePreferredUpdate;
-(void)manager:(id)arg0 autoUpdateScheduleStateChanged:(BOOL)arg1 autoInstallOperation:(id)arg2 ;
-(void)manager:(id)arg0 downloadDidFail:(id)arg1 withError:(id)arg2 ;
-(void)manager:(id)arg0 downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2 ;
-(void)manager:(id)arg0 downloadDidStart:(id)arg1 ;
-(void)manager:(id)arg0 downloadProgressDidChange:(id)arg1 ;
-(void)manager:(id)arg0 downloadWasInvalidatedForNewUpdatesAvailable:(id)arg1 ;
-(void)manager:(id)arg0 installDidFail:(id)arg1 withError:(id)arg2 ;
-(void)manager:(id)arg0 installDidStart:(id)arg1 ;
-(void)manager:(id)arg0 scanRequestDidFinishForOptions:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg0 scanRequestDidStartForOptions:(id)arg1 ;
-(void)networkChangedFromNetworkType:(int)arg0 toNetworkType:(int)arg1 ;
-(void)presentTermsIfNecessaryCompletion:(id)arg0 ;
-(void)presentTermsIfNecessaryForUpdate:(id)arg0 completion:(id)arg1 ;
-(void)promptForDevicePasscodeForUnattendedInstall:(BOOL)arg0 completion:(id)arg1 ;
-(void)purgeCurrentDownloadWithHandler:(id)arg0 ;
-(void)refreshErrors:(id)arg0 alternateError:(id)arg1 completion:(id)arg2 ;
-(void)refreshState;
-(void)resumeDownload;
-(void)revealHiddenAlteranteUpdate;
-(void)revealHiddenPreferredUpdate;
-(void)runEntryScan:(BOOL)arg0 ;
-(void)scanFinishedWithUpdates:(id)arg0 error:(id)arg1 ;
-(void)scanForUpdateCompletion:(id)arg0 ;
-(void)scanForUpdatesCompletion:(id)arg0 ;
-(void)setAutoInstall:(id)arg0 ;
-(void)setAutomaticDownloadEnabled:(BOOL)arg0 ;
-(void)setAutomaticUpdateEnabled:(BOOL)arg0 ;
-(void)startDownloadAndInstall:(NSUInteger)arg0 update:(id)arg1 withHandler:(id)arg2 ;
-(void)startDownloadAndInstall:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(void)startInstallWithHandler:(id)arg0 ;
-(void)updateStateFromDownload:(id)arg0 ;
-(void)upgradeDownloadToUserInitiated;


@end


#endif