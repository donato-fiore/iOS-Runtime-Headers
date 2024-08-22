// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UMXPCSERVER_H
#define UMXPCSERVER_H

@class NSData, NSString, NSDictionary, NSMutableArray, NSXPCConnection, NSXPCListener;
@protocol NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private, UMSideEffectsProviding;

#import <Foundation/Foundation.h>


@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private>



@property (copy, nonatomic) id *bubblePopHandler; // ivar: _bubblePopHandler
@property (retain, nonatomic) NSData *contextData; // ivar: _contextData
@property (nonatomic) BOOL currentlyBroadcastingWillSwitchToUser; // ivar: _currentlyBroadcastingWillSwitchToUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didBroadcastUploadContent; // ivar: _didBroadcastUploadContent
@property (nonatomic) BOOL didBroadcastWillSwitchToUser; // ivar: _didBroadcastWillSwitchToUser
@property (nonatomic) BOOL didRegisterPersonaCalbackStakeholder; // ivar: _didRegisterPersonaCalbackStakeholder
@property (nonatomic) BOOL didRegisterStakeholder; // ivar: _didRegisterStakeholder
@property (nonatomic) BOOL didSendTasks; // ivar: _didSendTasks
@property (copy, nonatomic) id *directSwitchCompletionHandler; // ivar: _directSwitchCompletionHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int interruptionRetryCount; // ivar: _interruptionRetryCount
@property (copy, nonatomic) id *loginUICheckinSessionCompletionHandler; // ivar: _loginUICheckinSessionCompletionHandler
@property (copy, nonatomic) id *logoutToLoginSessionCompletionHandler; // ivar: _logoutToLoginSessionCompletionHandler
@property (retain, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (retain, nonatomic) NSData *passcodeData; // ivar: _passcodeData
@property (retain, nonatomic) NSDictionary *personaProfileDict; // ivar: _personaProfileDict
@property (copy, nonatomic) id *personaRegistrationCompletionHandler; // ivar: _personaRegistrationCompletionHandler
@property (retain, nonatomic) NSDictionary *personaSpec; // ivar: _personaSpec
@property (weak, nonatomic) id *personaStakeholder; // ivar: _personaStakeholder
@property (weak, nonatomic) id *personaUpdateCallbackStakeholder; // ivar: _personaUpdateCallbackStakeholder
@property (retain, nonatomic) NSDictionary *preferencesDict; // ivar: _preferencesDict
@property (copy, nonatomic) id *provisionCompletionHandler; // ivar: _provisionCompletionHandler
@property (retain, nonatomic) NSDictionary *provisionDict; // ivar: _provisionDict
@property (copy, nonatomic) id *registrationCompletionHandler; // ivar: _registrationCompletionHandler
@property (retain, nonatomic) NSObject<UMSideEffectsProviding> *se; // ivar: _se
@property (weak, nonatomic) id *stakeholder; // ivar: _stakeholder
@property (nonatomic) NSUInteger stakeholderType; // ivar: _stakeholderType
@property (readonly) Class superclass;
@property (copy, nonatomic) id *suspendQuotasCompletionHandler; // ivar: _suspendQuotasCompletionHandler
@property (retain, nonatomic) NSMutableArray *switchBlockingTasks; // ivar: _switchBlockingTasks
@property (copy, nonatomic) id *switchCompletionHandler; // ivar: _switchCompletionHandler
@property (retain, nonatomic) NSMutableArray *syncTasks; // ivar: _syncTasks
@property (retain, nonatomic) NSString *unregistrationReason; // ivar: _unregistrationReason
@property (nonatomic) NSUInteger unregistrationStatus; // ivar: _unregistrationStatus
@property (copy, nonatomic) id *uploadContentCompletionHandler; // ivar: _uploadContentCompletionHandler
@property (copy, nonatomic) id *willSwitchCompletionHandler; // ivar: _willSwitchCompletionHandler
@property (nonatomic) NSUInteger willSwitchToUserAddedTaskCount; // ivar: _willSwitchToUserAddedTaskCount
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


+(id)sharedServer;
-(BOOL)dataMigrationSetup:(id)arg0 WithPasscode:(id)arg1 withError:(*id)arg2 ;
-(BOOL)deleteSecureBackupBlobwithError:(*id)arg0 ;
-(BOOL)isDeviceInLoginSessionWithReturnedError:(*id)arg0 ;
-(BOOL)isLoginWindowWithError:(*id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)switchToLoginWindowWithError:(*id)arg0 ;
-(BOOL)switchUserSession:(id)arg0 withOpaqueData:(id)arg1 withreturnedError:(*id)arg2 ;
-(id)_createUMServerSyncConnection;
-(id)_registerPersonaListObserver:(id)arg0 withMachService:(id)arg1 ;
-(id)configureLoginWindow:(int)arg0 withError:(*id)arg1 ;
-(id)fetchListOfPersonasSynchronousWithError:(*id)arg0 ;
-(id)fetchPersonaSynchronous:(id)arg0 WithError:(*id)arg1 ;
-(id)foregroundUserSessionAtrributesWithReturnedError:(*id)arg0 ;
-(id)grantSandboxExtensionForPersonaWithUniqueString:(id)arg0 ;
-(id)init;
-(id)listSyncServicesWithReturnedError:(id)arg0 withError:(*id)arg1 ;
-(id)loadUserSession:(id)arg0 WithPasscode:(id)arg1 withError:(*id)arg2 ;
-(id)registerPersonaUpdateCallbackWithMachService:(id)arg0 ;
-(id)retrieveSecureBackupBlobwithError:(*id)arg0 ;
-(id)userSessionAttributesForSession:(id)arg0 WithReturnedError:(*id)arg1 ;
-(int)_pid;
-(int)currentSyncBubbledIDWithReturnedError:(*id)arg0 ;
-(int)foreGroundUserIDWithError:(*id)arg0 ;
-(int)personaSynchronousLoginWithODuuid:(id)arg0 withUid:(unsigned int)arg1 ;
-(int)personaSynchronousLogoutWithODuuid:(id)arg0 withUid:(unsigned int)arg1 ;
-(void)_abortIfWeDoNotHaveAStakeholder;
-(void)_abortIfWeDoNotHaveASyncStakeholder;
-(void)_broadcastReadyToSwitchToLoginSession:(id)arg0 ;
-(void)_broadcastReadyToSwitchToUser:(id)arg0 ;
-(void)_broadcastWillSwitchToUser:(id)arg0 ;
-(void)_broadcastpersonaListDidUpdate;
-(void)_registerStakeholder:(id)arg0 ;
-(void)_sendXPCMessageToServerOfType:(NSUInteger)arg0 ;
-(void)_sendXPCMessageToServerOfType:(NSUInteger)arg0 backingObject:(id)arg1 ;
-(void)_setUpUMServerXPCConnectionIfNeeded:(id)arg0 isOutgoingConnection:(BOOL)arg1 ;
-(void)_tearDownConnectionToUMServer;
-(void)addTask:(id)arg0 ;
-(void)bubbleDidPop;
-(void)createUserPersona:(id)arg0 passcodeData:(id)arg1 passcodeDataType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteUserPersona:(id)arg0 passcodeData:(id)arg1 completionHandler:(id)arg2 ;
-(void)deviceLoginSessionStateDidUpdate;
-(void)directSwitchToUser:(id)arg0 passcodeData:(id)arg1 context:(id)arg2 preferences:(id)arg3 completionHandler:(id)arg4 ;
-(void)disableUserPersona:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAsidMapwithCompletionHandler:(id)arg0 ;
-(void)fetchBundleIdentifierForPersona:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchListOfAllUsersPersonasWithCompletionHandler:(id)arg0 ;
-(void)fetchListOfPersonasWithCompletionHandler:(id)arg0 ;
-(void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(id)arg0 ;
-(void)fetchPersona:(id)arg0 completionHandler:(id)arg1 ;
-(void)launchPersonaCallback;
-(void)loginUICheckInWithCompletionHandler:(id)arg0 ;
-(void)logoutToLoginSessionWithCompletionHandler:(id)arg0 ;
-(void)personaListDidUpdateCompletionHandler:(id)arg0 ;
-(void)personaUpdateCallbackForMachServiceCompletionHandler:(id)arg0 ;
-(void)readyToSwitchToLoginSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg0 ;
-(void)registerPersonaListUpdateObserver:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerPersonaListUpdateObserver:(id)arg0 withMachService:(id)arg1 completionHandler:(id)arg2 ;
-(void)registerUserSwitchStakeHolder:(id)arg0 ;
-(void)registerUserSwitchStakeHolder:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerUserSyncStakeholder:(id)arg0 withMachServiceName:(id)arg1 ;
-(void)removeTask:(id)arg0 ;
-(void)resumeQuotas;
-(void)resumeSync;
-(void)setBundlesIdentifiers:(id)arg0 forUniquePersona:(id)arg1 completionHandler:(id)arg2 ;
-(void)setMultiPersonaBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupUMUserSessionProvisioning:(id)arg0 WithCompletionHandler:(id)arg1 ;
-(void)suspendQuotasWithCompletionHandler:(id)arg0 ;
-(void)switchToLoginUserWithCompletionHandler:(id)arg0 ;
-(void)switchToLoginUserWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)switchToUser:(id)arg0 passcodeData:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)switchToUser:(id)arg0 passcodeData:(id)arg1 context:(id)arg2 preferences:(id)arg3 completionHandler:(id)arg4 ;
-(void)terminateSyncWithCompletionHandler:(id)arg0 ;
-(void)unregisterStakeHolder:(id)arg0 status:(NSUInteger)arg1 reason:(id)arg2 ;
-(void)uploadContentWithCompletionHandler:(id)arg0 ;
-(void)willSwitchToUser:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif