// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOREDATASTORESERVER_H
#define AVTCOREDATASTORESERVER_H

@class NSXPCStoreServer;
@protocol AVTPushNotificationsSupportDelegate, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTAvatarsDaemonServerDelegate, AVTAvatarStoreServer, AVTStoreBackend, OS_dispatch_queue, AVTBlockScheduler, AVTAvatarRecordChangeTracker, AVTCoreDataPersistentStoreLocalConfiguration, AVTAvatarsDaemonServer, AVTPBackendImageHandlingDelegate, AVTUILogger, AVTCoreDataCloudKitMirroringHandler, AVTPushNotificationsSupport, AVTCoreDataRemoteChangesObserver, AVTSyncSchedulingAuthority, AVTCoreDataStoreMaintenance;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"
#import "AVTStickerChangeObserver.h"

@interface AVTCoreDataStoreServer : NSObject <AVTPushNotificationsSupportDelegate, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTAvatarsDaemonServerDelegate, AVTAvatarStoreServer>



@property (readonly, nonatomic) NSObject<AVTStoreBackend> *backend; // ivar: _backend
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (readonly, nonatomic) NSObject<AVTBlockScheduler> *blockScheduler; // ivar: _blockScheduler
@property (readonly, nonatomic) NSObject<AVTAvatarRecordChangeTracker> *changeTracker; // ivar: _changeTracker
@property (readonly, nonatomic) NSObject<AVTCoreDataPersistentStoreLocalConfiguration> *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSObject<AVTAvatarsDaemonServer> *daemonServer; // ivar: _daemonServer
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSObject<AVTPBackendImageHandlingDelegate> *imageHandlingDelegate; // ivar: _imageHandlingDelegate
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (copy, nonatomic) id *migrationActivityCompletion; // ivar: _migrationActivityCompletion
@property (readonly, copy, nonatomic) id *migratorProvider; // ivar: _migratorProvider
@property (readonly, nonatomic) NSObject<AVTCoreDataCloudKitMirroringHandler> *mirroringHandler; // ivar: _mirroringHandler
@property (readonly, nonatomic) NSObject<AVTPushNotificationsSupport> *pushNotificationsSupport; // ivar: _pushNotificationsSupport
@property (readonly, nonatomic) NSObject<AVTCoreDataRemoteChangesObserver> *remoteChangesObserver; // ivar: _remoteChangesObserver
@property (readonly, nonatomic) NSObject<AVTSyncSchedulingAuthority> *schedulingAuthority; // ivar: _schedulingAuthority
@property (retain, nonatomic) NSXPCStoreServer *server; // ivar: _server
@property (nonatomic) BOOL setupCompleted; // ivar: _setupCompleted
@property (readonly, nonatomic) AVTStickerChangeObserver *stickerChangeObserver; // ivar: _stickerChangeObserver
@property (readonly, nonatomic) NSObject<AVTCoreDataStoreMaintenance> *storeMaintenance; // ivar: _storeMaintenance
@property (copy, nonatomic) id *userRequestedBackupActivityCompletion; // ivar: _userRequestedBackupActivityCompletion


+(BOOL)resetSyncShouldPreserveContentForReason:(NSUInteger)arg0 ;
-(BOOL)processInternalSettingsChanges:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 imageHandlingDelegate:(id)arg1 ;
// -(id)initWithLocalBackend:(id)arg0 configuration:(id)arg1 migratorProvider:(id)arg2 pushSupport:(unk)arg3 mirroringHandler:(id)arg4 schedulingAuthority:(id)arg5 remoteChangesObserver:(id)arg6 stickerChangeObserver:(id)arg7 changeTracker:(id)arg8 daemonServer:(id)arg9 storeMaintenance:(id)arg10 backgroundQueue:(id)arg11 environment:(id)arg12 imageHandlingDelegate:(id)arg13  ;
-(void)clientDidCheckInForServer:(id)arg0 ;
-(void)completeMigrationActivityIfNeeded;
-(void)completeUserRequestedBackupActivityIfNeeded;
-(void)deleteStickerRecents;
-(void)didReceivePushNotification:(id)arg0 ;
-(void)importSetupUserDataIfNeeded;
-(void)migrate;
-(void)mirroringHandler:(id)arg0 didResetSyncWithReason:(NSUInteger)arg1 ;
-(void)mirroringHandler:(id)arg0 willResetSyncWithReason:(NSUInteger)arg1 ;
-(void)scheduleExportWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 completion:(id)arg2 ;
-(void)scheduleImportDiscretionary:(BOOL)arg0 completionBlock:(id)arg1 ;
// -(void)scheduleImportExportIfRequiredWithPostImportHandler:(id)arg0 completion:(unk)arg1  ;
-(void)scheduleMigrationThen:(id)arg0 ;
-(void)scheduleSetupThen:(id)arg0 ;
-(void)scheduleUpdateThumbnails;
-(void)setupThen:(id)arg0 ;
-(void)startListening;
-(void)updateThumbnails;


@end


#endif