// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHOMEKITDISPATCHER_H
#define HFHOMEKITDISPATCHER_H

@class NADelegateDispatcher, NAFuture, NSMutableArray, NSString, HMHome, HMHomeManager, NSTimer, NSMutableDictionary;
@protocol HFLocationSensingCoordinatorDelegate, HFHomeAppInstallStateArbiterObserver, HFStateRestorationSettingsObserver, HFHomeManagerCreatorDelegate;

#import <Foundation/Foundation.h>

#import "HFHomeKitAccessorySettingsDataSource.h"
#import "HFHomeManagerCreator.h"
#import "HFLocationSensingCoordinator.h"
#import "HFPinCodeManager.h"

@interface HFHomeKitDispatcher : NSObject <HFLocationSensingCoordinatorDelegate, HFHomeAppInstallStateArbiterObserver, HFStateRestorationSettingsObserver, HFHomeManagerCreatorDelegate>



@property (retain, nonatomic) NADelegateDispatcher *accessoryObserverDispatcher; // ivar: _accessoryObserverDispatcher
@property (readonly, nonatomic) HFHomeKitAccessorySettingsDataSource *accessorySettingsDataSource; // ivar: _accessorySettingsDataSource
@property (readonly, nonatomic) NAFuture *allHomesFuture;
@property (retain, nonatomic) NSMutableArray *allHomesPromises; // ivar: _allHomesPromises
@property (retain, nonatomic) NADelegateDispatcher *audioControlObserverDispatcher; // ivar: _audioControlObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *cameraObserverDispatcher; // ivar: _cameraObserverDispatcher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NAFuture *firstHomeAddedFuture;
@property (retain, nonatomic) NSMutableArray *firstHomeAddedPromises; // ivar: _firstHomeAddedPromises
@property (nonatomic) BOOL hasLoadedHomes; // ivar: _hasLoadedHomes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NAFuture *homeFuture;
@property (nonatomic) int homeKitPreferencesChangedNotifyToken; // ivar: _homeKitPreferencesChangedNotifyToken
@property (retain, nonatomic) NADelegateDispatcher *homeKitSettingsObserverDispatcher; // ivar: _homeKitSettingsObserverDispatcher
@property (retain, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) HFHomeManagerCreator *homeManagerCreator; // ivar: _homeManagerCreator
@property (retain, nonatomic) NADelegateDispatcher *homeManagerObserverDispatcher; // ivar: _homeManagerObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *homeObserverDispatcher; // ivar: _homeObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *homePersonManagerDispatcher; // ivar: _homePersonManagerDispatcher
@property (retain, nonatomic) NSMutableArray *homePromises; // ivar: _homePromises
@property (retain, nonatomic) NSTimer *homeSensingIdleTimer; // ivar: _homeSensingIdleTimer
@property (retain, nonatomic) NADelegateDispatcher *lightObserverDispatcher; // ivar: _lightObserverDispatcher
@property (retain, nonatomic) HFLocationSensingCoordinator *locationCoordinator; // ivar: _locationCoordinator
@property (retain, nonatomic) NAFuture *locationCoordinatorSetupFuture; // ivar: _locationCoordinatorSetupFuture
@property (readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property (retain, nonatomic) NADelegateDispatcher *mediaDestinationControllerObserverDispatcher; // ivar: _mediaDestinationControllerObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *mediaObjectObserverDispatcher; // ivar: _mediaObjectObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *mediaSessionObserverDispatcher; // ivar: _mediaSessionObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *networkConfigurationObserverDispatcher; // ivar: _networkConfigurationObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *networkRouterObserverDispatcher; // ivar: _networkRouterObserverDispatcher
@property (retain, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (retain, nonatomic) NSMutableDictionary *remoteAccessStateByHomeID; // ivar: _remoteAccessStateByHomeID
@property (readonly, nonatomic) NSMutableArray *requestedSoftwareDownloads; // ivar: _requestedSoftwareDownloads
@property (readonly, nonatomic) NSMutableArray *requestedSoftwareInstalls; // ivar: _requestedSoftwareInstalls
@property (retain, nonatomic) NADelegateDispatcher *residentDeviceObserverDispatcher; // ivar: _residentDeviceObserverDispatcher
@property (retain, nonatomic) HMHome *selectedHome; // ivar: _selectedHome
@property (nonatomic) BOOL selectedHomeFollowsLocation;
@property (retain, nonatomic) NADelegateDispatcher *siriEndpointProfileObserverDispatcher; // ivar: _siriEndpointProfileObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *softwareUpdateControllerObserverDispatcher; // ivar: _softwareUpdateControllerObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *softwareUpdateObserverDispatcher; // ivar: _softwareUpdateObserverDispatcher
@property (readonly) Class superclass;
@property (retain, nonatomic) NADelegateDispatcher *symptomFixSessionObserverDispatcher; // ivar: _symptomFixSessionObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *symptomsHandlerObserverDispatcher; // ivar: _symptomsHandlerObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *televisionObserverDispatcher; // ivar: _televisionObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *userObserverDispatcher; // ivar: _userObserverDispatcher
@property (retain, nonatomic) NADelegateDispatcher *walletKeyDeviceStateObserverDispatcher; // ivar: _walletKeyDeviceStateObserverDispatcher
@property (nonatomic) BOOL willAcceptHomeFutures; // ivar: _willAcceptHomeFutures


+(id)_defaultLogSettings;
+(id)_logSettingsWithFormatter:(id)arg0 ;
+(id)configuration;
+(id)sharedDispatcher;
+(void)initialize;
+(void)setConfiguration:(id)arg0 ;
-(BOOL)_shouldPersistSelectedHomeToDefaults;
-(BOOL)hasRequestedSoftwareDownload:(id)arg0 ;
-(BOOL)hasRequestedSoftwareInstall:(id)arg0 ;
-(id)_primaryHome;
-(id)_setupLocationSensingCoordinator;
-(id)homeFutureWithUser:(id)arg0 ;
-(id)init;
-(id)pinCodeManagerForHome:(id)arg0 ;
-(id)userFutureWithUniqueIdentifierStr:(id)arg0 ;
-(void)_applicationWillEnterForeground;
-(void)_createHomeManagerIfNecessary;
-(void)_finishAllHomesPromises:(id)arg0 ;
-(void)_finishFirstHomeAddedPromises:(id)arg0 ;
-(void)_finishHomePromises:(id)arg0 ;
-(void)_handleHomeManagerDidUpdateHomes:(id)arg0 ;
-(void)_requestSelectedHome:(id)arg0 ;
-(void)_setDelegationEnabled:(BOOL)arg0 forAccessoryHierarchy:(id)arg1 ;
-(void)_setDelegationEnabled:(BOOL)arg0 forMediaProfileContainer:(id)arg1 session:(id)arg2 ;
-(void)_setDelegationEnabled:(BOOL)arg0 forUser:(id)arg1 ;
-(void)_setDelegationEnabledForObjectsInCurrentHome:(BOOL)arg0 ;
-(void)_setupAccessoryObserver;
-(void)_setupHomeManagerObserver;
-(void)_setupHomeObserver;
-(void)_setupMediaObjectObserver;
-(void)_setupMediaSessionObserver;
-(void)_setupResidentDeviceObserver;
-(void)_setupSoftwareUpdateObserver;
-(void)_setupSofwareUpdateControllerObserver;
-(void)_setupStateDumpHandlers;
-(void)_setupSymptomFixSessionObserver;
-(void)_updateRemoteAccessStateForHome:(id)arg0 notifyingObservers:(BOOL)arg1 ;
-(void)addAccessoryObserver:(id)arg0 ;
-(void)addAudioControlObserver:(id)arg0 ;
-(void)addCameraObserver:(id)arg0 ;
-(void)addHomeKitSettingsObserver:(id)arg0 ;
-(void)addHomeManagerObserver:(id)arg0 ;
-(void)addHomeObserver:(id)arg0 ;
-(void)addHomePersonManagerObserver:(id)arg0 ;
-(void)addLightObserver:(id)arg0 ;
-(void)addMediaDestinationControllerObserver:(id)arg0 ;
-(void)addMediaObjectObserver:(id)arg0 ;
-(void)addMediaProfileObserver:(id)arg0 ;
-(void)addMediaSessionObserver:(id)arg0 ;
-(void)addNetworkConfigurationObserver:(id)arg0 ;
-(void)addNetworkRouterObserver:(id)arg0 ;
-(void)addObservationForCameraClipManager:(id)arg0 ;
-(void)addResidentDeviceObserver:(id)arg0 ;
-(void)addSiriEndpointProfileObserver:(id)arg0 ;
-(void)addSoftwareUpdateControllerObserver:(id)arg0 ;
-(void)addSoftwareUpdateObserver:(id)arg0 ;
-(void)addSymptomFixSessionObserver:(id)arg0 ;
-(void)addSymptomsHandlerObserver:(id)arg0 ;
-(void)addTelevisionObserver:(id)arg0 ;
-(void)addUserObserver:(id)arg0 ;
-(void)addWalletKeyDeviceStateObserver:(id)arg0 ;
-(void)coordinator:(id)arg0 homeSensingStatusDidChange:(BOOL)arg1 ;
-(void)coordinator:(id)arg0 locationSensingAvailabilityDidChange:(BOOL)arg1 ;
-(void)dealloc;
// -(void)dispatchAccessoryObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchAudioControlObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchCameraObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchHomeKitSettingMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchHomeKitSettingsObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchHomeManagerObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchHomeObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchHomePersonManagerObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchLightObserverMessage:(id)arg0 sender:(unk)arg1  ;
-(void)dispatchLightProfileUpdate:(id)arg0 settings:(id)arg1 error:(id)arg2 ;
// -(void)dispatchMediaDestinationControllerObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchMediaObjectObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchMediaSessionObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchNetworkConfigurationObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchNetworkRouterObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchSiriEndpointObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchSoftwareUpdateControllerMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchSoftwareUpdateMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchSymptomFixSessionObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchSymptomsHandlerMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchTelevisionObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchUserObserverMessage:(id)arg0 sender:(unk)arg1  ;
// -(void)dispatchWalletKeyDeviceStateObserverMessage:(id)arg0 sender:(unk)arg1  ;
-(void)fetchSettingsForLightProfiles:(id)arg0 ;
-(void)homeManagerWasCreated:(id)arg0 ;
-(void)installStateArbiter:(id)arg0 installStateDidChange:(BOOL)arg1 ;
-(void)markUpdate:(id)arg0 asRequested:(BOOL)arg1 ;
-(void)removeAccessoryObserver:(id)arg0 ;
-(void)removeAudioControlObserver:(id)arg0 ;
-(void)removeCameraObserver:(id)arg0 ;
-(void)removeHomeKitSettingsObserver:(id)arg0 ;
-(void)removeHomeManagerObserver:(id)arg0 ;
-(void)removeHomeObserver:(id)arg0 ;
-(void)removeHomePersonManagerObserver:(id)arg0 ;
-(void)removeLightObserver:(id)arg0 ;
-(void)removeMediaDestinationControllerObserver:(id)arg0 ;
-(void)removeMediaObjectObserver:(id)arg0 ;
-(void)removeMediaProfileObserver:(id)arg0 ;
-(void)removeMediaSessionObserver:(id)arg0 ;
-(void)removeNetworkConfigurationObserver:(id)arg0 ;
-(void)removeNetworkRouterObserver:(id)arg0 ;
-(void)removeObservationForCameraClipManager:(id)arg0 ;
-(void)removeResidentDeviceObserver:(id)arg0 ;
-(void)removeSiriEndpointProfileObserver:(id)arg0 ;
-(void)removeSoftwareUpdateControllerObserver:(id)arg0 ;
-(void)removeSoftwareUpdateObserver:(id)arg0 ;
-(void)removeSymptomFixSessionObserver:(id)arg0 ;
-(void)removeSymptomsHandlerObserver:(id)arg0 ;
-(void)removeTelevisionObserver:(id)arg0 ;
-(void)removeUserObserver:(id)arg0 ;
-(void)removeWalletKeyDeviceStateObserver:(id)arg0 ;
-(void)startHomeSensingIdleTimer;
-(void)stateRestorationSettings:(id)arg0 selectedHomeIdentifierDidUpdateExternally:(id)arg1 ;
-(void)updateHome;
-(void)updateHomeManagerConfiguration:(id)arg0 ;
-(void)updateSelectedHome;
-(void)updateStopHomeSensingIdleTimerState;
-(void)warmup;


@end


#endif