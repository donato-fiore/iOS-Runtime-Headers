// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKBKEYSTOREDEVICE_H
#define MKBKEYSTOREDEVICE_H


#import <Foundation/Foundation.h>


@interface MKBKeyStoreDevice : NSObject



+(id)sharedService;
-(BOOL)MKBUserSessionSetInternalTest:(BOOL)arg0 WithReturnedError:(*id)arg1 ;
-(BOOL)addSyncServiceSource:(id)arg0 ToUserSessionWithID:(int)arg1 WithReturnedError:(*id)arg2 ;
-(BOOL)deleteUserSessionBlobWithReturnedError:(*id)arg0 ;
-(BOOL)deleteUserSessionSecureBlobWithReturnedError:(*id)arg0 ;
-(BOOL)fetchReplacementVoucherPort:(unsigned int)arg0 foraccountID:(id)arg1 withTargetPort:(*unsigned int)arg2 generationSet:(BOOL)arg3 withreturnedError:(*id)arg4 ;
-(BOOL)getDeviceLockStateForUser:(int)arg0 extendedState:(BOOL)arg1 withLockStateInfo:(*int)arg2 ;
-(BOOL)isDeviceInLoginSessionWithReturnedError:(*id)arg0 ;
-(BOOL)mountUserSessionVolumeforID:(int)arg0 WithReturnedError:(*id)arg1 ;
-(BOOL)removeAllUserSyncBubbleIDsWithReturnedError:(*id)arg0 ;
-(BOOL)removeSyncServiceSource:(id)arg0 ToUserSessionWithID:(int)arg1 WithReturnedError:(*id)arg2 ;
-(BOOL)removeUserSession:(id)arg0 withreturnedError:(*id)arg1 ;
-(BOOL)setUserSessionDeviceConfigurations:(int)arg0 WithReturnedError:(*id)arg1 ;
-(BOOL)setUserSessionSecureBackupBlob:(id)arg0 WithReturnedError:(*id)arg1 ;
-(BOOL)startUserSyncBubbleToSession:(int)arg0 WithReturnedError:(*id)arg1 ;
-(BOOL)stopUserSyncBubbleToSession:(int)arg0 WithReturnedError:(*id)arg1 ;
-(BOOL)switchToLoginUIWithReturnedError:(*id)arg0 ;
-(BOOL)switchUserSession:(id)arg0 withOpaqueData:(id)arg1 withreturnedError:(*id)arg2 ;
-(BOOL)unloadUserSession:(id)arg0 withreturnedError:(*id)arg1 ;
-(BOOL)unmountUserSessionVolumeforID:(int)arg0 WithReturnedError:(*id)arg1 ;
-(id)_CreateMKBServerConnection;
-(id)configureLoginUI:(int)arg0 WithReturnedError:(*id)arg1 ;
-(id)copySytemSecretBlob;
-(id)createUserSession:(id)arg0 withSecret:(id)arg1 withOpaqueData:(id)arg2 withreturnedError:(*id)arg3 ;
-(id)foregroundUserSessionAtrributesWithReturnedError:(*id)arg0 ;
-(id)getBackupkeyForVolume:(id)arg0 andCryptoID:(NSUInteger)arg1 withreturnValue:(*int)arg2 ;
-(id)getFileHandleForData:(id)arg0 ;
-(id)getLockStateForUser:(int)arg0 ;
-(id)listAllUserSessionIDSWithReturnedError:(*id)arg0 ;
-(id)listAllUserSyncBubbleIDsWithReturnedError:(*id)arg0 ;
-(id)listSyncServiceSourcesForUserSession:(id)arg0 WithReturnedError:(*id)arg1 ;
-(id)loadUserSession:(id)arg0 withSecret:(id)arg1 withreturnedError:(*id)arg2 ;
-(id)migrateUserSession:(id)arg0 fromPath:(id)arg1 withSecret:(id)arg2 withOpaqueData:(id)arg3 withreturnedError:(*id)arg4 ;
-(id)retriveUserSessionBlobWithreturnedError:(*id)arg0 ;
-(id)retriveUserSessionSecureBlobWithreturnedError:(*id)arg0 ;
-(id)setuserSessionAttributes:(id)arg0 WithReturnedError:(*id)arg1 ;
-(id)switchBlockTasksInfoWithReturnedError:(*id)arg0 ;
-(id)userSessionAttributesForSession:(id)arg0 WithReturnedError:(*id)arg1 ;
-(id)userSessionLRUInfoWithReturnedError:(*id)arg0 ;
-(int)ChangeSystemSecretWithEscrow:(id)arg0 FromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueDats:(id)arg3 withKeepState:(int)arg4 ;
-(int)Event:(int)arg0 ;
-(int)SeshatDebug:(int)arg0 ;
-(int)SeshatEnroll:(id)arg0 ;
-(int)SeshatRecover:(id)arg0 ;
-(int)SeshatUnlock:(id)arg0 ;
-(int)backupUUIDForVolume:(id)arg0 bagUUID:(*id)arg1 ;
-(int)changeClassKeysGenerationWithSecret:(id)arg0 withGenerationOption:(int)arg1 ;
-(int)changeSystemSecretFromOldPasscode:(id)arg0 ToNew:(id)arg1 withOpaqueData:(id)arg2 ;
-(int)currentSyncBubbledIDWithReturnedError:(*id)arg0 ;
-(int)disableBackupForVolume:(id)arg0 ;
-(int)enableBackupForVolume:(id)arg0 withSecret:(id)arg1 bagData:(*id)arg2 ;
-(int)isKeyRollingWithKeyStatus:(*int)arg0 ;
-(int)limitNumberOfUserSessionsTo:(int)arg0 WithReturnedError:(*id)arg1 ;
-(int)migrateFS;
-(int)passcodeUnlockFailed;
-(int)passcodeUnlockStart;
-(int)passcodeUnlockSuccess;
-(int)registerOTABackup:(id)arg0 withSecret:(id)arg1 ;
-(int)startBackupSessionForVolume:(id)arg0 ;
-(int)stashCommit:(unsigned int)arg0 WithFlags:(unsigned int)arg1 ;
-(int)stashCreateWithSecret:(id)arg0 withMode:(int)arg1 withUID:(unsigned int)arg2 WithFlags:(unsigned int)arg3 ;
-(int)stashDestroy;
-(int)stashVerifywithValidity:(*int)arg0 WithUID:(unsigned int)arg1 WithFlags:(unsigned int)arg2 ;
-(int)stopBackupSessionForVolume:(id)arg0 ;


@end


#endif