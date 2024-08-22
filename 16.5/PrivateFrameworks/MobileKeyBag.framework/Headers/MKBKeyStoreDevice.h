// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKBKEYSTOREDEVICE_H
#define MKBKEYSTOREDEVICE_H


#import <Foundation/Foundation.h>


@interface MKBKeyStoreDevice : NSObject



+(id)sharedService;
-(BOOL)getDeviceLockStateForUser:(int)arg0 extendedState:(BOOL)arg1 withLockStateInfo:(*int)arg2 ;
-(id)_CreateMKBServerConnection;
-(id)copySytemSecretBlob;
-(id)getBackupkeyForVolume:(id)arg0 andCryptoID:(NSUInteger)arg1 withreturnValue:(*int)arg2 ;
-(id)getFileHandleForData:(id)arg0 ;
-(id)getLockStateForUser:(int)arg0 ;
-(int)ChangeSystemSecretWithEscrow:(id)arg0 FromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueDats:(id)arg3 withKeepState:(int)arg4 ;
-(int)Event:(int)arg0 ;
-(int)SeshatDebug:(int)arg0 ;
-(int)SeshatEnroll:(id)arg0 ;
-(int)SeshatRecover:(id)arg0 ;
-(int)SeshatUnlock:(id)arg0 ;
-(int)addPersonaKeyForUserSession:(unsigned int)arg0 withSecret:(id)arg1 withPersonaUUIDString:(id)arg2 forPath:(id)arg3 ;
-(int)backupUUIDForVolume:(id)arg0 bagUUID:(*id)arg1 ;
-(int)changeClassKeysGenerationWithSecret:(id)arg0 withGenerationOption:(int)arg1 ;
-(int)changeSystemSecretFromOldPasscode:(id)arg0 ToNew:(id)arg1 withOpaqueData:(id)arg2 ;
-(int)createKeybagForUserSession:(id)arg0 withSessionUID:(int)arg1 WithSecret:(id)arg2 withGracePeriod:(int)arg3 withOpaqeStuff:(id)arg4 ;
-(int)createSyncBagForUserSession:(id)arg0 withSessionUID:(int)arg1 ;
-(int)deleteKeybagForUserSession:(int)arg0 ;
-(int)disableBackupForVolume:(id)arg0 ;
-(int)enableBackupForVolume:(id)arg0 withSecret:(id)arg1 bagData:(*id)arg2 ;
-(int)isKeyRollingWithKeyStatus:(*int)arg0 ;
-(int)loadKeybagForUserSession:(id)arg0 withSessionID:(int)arg1 withSecret:(id)arg2 shouldSetGracePeriod:(BOOL)arg3 withGracePeriod:(int)arg4 isInEarlyStar:(BOOL)arg5 ;
-(int)loadSyncBagForUserSession:(id)arg0 withSessionUID:(int)arg1 ;
-(int)migrateFS;
-(int)passcodeUnlockFailed;
-(int)passcodeUnlockStart;
-(int)passcodeUnlockSuccess;
-(int)registerOTABackup:(id)arg0 withSecret:(id)arg1 ;
-(int)removePersonaKeyForUserSession:(unsigned int)arg0 withPersonaUUIDString:(id)arg1 withVolumeUUIDString:(id)arg2 ;
-(int)removeSyncBagForUserSession:(id)arg0 withSessionUID:(int)arg1 ;
-(int)setVolumeToPersona:(id)arg0 withPersonaString:(id)arg1 ;
-(int)startBackupSessionForVolume:(id)arg0 ;
-(int)stashCommit:(unsigned int)arg0 WithFlags:(unsigned int)arg1 ;
-(int)stashCreateWithSecret:(id)arg0 withMode:(int)arg1 withUID:(unsigned int)arg2 WithFlags:(unsigned int)arg3 ;
-(int)stashDestroy;
-(int)stashVerifywithValidity:(*int)arg0 WithUID:(unsigned int)arg1 WithFlags:(unsigned int)arg2 ;
-(int)stopBackupSessionForVolume:(id)arg0 ;
-(int)unloadKeybagForUserSession:(int)arg0 ;
-(int)unloadSyncBagForUserSession:(id)arg0 withSessionUID:(int)arg1 ;
-(int)verifySyncBagForUserSession:(id)arg0 withSessionUID:(int)arg1 ;


@end


#endif