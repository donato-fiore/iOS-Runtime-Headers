// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITXPCSERVER_H
#define BIOMETRICKITXPCSERVER_H

@class NSMutableSet, NSMutableArray, NSRecursiveLock, NSString;
@protocol CMWakeGestureDelegate, NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BiometricAutoBugCapture.h"
#import "BKCatacomb.h"
#import "CatacombStateCache.h"
#import "ActivityTracker.h"
#import "BiometricOperation.h"

@interface BiometricKitXPCServer : NSObject <CMWakeGestureDelegate, NSXPCListenerDelegate>

 {
    NSUInteger _osStateHandle;
    NSMutableSet *_exportedObjects;
    BOOL _connectionsSuspended;
    unsigned int _maxTemplatesPerUser;
    unsigned int _maxSupportedUsers;
    int _activeOperationNtfToken;
    BOOL _activeOperationNtfTokenValid;
    NSObject<OS_dispatch_queue> *_activeOperationNtfQueue;
    BOOL _dsChangeDetected;
    unsigned int _backlightService;
    int _displayStatusNotifyToken;
    int _lastDisplayState;
    int _enrollChgNtfToken;
    BOOL _enrollChgNtfTokenValid;
    int _lockoutChgNtfToken;
    BOOL _lockoutChgNtfTokenValid;
    int _expressModeChgNtfToken;
    BOOL _expressModeChgNtfTokenValid;
    NSInteger _expressModeState;
}


@property (readonly, retain, nonatomic) NSMutableArray *activeBioOpsQueue; // ivar: _activeBioOpsQueue
@property (nonatomic) BOOL ariadneSignposts; // ivar: _ariadneSignposts
@property (readonly, retain, nonatomic) NSMutableArray *bioOpsQueue; // ivar: _bioOpsQueue
@property (retain, nonatomic) BiometricAutoBugCapture *biometricABC; // ivar: _biometricABC
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *biometricABCDispatchQueue; // ivar: _biometricABCDispatchQueue
@property (readonly, retain, nonatomic) NSMutableArray *cachedIdentities; // ivar: _cachedIdentities
@property (readonly, retain, nonatomic) BKCatacomb *catacomb; // ivar: _catacomb
@property (nonatomic) BOOL catacombFileAccessed; // ivar: _catacombFileAccessed
@property (readonly, retain, nonatomic) NSRecursiveLock *catacombLock; // ivar: _catacombLock
@property (nonatomic) BOOL catacombRestored; // ivar: _catacombRestored
@property (readonly, retain, nonatomic) CatacombStateCache *catacombStateCache; // ivar: _catacombStateCache
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *cmdDispatchQueue; // ivar: _cmdDispatchQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL lastDisplayState;
@property (readonly, nonatomic) *IONotificationPort notifyport; // ivar: _notifyport
@property (readonly, retain, nonatomic) ActivityTracker *ongoingBiometricOperation; // ivar: _ongoingBiometricOperation
@property (readonly, retain, nonatomic) ActivityTracker *ongoingCatacombSaveTimer; // ivar: _ongoingCatacombSaveTimer
@property (readonly, retain, nonatomic) BiometricOperation *runningBioOp; // ivar: _runningBioOp
@property (readonly) Class superclass;
@property (nonatomic) BOOL templatesAtBoot; // ivar: _templatesAtBoot


