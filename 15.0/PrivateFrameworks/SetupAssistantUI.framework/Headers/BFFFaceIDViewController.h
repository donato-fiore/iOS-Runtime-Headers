// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BFFFACEIDVIEWCONTROLLER_H
#define BFFFACEIDVIEWCONTROLLER_H

@class UIViewController, BKUIPearlEnrollControllerPreloadedState, LAContext, BFFBackupDeviceController, BuddyBetaEnrollmentStateManager, BYPreferencesController, BYChronicle, OBWelcomeController, NSString, BuddyDisplayZoomExecutor, BuddyEnrollmentCoordinator, BuddyExistingSettings, BuddyInternalSkipInfoProvider, BuddyMiscState, BuddyNetworkProvider, BuddyPendingRestoreState, ProximitySetupController, BYSeedProgramManager, BuddySetupMethod, BuddySuspendTask, BuddySystemTimeUpdateManager;
@protocol BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver, BYDeviceProvider, BFFFaceIDViewControllerDelegate;



@interface BFFFaceIDViewController : UIViewController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver>

 {
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
}


@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (retain, nonatomic) BFFBackupDeviceController *backupDeviceController;
@property (retain, nonatomic) BuddyBetaEnrollmentStateManager *betaEnrollmentStateManager;
@property (retain, nonatomic) BYPreferencesController *buddyPreferences;
@property (retain, nonatomic) BYChronicle *chronicle;
@property (nonatomic) BOOL completesOnCancel; // ivar: _completesOnCancel
@property (copy, nonatomic) id *connectedToWiFiAfterProximityBlock;
@property (retain, nonatomic) OBWelcomeController *contentController; // ivar: _contentController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BYDeviceProvider> *deviceProvider; // ivar: _deviceProvider
@property (retain, nonatomic) BuddyDisplayZoomExecutor *displayZoomExecutor;
@property (copy, nonatomic) id *doesRestartFlowCauseEraseBlock;
@property (nonatomic) NSUInteger enrollmentConfiguration; // ivar: _enrollmentConfiguration
@property (retain, nonatomic) BuddyEnrollmentCoordinator *enrollmentCoordinator;
@property (retain, nonatomic) BuddyExistingSettings *existingSettings;
@property (copy, nonatomic) id *exitBuddyForDemoSetUpBlock;
@property (weak, nonatomic) NSObject<BFFFaceIDViewControllerDelegate> *faceIDViewControllerDelegate; // ivar: _faceIDViewControllerDelegate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inDemo; // ivar: _inDemo
@property (retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider;
@property (copy, nonatomic) id *menuButtonPressedBlock;
@property (retain, nonatomic) BuddyMiscState *miscState;
@property (retain, nonatomic) BuddyNetworkProvider *networkProvider;
@property (retain, nonatomic) BuddyPendingRestoreState *pendingRestoreState;
@property (copy, nonatomic) id *prepareForCloudRestoreRebootBlock;
@property (copy, nonatomic) id *prepareForDeviceMigrationBlock;
@property (retain, nonatomic) ProximitySetupController *proximitySetupController;
@property (retain, nonatomic) BYSeedProgramManager *seedProgramManager;
@property (retain, nonatomic) BuddySetupMethod *setupMethod;
@property (nonatomic) BOOL shouldShowWallet; // ivar: _shouldShowWallet
@property (copy, nonatomic) id *showModalWiFiSettingsBlock;
@property (copy, nonatomic) id *startDeviceMigrationBlock;
@property (readonly) Class superclass;
@property (retain, nonatomic) BuddySuspendTask *suspendTask;
@property (retain, nonatomic) BuddySystemTimeUpdateManager *systemTimeUpdateManager;
@property (copy, nonatomic) id *willPerformSoftwareUpdateBlock;
@property (copy, nonatomic) id *writeGreenInformedDefaultPlistIfNecessaryBlock;


-(BOOL)_sheetMode;
-(id)init;
-(id)initInDemo:(BOOL)arg0 ;
-(void)_didSelectEnroll;
-(void)_didSelectSkip;
-(void)_userDidTapCancelButton:(id)arg0 ;
-(void)pearlEnrollController:(id)arg0 finishedEnrollWithError:(id)arg1 ;
-(void)performExtendedInitializationWithCompletion:(id)arg0 ;
-(void)resetColorsAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willStartOver;


@end


#endif