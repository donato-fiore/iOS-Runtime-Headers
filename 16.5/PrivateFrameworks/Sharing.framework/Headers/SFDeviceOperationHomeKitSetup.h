// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDEVICEOPERATIONHOMEKITSETUP_H
#define SFDEVICEOPERATIONHOMEKITSETUP_H

@class TROperationQueue, HMAccessoryBrowser, HMDeviceSetupOperation, HMAccessory, HMRoom, HMMediaSystem, NSDictionary, NSString, HMHomeManager, HMHome, ACAccount, CUPairedPeer, TRSession;
@protocol HMAccessoryBrowserDelegate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, OS_dispatch_source, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFDeviceOperationHomeKitSetup : NSObject <HMAccessoryBrowserDelegate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate>

 {
    BOOL _active;
    BOOL _paused;
    NSUInteger _startTicks;
    NSUInteger _startTicksForHomeKitSteps;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    TROperationQueue *_trOperationQueue;
    BOOL _configuredTVAudio;
    HMAccessoryBrowser *_homeKitBrowser;
    BOOL _homeAppInstallUserDidChoose;
    HMDeviceSetupOperation *_homeKitDeviceSetupOperation;
    HMAccessory *_homeKitAccessory;
    BOOL _reselectHome;
    HMRoom *_homeKitSelectedRoom;
    BOOL _homeKitAddedAppData;
    BOOL _configuredStereoPair;
    HMMediaSystem *_homeKitMediaSystem;
    BOOL _personalRequestsDone;
    BOOL _userListeningHistoryDone;
    NSUInteger _odeonStartTicks;
    id<NSObject> *_hdsutilHKToken;
}


@property (readonly, nonatomic) CGFloat addDeviceNonUserSeconds; // ivar: _addDeviceNonUserSeconds
@property (copy, nonatomic) NSDictionary *appDataSelf; // ivar: _appDataSelf
@property (readonly, nonatomic) CGFloat assignRoomNonUserSeconds; // ivar: _assignRoomNonUserSeconds
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) BOOL hasHomePod; // ivar: _hasHomePod
@property (readonly, nonatomic) BOOL hasMultipleUsers; // ivar: _hasMultipleUsers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL homeKitAddedAccessory; // ivar: _homeKitAddedAccessory
@property (readonly, nonatomic) HMHomeManager *homeKitHomeManager; // ivar: _homeKitHomeManager
@property (readonly, nonatomic) BOOL homeKitHomeManagerReady; // ivar: _homeKitHomeManagerReady
@property (readonly, nonatomic) HMHome *homeKitSelectedHome; // ivar: _homeKitSelectedHome
@property (readonly, copy, nonatomic) NSString *homeKitSelectedRoomName; // ivar: _homeKitSelectedRoomName
@property (retain, nonatomic) ACAccount *iTunesAccount; // ivar: _iTunesAccount
@property (copy, nonatomic) NSString *iTunesAccountID; // ivar: _iTunesAccountID
@property (nonatomic) BOOL isCLIMode; // ivar: _isCLIMode
@property (nonatomic) BOOL keyExchangeOnly; // ivar: _keyExchangeOnly
@property (readonly, nonatomic) CGFloat metricNonUserSeconds; // ivar: _metricNonUserSeconds
@property (readonly, nonatomic) CGFloat metricUserSeconds; // ivar: _metricUserSeconds
@property (nonatomic) CGFloat odeonSeconds; // ivar: _odeonSeconds
@property (retain, nonatomic) CUPairedPeer *pairedPeer; // ivar: _pairedPeer
@property (nonatomic) BOOL pauseAfterUserInput; // ivar: _pauseAfterUserInput
@property (copy, nonatomic) id *pauseHandler; // ivar: _pauseHandler
@property (nonatomic) BOOL personalRequestsEnabled; // ivar: _personalRequestsEnabled
@property (readonly, nonatomic) CGFloat personalRequestsNonUserSeconds; // ivar: _personalRequestsNonUserSeconds
@property (copy, nonatomic) id *promptForHomeHandler; // ivar: _promptForHomeHandler
@property (copy, nonatomic) id *promptForRoomHandler; // ivar: _promptForRoomHandler
@property (copy, nonatomic) id *promptForRoomHandlerDetailed; // ivar: _promptForRoomHandlerDetailed
@property (copy, nonatomic) id *promptToInstallHomeAppHandler; // ivar: _promptToInstallHomeAppHandler
@property (readonly, nonatomic) CGFloat setupDeviceNonUserSeconds; // ivar: _setupDeviceNonUserSeconds
@property (retain, nonatomic) HMAccessory *stereoCounterpart; // ivar: _stereoCounterpart
@property (nonatomic) int stereoRole; // ivar: _stereoRole
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutInSeconds; // ivar: _timeoutInSeconds
@property (retain, nonatomic) TRSession *trSession; // ivar: _trSession
@property (retain, nonatomic) HMAccessory *tvAudioInput; // ivar: _tvAudioInput
@property (readonly, nonatomic) CGFloat ulhNonUserSeconds; // ivar: _ulhNonUserSeconds
@property (nonatomic) BOOL userInteractive; // ivar: _userInteractive


-(BOOL)_isOwnerOfHome:(id)arg0 ;
-(BOOL)_runHomeKitConfigureStereoPairAndReturnError:(*id)arg0 ;
-(id)_homeKitFindSettingsWithKeyPath:(id)arg0 group:(id)arg1 ;
-(id)_mediaSystemForAccessory:(id)arg0 ;
-(id)_normalizedString:(id)arg0 ;
-(id)_runHomeKitAutoSelectHome:(BOOL)arg0 ;
-(id)findStereoCounterpartsWithSupportedVersions:(NSUInteger)arg0 ;
-(id)findTVs;
-(id)homeKitAccessory;
-(id)init;
-(void)_cleanup;
-(void)_completeWithError:(id)arg0 ;
-(void)_removeAccessoryIfNeeded;
-(void)_removeSimilarRoomNames:(id)arg0 home:(id)arg1 ;
-(void)_restoreHomeApp;
-(void)_run;
-(void)_runHomeKitAddAccessory;
-(void)_runHomeKitAddAppData;
-(void)_runHomeKitAddHome;
-(void)_runHomeKitAssignRoom;
-(void)_runHomeKitDeviceSetup;
-(void)_runHomeKitSelectRoom;
-(void)_runHomeKitSetupRoom;
-(void)_runHomeKitUpdateAppleTVAudioDestination;
-(void)_runInit;
-(void)_runPersonalRequestsStart;
-(void)_runUpdateUserListeningHistoryStart;
-(void)_startTimeout:(CGFloat)arg0 ;
-(void)_updateAccount;
-(void)_updateHomeStats;
-(void)accessoryBrowser:(id)arg0 didFindNewAccessory:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didRemoveNewAccessory:(id)arg1 ;
-(void)activate;
-(void)homeAppInstallChoice:(BOOL)arg0 ;
-(void)homeManager:(id)arg0 didUpdateStatus:(NSUInteger)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)invalidate;
-(void)reselectHome;
-(void)resume;
-(void)selectHome:(id)arg0 ;
-(void)selectRoom:(id)arg0 ;


@end


#endif