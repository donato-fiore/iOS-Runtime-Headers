// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUSETUPCONTROLLER_H
#define AUSETUPCONTROLLER_H

@class NSString, NSDictionary, NSDate, NSMutableSet;
@protocol SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup, SetupUIConfigDelegate;


#import "AssistantCallbackController.h"

@interface AUSetupController : AssistantCallbackController <SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup>

 {
    *BSConfigurationContext _configContext;
    BOOL _autoJoinState;
    BOOL _scanningState;
    BOOL _busy;
    BOOL _initializedBasePasswordFlag;
    BOOL _performingManualRead;
    BOOL _needToNilBonjour;
    NSString *_keychainBasePassword;
    NSString *_keychainWiFiPassword;
    NSString *_keychainDiskPassword;
}


@property (nonatomic) BOOL activeTask; // ivar: _activeTask
@property (retain, nonatomic) NSString *autoGuessSetupRecommendation; // ivar: _autoGuessSetupRecommendation
@property (retain, nonatomic) NSDictionary *bonjourRecord;
@property (nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) NSString *keychainBasePassword;
@property (retain, nonatomic) NSString *keychainDiskPassword;
@property (retain, nonatomic) NSString *keychainWiFiPassword;
@property (retain, nonatomic) NSString *lastDNSName; // ivar: _lastDNSName
@property (readonly, nonatomic) NSDate *lastHeardFromDevice; // ivar: _lastHeardFromDevice
@property (retain, nonatomic) NSDictionary *lastInstrumentation; // ivar: _lastInstrumentation
@property (retain, nonatomic) NSString *lastSystemName; // ivar: _lastSystemName
@property (nonatomic) BOOL rememberBasePassword;
@property (nonatomic) BOOL rememberDiskPassword; // ivar: _rememberDiskPassword
@property (nonatomic) BOOL rememberWiFiPassword;
@property (retain) NSDictionary *restoreRecommendation;
@property (readonly, nonatomic) NSMutableSet *setupDelegates; // ivar: _setupDelegates
@property (nonatomic) NSObject<SetupUIConfigDelegate> *uiConfigDelegate; // ivar: _uiConfigDelegate


+(id)setupController;
+(void)initialize;
-(BOOL)dirty;
-(BOOL)hasACPFeature:(unsigned int)arg0 ;
-(BOOL)isMonitoring;
-(BOOL)performingManualRead;
-(BOOL)snapshotDirty;
-(NSInteger)ethernetPortCount;
-(NSInteger)unignoredProblemCount;
-(id)allKeychainMACAddresses;
-(id)bestKeychainMACAddress;
-(id)init;
-(id)snapshotChangedKeys;
-(id)targetBaseInfoDict;
-(id)validateAllSettingsAndGetErrors;
-(id)validateSettingsAndGetErrors:(id)arg0 ;
-(int)busyState;
-(int)cancelSetup;
-(int)cancelTask;
-(int)closeAllConnections;
-(int)closeAllConnections:(BOOL)arg0 ;
-(int)copyValue:(*id)arg0 forBSSetting:(int)arg1 ;
-(int)copyValue:(*id)arg0 forSettingPath:(id)arg1 ;
-(int)getValue:(*id)arg0 forBSSetting:(int)arg1 ;
-(int)getValue:(*id)arg0 forSettingPath:(id)arg1 ;
-(int)ignoreProblemCode:(unsigned int)arg0 ;
-(int)joinAndBrowseAsync;
-(int)joinAsync;
-(int)readAllPropertiesFromBaseAsync;
-(int)readPropertyListFromBaseAsync:(id)arg0 ;
-(int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg0 ;
-(int)rpcRefreshBSSettingAsync:(int)arg0 ;
-(int)rpcRenewDHCPLeaseAsync;
-(int)rpcStartRemoteBrowse:(id)arg0 withService:(id)arg1 ;
-(int)rpcSystemInterfacesAsync;
-(int)rpcWPSAllowClientAsync:(id)arg0 ;
-(int)rpcWPSStartAsync:(BOOL)arg0 dayPass:(BOOL)arg1 timeout:(unsigned int)arg2 ;
-(int)rpcWPSStopAsync;
-(int)setMonitorForChanges:(BOOL)arg0 ;
-(int)setValue:(id)arg0 forBSSetting:(int)arg1 ;
-(int)setValue:(id)arg0 forSettingPath:(id)arg1 ;
-(int)setupFromAutoguessRecommendation:(id)arg0 withOptions:(id)arg1 ;
-(int)setupWithTargetBaseStation:(id)arg0 andSettings:(id)arg1 ;
-(int)setupWithTargetNetwork:(id)arg0 ;
-(int)snapshotPop:(BOOL)arg0 ;
-(int)snapshotPush;
-(int)stateForProblem:(unsigned int)arg0 ;
-(int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg0 ;
-(int)taskArchiveDiskAsync:(id)arg0 ;
-(int)taskEraseDiskAsync:(id)arg0 ;
-(int)taskRestartAsync;
-(int)taskRestoreDefaultsAsync:(BOOL)arg0 ;
-(int)taskState;
-(int)taskUploadFirmwareAsync:(id)arg0 ;
-(int)unIgnoreProblemCode:(unsigned int)arg0 ;
-(int)updateKeychainWithPasswords;
-(int)updateKeychainWithPasswordsWithStatus:(int)arg0 ;
-(int)updateSettingsAsync;
-(struct _BaseStation *)bsRef;
-(unsigned int)taskCode;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)dealloc;
-(void)deleteKeychainBasePassword;
-(void)deleteKeychainWirelessPassword;
-(void)handleBusyComplete;
-(void)handleBusyStart;
-(void)handleSetupComplete:(int)arg0 ;
-(void)handleTaskComplete;
-(void)loadKeychainBasePassword;
-(void)loadKeychainWirelessPassword;
-(void)logChangesToCCL;
-(void)resetWiFiState;
-(void)saveKeychainBasePassword;
-(void)saveKeychainWirelessPassword;
-(void)setupUIConfigResult:(int)arg0 withOptions:(id)arg1 ;
-(void)setupWiFiState;
-(void)snapshotResetAll;
-(void)updateLastHeardFromDevice;
-(void)updateRememberKeychainFlagsButSkipBasePassword:(BOOL)arg0 ;
-(void)updateRememberKeychainFlagsIfInitializing;


@end


#endif