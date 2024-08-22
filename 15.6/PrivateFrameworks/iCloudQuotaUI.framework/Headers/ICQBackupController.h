// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQBACKUPCONTROLLER_H
#define ICQBACKUPCONTROLLER_H

@class PSListController, MBManager, ACAccount, NSArray, PSSpecifier, NSNumber, PSGBackupDisabledAppsInfo, BYBuddyDaemonCloudSyncClient, NSString, NWPathEvaluator;
@protocol BYClientDaemonCloudSyncProtocol, MBManagerDelegate, OS_dispatch_queue;


#import "ICQBackupStatusView.h"

@interface ICQBackupController : PSListController <BYClientDaemonCloudSyncProtocol, MBManagerDelegate>

 {
    MBManager *_backupManager;
    int _backupState;
    BOOL _backupEnabled;
    ACAccount *_account;
    BOOL _finishedInitialLoad;
    ICQBackupStatusView *_backupStatusView;
    NSArray *_backupNowSpecifiers;
    PSSpecifier *_backupNowButton;
    NSArray *_backupOverCellularSpecifiers;
    PSSpecifier *_backupOverCellularSwitch;
    BOOL _backupCancelled;
    NSNumber *_networkSupportsBackup;
    BOOL _isExpensiveCellular;
    BOOL _isManualBackupOnCellularAllowed;
    BOOL _isAutoBackupOnCellularAllowed;
    BOOL _thermalSupportsBackup;
    int _thermalNotificationToken;
    NSObject<OS_dispatch_queue> *_backup_state_queue;
}


@property (retain, nonatomic) PSGBackupDisabledAppsInfo *backupDisabledAppsInfo; // ivar: _backupDisabledAppsInfo
@property (retain, nonatomic) BYBuddyDaemonCloudSyncClient *cloudSyncClient; // ivar: _cloudSyncClient
@property (nonatomic) int currentSyncState; // ivar: _currentSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger estimateTimeRemaining; // ivar: _estimateTimeRemaining
@property (nonatomic) BOOL finishBackupExecuted; // ivar: _finishBackupExecuted
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat icloudBackupProgress; // ivar: _icloudBackupProgress
@property (nonatomic) CGFloat icloudSyncProgress; // ivar: _icloudSyncProgress
@property (nonatomic) BOOL isFetchingDomainInfo; // ivar: _isFetchingDomainInfo
@property (nonatomic) BOOL needToShowPopupAlertForBackup; // ivar: _needToShowPopupAlertForBackup
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (readonly) Class superclass;
@property (nonatomic) int updateBackupState; // ivar: _updateBackupState


-(BOOL)isBackupEnabled;
-(BOOL)policyPreventsBackup;
-(Class)tableViewClass;
-(id)_backgroundRestoreInfoText:(id)arg0 ;
-(id)cachedIsBackupEnabledNumber;
-(id)dateStringOfLatestBackup;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)isBackupOverCellularEnabled;
-(id)manageStorageAction;
-(id)specifiers;
-(void)_backupEnabledSwitchCancelled:(id)arg0 ;
-(void)_checkSupportForManualAndAutoBackupOnCellular;
-(void)_disableBackupWithSpecifier:(id)arg0 ;
-(void)_enableBackupWithSpecifier:(id)arg0 ;
-(void)_setBackupEnabled:(BOOL)arg0 passcode:(id)arg1 ;
-(void)_showAlertForExpensiveCellular;
-(void)_updateToBackupState:(id)arg0 restoreState:(id)arg1 backgroundRestoreState:(id)arg2 backupEnabled:(BOOL)arg3 ;
-(void)_updateToBackupState:(int)arg0 backupError:(id)arg1 progress:(float)arg2 timeRemaining:(NSUInteger)arg3 restoreStateInfo:(id)arg4 backgroundRestoreInfo:(id)arg5 backupEnabled:(BOOL)arg6 ;
-(void)appleAccountChanged;
-(void)beginBackup:(id)arg0 ;
-(void)cancelBackup:(id)arg0 ;
-(void)cancelRestore:(id)arg0 ;
-(void)checkIfNetworkSupportsBackup;
-(void)checkIfThermalSupportsBackup;
-(void)dealloc;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)manager:(id)arg0 didFailBackupWithError:(id)arg1 ;
-(void)manager:(id)arg0 didFailRestoreWithError:(id)arg1 ;
-(void)manager:(id)arg0 didSetBackupEnabled:(BOOL)arg1 ;
-(void)manager:(id)arg0 didUpdateProgress:(float)arg1 estimatedTimeRemaining:(NSUInteger)arg2 ;
-(void)managerDidCancelRestore:(id)arg0 ;
-(void)managerDidFinishBackup:(id)arg0 ;
-(void)managerDidFinishRestore:(id)arg0 ;
-(void)managerDidLoseConnectionToService:(id)arg0 ;
-(void)managerDidUpdateBackgroundRestoreProgress:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openBackupHelpPage:(id)arg0 ;
-(void)prepareAlertForBackupDisabledDomainAndShow:(BOOL)arg0 ;
-(void)proceedWithBackup;
-(void)reloadSpecifiers;
-(void)setBackupEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setBackupOverCellularEnabled:(id)arg0 ;
-(void)setLastBackupDateString:(id)arg0 ;
-(void)setNetworkSupportsBackup:(BOOL)arg0 ;
-(void)setThermalSupportsBackup:(BOOL)arg0 ;
-(void)showAlertForBackupDisabledItemsWithTitle:(id)arg0 andMessage:(id)arg1 ;
-(void)showPopUpAlertForBackupDisabledApps;
-(void)startBackup;
-(void)startListeningForThermalChanges;
-(void)stopListeningForThermalChanges;
-(void)syncCompletedWithErrors:(id)arg0 ;
-(void)syncProgress:(CGFloat)arg0 ;
-(void)updateBackupFinishState;
-(void)updateBusyState;
-(void)updateLastBackupDate;
-(void)updateLastBackupDateInvalidatePrevious:(BOOL)arg0 ;
-(void)updateiCloudBackupAndSyncProgressWithAllowDecrease:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willUnlock;


@end


#endif