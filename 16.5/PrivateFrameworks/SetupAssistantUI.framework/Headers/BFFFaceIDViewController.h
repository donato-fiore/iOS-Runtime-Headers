// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFFACEIDVIEWCONTROLLER_H
#define BFFFACEIDVIEWCONTROLLER_H

@class UIViewController, BKUIPearlEnrollControllerPreloadedState, BuddyActivationRecord, BuddyActivationState, BYAnalyticsManager, LAContext, BFFBackupDeviceController, BuddyBetaEnrollmentStateManager, BYPreferencesController, BuddyButtonMonitor, BYChronicle, OBWelcomeController, NSString, BuddyDisplayZoomExecutor, BuddyEnrollmentCoordinator, BuddyExistingSettings, BuddyInternalSkipInfoProvider, MCProfileConnection, BuddyMiscState, BuddyPaneFeatureAnalyticsManager, BuddyPasscodeCacheManager, BuddyPendingRestoreState, BuddyProximityAutomatedDeviceEnrollmentController, ProximitySetupController, BYSeedProgramManager, BFFSettingsManager, BuddySetupMethod, BYSoftwareUpdateCache, BuddySuspendTask, BuddySystemTimeUpdateManager;
@protocol BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver, BYCapabilities, BuddyCombinedTermsProvider, BYDeviceProvider, BuddyEmergencyExecutor, BFFFaceIDViewControllerDelegate, BuddyFeatureFlags, BuddyNetworkProvider, BYRunState;



@interface BFFFaceIDViewController : UIViewController <BKUIPearlEnrollControllerDelegate, BYEnvironmentDependencyReceiver>

 {
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
}


@property (retain, nonatomic) BuddyActivationRecord *activationRecord;
@property (retain, nonatomic) BuddyActivationState *activationState;
@property (retain, nonatomic) BYAnalyticsManager *analyticsManager;
@property (retain, nonatomic) LAContext *authContext; // ivar: _authContext
@property (retain, nonatomic) BFFBackupDeviceController *backupDeviceController;
@property (retain, nonatomic) BuddyBetaEnrollmentStateManager *betaEnrollmentStateManager;
@property (retain, nonatomic) BYPreferencesController *buddyPreferences; // ivar: _buddyPreferences
@property (retain, nonatomic) BYPreferencesController *buddyPreferencesExcludedFromBackup;
@property (retain, nonatomic) BuddyButtonMonitor *buttonMonitor;
@property (retain, nonatomic) NSObject<BYCapabilities> *capabilities; // ivar: _capabilities
@property (retain, nonatomic) BYChronicle *chronicle;
@property (retain, nonatomic) NSObject<BuddyCombinedTermsProvider> *combinedTermsProvider;
@property (nonatomic) BOOL completesOnCancel; // ivar: _completesOnCancel
@property (retain, nonatomic) OBWelcomeController *contentController; // ivar: _contentController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BYDeviceProvider> *deviceProvider; // ivar: _deviceProvider
@property (retain, nonatomic) BuddyDisplayZoomExecutor *displayZoomExecutor;
@property (copy, nonatomic) id *doesRestartFlowCauseEraseBlock;
@property (retain, nonatomic) NSObject<BuddyEmergencyExecutor> *emergencyExecutor;
@property (nonatomic) NSUInteger enrollmentConfiguration; // ivar: _enrollmentConfiguration
@property (retain, nonatomic) BuddyEnrollmentCoordinator *enrollmentCoordinator;
@property (retain, nonatomic) BuddyExistingSettings *existingSettings;
@property (copy, nonatomic) id *exitBuddyForDemoSetUpBlock;
@property (weak, nonatomic) NSObject<BFFFaceIDViewControllerDelegate> *faceIDViewControllerDelegate; // ivar: _faceIDViewControllerDelegate
@property (retain, nonatomic) NSObject<BuddyFeatureFlags> *featureFlags;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inDemo; // ivar: _inDemo
@property (retain, nonatomic) BuddyInternalSkipInfoProvider *internalSkipInfoProvider;
@property (retain, nonatomic) MCProfileConnection *managedConfiguration;
@property (copy, nonatomic) id *menuButtonPressedBlock;
@property (retain, nonatomic) BuddyMiscState *miscState;
@property (retain, nonatomic) NSObject<BuddyNetworkProvider> *networkProvider;
@property (retain, nonatomic) BuddyPaneFeatureAnalyticsManager *paneFeatureAnalyticsManager;
@property (retain, nonatomic) BuddyPasscodeCacheManager *passcodeCacheManager; // ivar: _passcodeCacheManager
@property (retain, nonatomic) BuddyPendingRestoreState *pendingRestoreState;
@property (copy, nonatomic) id *prepareForCloudRestoreRebootBlock;
@property (copy, nonatomic) id *prepareForDeviceMigrationBlock;
@property (retain, nonatomic) BuddyProximityAutomatedDeviceEnrollmentController *proximityAutomatedDeviceEnrollmentController;
@property (retain, nonatomic) ProximitySetupController *proximitySetupController;
@property (retain, nonatomic) NSObject<BYRunState> *runState;
@property (retain, nonatomic) BYSeedProgramManager *seedProgramManager;
@property (retain, nonatomic) BFFSettingsManager *settingsManager;
@property (retain, nonatomic) BuddySetupMethod *setupMethod;
@property (copy, nonatomic) id *showModalWiFiSettingsBlock;
@property (retain, nonatomic) BYSoftwareUpdateCache *softwareUpdateCache;
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