+(void)initialize;
-(BOOL)fileRadarWithLogs:(id)arg0 withDescription:(id)arg1 ;
-(BOOL)getEnabledForUnlock;
-(BOOL)isClassCFileAccessible;
-(BOOL)isDisplayOn;
-(BOOL)isFingerOnWithClient:(id)arg0 ;
-(BOOL)isXARTAvailableWithClient:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setPreferencesValue:(id)arg0 forKey:(id)arg1 withClient:(id)arg2 ;
-(BOOL)templatesExistAtBoot;
-(BOOL)validateAllUsers;
-(NSInteger)getDeviceStateWithClient:(id)arg0 ;
-(NSInteger)getFreeIdentityCount:(int)arg0 forUser:(unsigned int)arg1 withClient:(id)arg2 ;
-(NSInteger)getMaxIdentityCount:(int)arg0 withClient:(id)arg1 ;
-(NSInteger)getProvisioningStateWithClient:(id)arg0 ;
-(NSInteger)getSensorCalibrationStatusWithClient:(id)arg0 ;
-(NSUInteger)identitiesCount;
-(id)allClients;
-(id)catacombComponentForIdentity:(id)arg0 ;
-(id)catacombFileNameForComponent:(id)arg0 ;
-(id)createEnrollOperation;
-(id)createMatchEventDictionary:(struct ? *)arg0 ;
-(id)createMatchOperation;
-(id)createPresenceDetectOperation;
-(id)getCalibrationDataInfoWithClient:(id)arg0 ;
-(id)getIdentitiesDatabaseHashForUser:(unsigned int)arg0 withClient:(id)arg1 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg0 withClient:(id)arg1 ;
-(id)getIdentityFromUUID:(id)arg0 withClient:(id)arg1 ;
-(id)getIdentityObject:(struct ? *)arg0 ;
-(id)getIdentityObjectByUserID:(unsigned int)arg0 UUID:(id)arg1 ;
-(id)getLogs:(BOOL)arg0 withDetails:(*id)arg1 ;
-(id)getNodeTopologyForIdentity:(id)arg0 withClient:(id)arg1 ;
-(id)getProtectedConfigurationForUser:(unsigned int)arg0 withClient:(id)arg1 ;
-(id)getSensorInfoWithClient:(id)arg0 ;
-(id)getSystemProtectedConfigurationWithClient:(id)arg0 ;
-(id)hexDumpData:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)identities;
-(id)identities:(id)arg0 withClient:(id)arg1 ;
-(id)identitiesOfComponent:(id)arg0 ;
-(id)identitiesOfUser:(unsigned int)arg0 ;
-(id)init;
-(id)pullAlignmentData;
-(id)pullCalibrationDataWithClient:(id)arg0 ;
-(id)pullCaptureBufferWithClient:(id)arg0 ;
-(id)pullDebugImageData:(BOOL)arg0 rotated:(BOOL)arg1 hasWidth:(*unsigned int)arg2 hasHeight:(*unsigned int)arg3 withClient:(id)arg4 ;
-(id)pullMatchPolicyInfoData;
-(id)stateDictionaryWithHints:(struct os_state_hints_s *)arg0 ;
-(int)archiveCatacombDataForComponent:(id)arg0 toArchiver:(id)arg1 ;
-(int)cacheCatacombInfo;
-(int)cancelWithClient:(id)arg0 ;
-(int)checkCatacombForUser:(unsigned int)arg0 ;
-(int)checkTemplatesValidityForUser:(unsigned int)arg0 ;
-(int)completeEnrollmentWithClient:(id)arg0 ;
-(int)detectPresenceWithOptions:(id)arg0 withClient:(id)arg1 ;
-(int)diagnostics:(int)arg0 withOptions:(id)arg1 passed:(*BOOL)arg2 withDetails:(*id)arg3 withClient:(id)arg4 ;
-(int)displayStateChanged:(BOOL)arg0 ;
-(int)dropUnlockTokenWithClient:(id)arg0 ;
-(int)enableBackgroundFdet:(BOOL)arg0 withClient:(id)arg1 ;
-(int)enableMatchAutoRetry:(BOOL)arg0 withClient:(id)arg1 ;
-(int)enroll:(int)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)enrollContinue;
-(int)filterIdentities:(id)arg0 withFilter:(id)arg1 ;
-(int)forceBioLockoutForUser:(unsigned int)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)getBioLockoutState:(*NSInteger)arg0 forUser:(unsigned int)arg1 withClient:(id)arg2 ;
-(int)getBiometryAvailability:(*NSInteger)arg0 forUser:(unsigned int)arg1 withClient:(id)arg2 ;
-(int)getCatacombSaveListForComponents:(id)arg0 list:(*id)arg1 ;
-(int)getCountersignedStoreToken:(*id)arg0 withClient:(id)arg1 ;
-(int)getDeviceHardwareState:(*unsigned int)arg0 withClient:(id)arg1 ;
-(int)getExpressModeState:(*NSInteger)arg0 forUser:(unsigned int)arg1 withClient:(id)arg2 ;
-(int)getLastMatchEvent:(*id)arg0 withClient:(id)arg1 ;
-(int)getPeriocularMatchStateForUser:(unsigned int)arg0 state:(*NSInteger)arg1 withClient:(id)arg2 ;
-(int)getPreferencesValue:(*id)arg0 forKey:(id)arg1 withClient:(id)arg2 ;
-(int)handleFirstUnlock;
-(int)initAutoBugCapture;
-(int)initEnrollOperation:(id)arg0 biometricType:(int)arg1 userID:(unsigned int)arg2 options:(id)arg3 client:(id)arg4 ;
-(int)initMatchOperation:(id)arg0 filter:(id)arg1 options:(id)arg2 client:(id)arg3 ;
-(int)initPresenceDetectOperation:(id)arg0 options:(id)arg1 client:(id)arg2 ;
-(int)isPeriocularEnrollmentSupported:(*BOOL)arg0 withClient:(id)arg1 ;
-(int)loadCatacomb;
-(int)loadCatacombAfterFirstUnlock;
-(int)loadCatacombForComponent:(id)arg0 ;
-(int)loadCatacombForUser:(unsigned int)arg0 ;
-(int)logCatacombInfo:(id)arg0 data:(id)arg1 ;
-(int)match:(id)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)parseAuthDict:(id)arg0 toAuthData:(struct ? *)arg1 ;
-(int)pauseBioOperation:(id)arg0 ;
-(int)pauseFaceDetectTimer:(BOOL)arg0 withClient:(id)arg1 ;
-(int)performCancelCommand;
-(int)performCompleteSaveCatacombCommand:(id)arg0 outBuffer:(id)arg1 ;
-(int)performConfirmSaveCatacombCommand:(id)arg0 ;
-(int)performDisplayStatusChangedCommand:(BOOL)arg0 ;
-(int)performDropUnlockTokenCommand;
-(int)performEnrollCommand:(id)arg0 ;
-(int)performForceBioLockoutCommand:(unsigned int)arg0 ;
-(int)performGetBiometrickitdInfoCommand:(struct ? *)arg0 ;
-(int)performGetCatacombHashCommand:(unsigned int)arg0 outHash:(*id)arg1 ;
-(int)performGetCatacombStateCommand:(id)arg0 ;
-(int)performGetCatacombUUIDCommand:(unsigned int)arg0 outUUID:(*id)arg1 ;
-(int)performGetDeviceHardwareStateCommand:(*unsigned int)arg0 ;
-(int)performGetFreeIdentityCountCommand:(unsigned int)arg0 outCount:(*unsigned int)arg1 ;
-(int)performGetIdentitiesListCommand:(unsigned int)arg0 outBuffer:(id)arg1 ;
-(int)performGetLastMatchEventCommand:(struct ? *)arg0 ;
-(int)performGetProtectedConfigCommand:(unsigned int)arg0 outSetCfg:(*id)arg1 outEffectiveCfg:(*id)arg2 ;
-(int)performGetSKSLockStateCommand:(unsigned int)arg0 outState:(*unsigned int)arg1 ;
-(int)performGetSystemProtectedConfigCommand:(*id)arg0 ;
-(int)performGetTemplatesValidityCommand:(unsigned int)arg0 isValid:(*BOOL)arg1 ;
-(int)performIsXARTAvailableCommand:(*BOOL)arg0 ;
-(int)performLoadBioLockoutRecordCommand:(id)arg0 ;
-(int)performLoadCatacombCommand:(id)arg0 inData:(id)arg1 ;
-(int)performMatchCommand:(id)arg0 ;
-(int)performNoCatacombCommand:(unsigned int)arg0 ;
-(int)performPrepareSaveCatacombCommand:(id)arg0 outDataSize:(*unsigned int)arg1 ;
-(int)performPresenceDetectCommand:(id)arg0 ;
-(int)performRemoveIdentityCommand:(struct ? *)arg0 ;
-(int)performRemoveUserDataCommand:(unsigned int)arg0 ;
-(int)performRequestMaxIdentityCountCommand:(*unsigned int)arg0 ;
-(int)performRequestMessageDataCommand:(NSUInteger)arg0 size:(NSUInteger)arg1 outData:(*id)arg2 ;
-(int)performSaveBioLockoutRecordCommand:(id)arg0 ;
-(int)performSetProtectedConfigCommand:(unsigned int)arg0 cfg:(id)arg1 authData:(struct ? *)arg2 ;
-(int)performSetSystemProtectedConfigCommand:(id)arg0 authData:(struct ? *)arg1 ;
-(int)processBioOperation:(id)arg0 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned int)arg0 failed:(*BOOL)arg1 clear:(BOOL)arg2 withClient:(id)arg3 ;
-(int)readCatacombState;
-(int)registerDSID:(NSUInteger)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)registerStoreToken:(id)arg0 withClient:(id)arg1 ;
-(int)removeAllIdentitiesForUser:(unsigned int)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)removeIdentity:(id)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)removePeriocularTemplatesWithOptions:(id)arg0 withClient:(id)arg1 ;
-(int)removeUser:(unsigned int)arg0 ;
-(int)resetAppleConnectCounterWithClient:(id)arg0 ;
-(int)restoreAndSyncTemplates;
-(int)saveCatacomb;
-(int)saveCatacombForComponents:(id)arg0 ;
-(int)saveCatacombForIdentity:(id)arg0 ;
-(int)saveCatacombIfDirtyWithInterval:(CGFloat)arg0 andDelay:(CGFloat)arg1 ;
-(int)saveTemplateListAfterTemplateUpdate;
-(int)serviceStatus:(unsigned int)arg0 version:(unsigned int)arg1 ordinal:(NSUInteger)arg2 data:(id)arg3 timestamp:(NSUInteger)arg4 ;
-(int)setAppleMesaSEPLoggingLevel;
-(int)setDebugImages:(BOOL)arg0 withClient:(id)arg1 ;
-(int)setProtectedConfiguration:(id)arg0 forUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)setSystemProtectedConfiguration:(id)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)setTemplate:(id)arg0 forIdentity:(id)arg1 withClient:(id)arg2 ;
-(int)setUserDSID:(NSUInteger)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)startBioOperation:(id)arg0 ;
-(int)startEnrollOperation:(id)arg0 ;
-(int)startMatchOperation:(id)arg0 ;
-(int)startNewMatchAttemptWithClient:(id)arg0 ;
-(int)startPresenceDetectOperation:(id)arg0 ;
-(int)suspendEnrollment:(BOOL)arg0 withClient:(id)arg1 ;
-(int)syncTemplateListForUser:(unsigned int)arg0 ;
-(int)unarchiveCatacombDataForComponent:(id)arg0 fromUnarchiver:(id)arg1 secureData:(*id)arg2 identities:(*id)arg3 ;
-(int)updateIdentity:(id)arg0 withOptions:(id)arg1 withClient:(id)arg2 ;
-(int)updatePropertiesOfIdentities;
-(int)writeStringToPersistentLog:(id)arg0 ;
-(struct os_state_data_s *)osStateHandler:(struct os_state_hints_s *)arg0 ;
-(unsigned int)serviceConnect;
-(void)addIdentityObject:(id)arg0 ;
-(void)addIdentityObjects:(id)arg0 ;
-(void)clearTemplateList;
-(void)clearTemplateListForUser:(unsigned int)arg0 ;
-(void)dealloc;
-(void)deleteUnusedCatacombFiles;
-(void)disconnectingClient:(id)arg0 ;
-(void)doSharedMemoryTransfers;
-(void)enrollFeedback:(id)arg0 withTimestamp:(NSUInteger)arg1 ;
-(void)enrollResult:(id)arg0 withTimestamp:(NSUInteger)arg1 ;
-(void)enrollUpdate:(id)arg0 withTimestamp:(NSUInteger)arg1 ;
-(void)handleSharedMemoryTransfer:(unsigned int)arg0 withHeader:(id)arg1 data:(id)arg2 ;
-(void)logCatacombHashForUser:(unsigned int)arg0 catacombHash:(id)arg1 ;
-(void)logCatacombUUIDForUser:(unsigned int)arg0 catacombUUID:(id)arg1 ;
-(void)matchResult:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)notifyAppIsInactive:(BOOL)arg0 withClient:(id)arg1 ;
-(void)postGeneralLockoutStateNotification;
-(void)registerDelegate:(BOOL)arg0 withClient:(id)arg1 ;
-(void)removeBioOperationOfClient:(id)arg0 ;
-(void)removeIdentityObject:(id)arg0 ;
-(void)resumeQueuedBioOperation;
-(void)sendStatusMessage:(unsigned int)arg0 toClient:(id)arg1 ;
-(void)serviceStatus:(unsigned int)arg0 type:(unsigned int)arg1 inValue:(*void)arg2 ;
-(void)statusMessage:(unsigned int)arg0 withData:(id)arg1 timestamp:(NSUInteger)arg2 ;
-(void)stopBioOperationsAfterReconnect;
-(void)suspendAllConnections:(BOOL)arg0 ;
-(void)switchToNextBioOperation:(BOOL)arg0 ;
-(void)timestampEvent:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 ;
-(void)updateActiveOperationNotification;
-(void)updateActiveOperationNotificationWithOverride:(int)arg0 ;
-(void)updateEnrollmentChangedNotification:(BOOL)arg0 ;
-(void)updateExpressModeState;
-(void)updateExpressModeStateNotification;
-(void)updateExpressModeStateWithEnrollmentCount:(unsigned int)arg0 ;
-(void)updateExpressModeStateWithLockoutState:(unsigned int)arg0 ;
-(void)updateLockoutStateNotification:(unsigned int)arg0 ;
-(void)wakeGestureManager:(id)arg0 didUpdateWakeGesture:(NSInteger)arg1 ;


@end


#endif