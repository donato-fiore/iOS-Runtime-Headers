// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSUISOFTWAREUPDATECONTROLLER_H
#define SUSUISOFTWAREUPDATECONTROLLER_H

@class PSListController, NSString, UsageStorageController, NSError;
@protocol DevicePINControllerDelegate, UITableViewDelegate, SUSUISoftwareUpdateManagerDelegate, SUSUISoftwareUpdatePaneDelegate, OS_dispatch_queue;


#import "SUSUISoftwareUpdateManager.h"
#import "SUSUISoftwareUpdatePane.h"

@interface SUSUISoftwareUpdateController : PSListController <DevicePINControllerDelegate, UITableViewDelegate, SUSUISoftwareUpdateManagerDelegate, SUSUISoftwareUpdatePaneDelegate>

 {
    SUSUISoftwareUpdateManager *_manager;
    SUSUISoftwareUpdatePane *_primaryUpdatePane;
    SUSUISoftwareUpdatePane *_alternateUpdatePane;
    SUSUISoftwareUpdatePane *_activeDownloadPane;
    NSString *_devicePasscode;
    UsageStorageController *_usageStorageController;
    NSObject<OS_dispatch_queue> *_handleURLQueue;
}


@property (retain, nonatomic) NSError *SUError; // ivar: _suError
@property (readonly, nonatomic) BOOL clearingSpace; // ivar: _clearingSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *devicePasscodeCompletion; // ivar: _devicePasscodeCompletion
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *legacyDevicePasscodeCompletion; // ivar: _legacyDevicePasscodeCompletion
@property (readonly) Class superclass;


-(BOOL)autoInstallArmed;
-(CGFloat)tableView:(id)arg0 estimatedHeightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(Class)tableViewClass;
-(id)_createGroupIndices:(id)arg0 ;
-(id)automaticDownloadStatus;
-(id)automaticInstallSystemDataFilesStatus;
-(id)automaticUpdateStatus;
-(id)init;
-(id)previousUserSpecifiedAutomaticUpdateStatus;
-(id)previousUserSpecifiedSecurityResponseStatus;
-(id)securityResponseStatus;
-(id)selectSpecifier:(id)arg0 ;
-(id)specifierForSection:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_downloadAndInstall:(id)arg0 installationType:(NSUInteger)arg1 ;
-(void)_downloadAndInstall:(id)arg0 installationType:(NSUInteger)arg1 setPaneToPrimary:(BOOL)arg2 ;
-(void)alternateSoftwareUpdatePaneDidAppear:(id)arg0 ;
-(void)alternateSoftwareUpdatePaneDidDisappear:(id)arg0 ;
-(void)autoInstallCancel:(id)arg0 ;
-(void)dealloc;
-(void)detailedReleaseNotesDonePressed:(id)arg0 ;
-(void)devicePINController:(id)arg0 didDismissPINPane:(id)arg1 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg0 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg0 forUpdate:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)downloadAndInstall;
-(void)downloadAndInstallTonight;
-(void)downloadOnly;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)installWithPane:(id)arg0 ;
-(void)loadView;
-(void)manager:(id)arg0 autoUpdateScheduledStatusChanged:(BOOL)arg1 ;
-(void)manager:(id)arg0 clearingSpaceForDownload:(BOOL)arg1 ;
-(void)manager:(id)arg0 didReceiveBetaPrograms:(id)arg1 ;
-(void)manager:(id)arg0 didTransitionToState:(int)arg1 fromState:(int)arg2 ;
-(void)manager:(id)arg0 download:(id)arg1 failedWithError:(id)arg2 ;
-(void)manager:(id)arg0 downloadDidStart:(id)arg1 ;
-(void)manager:(id)arg0 downloadProgressChanged:(id)arg1 displayStyle:(int)arg2 ;
-(void)manager:(id)arg0 promptForDevicePasscodeWithCompletion:(id)arg1 ;
-(void)manager:(id)arg0 promptForDevicePasscodeWithDescriptorCompletion:(id)arg1 ;
-(void)manager:(id)arg0 rollingBackStateChanged:(BOOL)arg1 rollback:(id)arg2 ;
-(void)manager:(id)arg0 scanFoundUpdates:(id)arg1 error:(id)arg2 ;
-(void)movePaneToPrimary:(id)arg0 ;
-(void)nonPromotedSoftwareUpdatePaneDidDisappear:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)refreshState;
-(void)rollback:(id)arg0 ;
-(void)setAutomaticDownloadFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticInstallSystemDataFilesFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticUpdatesFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setAutomaticUpdatesFromUI:(id)arg0 userSpecified:(BOOL)arg1 forSpecifier:(id)arg2 ;
-(void)setSecurityResponseFromUI:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setSecurityResponseFromUI:(id)arg0 userSpecified:(BOOL)arg1 forSpecifier:(id)arg2 ;
-(void)showAlsoAvailaibleSUPane;
-(void)softwareUpdatePane:(id)arg0 devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)softwareUpdatePane:(id)arg0 learnMoreButtonTapped:(id)arg1 ;
-(void)softwareUpdatePane:(id)arg0 presentConfirmationSpecifier:(id)arg1 ;
-(void)softwareUpdatePane:(id)arg0 readyToDownload:(NSUInteger)arg1 ;
-(void)softwareUpdatePane:(id)arg0 readyToDownloadAndReplacePreferredPaneWithPane:(NSUInteger)arg1 ;
-(void)softwareUpdatePane:(id)arg0 showPINSheet:(id)arg1 ;
-(void)softwareUpdatePane:(id)arg0 specifiersChanged:(id)arg1 ;
-(void)softwareUpdatePaneReadyToInstall:(id)arg0 ;
-(void)softwareUpdatePaneReadyToRollback:(id)arg0 ;
-(void)softwareUpdatePaneReadyToUpgradeToUserInitiatedDownloadAndReplacePreferredPaneWithPane:(id)arg0 ;
-(void)softwareUpdatePaneUpgradeToUserInitiatedDownload:(id)arg0 ;
-(void)updateState;
-(void)updateTableFromState:(int)arg0 ;
-(void)upgradeDownloadToUserInitiated:(id)arg0 setPaneToPrimary:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willEnterForeground;


@end


#endif