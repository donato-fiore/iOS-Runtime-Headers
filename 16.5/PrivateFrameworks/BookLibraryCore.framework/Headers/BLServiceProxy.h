// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSERVICEPROXY_H
#define BLSERVICEPROXY_H

@class NSXPCConnection;
@protocol BLServiceProtocol, BLServiceProxyConnectionMonitoring, BLProgressReceiving;

#import <Foundation/Foundation.h>


@interface BLServiceProxy : NSObject <BLServiceProtocol>

 {
    os_unfair_lock_s _connectionLock;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<BLServiceProxyConnectionMonitoring> *connectionMonitor; // ivar: _connectionMonitor
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, nonatomic) NSObject<BLProgressReceiving> *progressReceiver; // ivar: _progressReceiver
@property (nonatomic) NSInteger state; // ivar: _state


-(id)_remoteObjectWithErrorHandler:(id)arg0 ;
-(id)_synchronousRemoteObjectWithErrorHandler:(id)arg0 ;
-(id)initWithError:(*id)arg0 ;
-(id)initWithProgressReceiver:(id)arg0 error:(*id)arg1 ;
-(void)_createAndStartConnection;
-(void)cancelAllActiveDownloadsWithReply:(id)arg0 ;
-(void)cancelDownloadWithID:(id)arg0 withReply:(id)arg1 ;
-(void)dealloc;
-(void)downloadWithPermlink:(id)arg0 title:(id)arg1 reply:(id)arg2 ;
-(void)fetchDownloadFromDownloadID:(id)arg0 withReply:(id)arg1 ;
-(void)fetchDownloadListWithReply:(id)arg0 ;
-(void)flushMetricsWithReply:(id)arg0 ;
-(void)getCrashSimulationOverrideValuesWithReply:(id)arg0 ;
-(void)getValueSimulateDeviceOutOfSpaceWithReply:(id)arg0 ;
-(void)migrationInfoWithStoreID:(NSInteger)arg0 withReply:(id)arg1 ;
-(void)migrationInfosWithStates:(id)arg0 withReply:(id)arg1 ;
-(void)migrationInfosWithStoreIDs:(id)arg0 withReply:(id)arg1 ;
-(void)monitorProgressWithReply:(id)arg0 ;
-(void)pauseDownloadWithID:(id)arg0 withReply:(id)arg1 ;
-(void)prepareForRemoveAppWithReply:(id)arg0 ;
-(void)processAutomaticDownloadsWithReply:(id)arg0 ;
-(void)purchaseWithRequest:(id)arg0 uiHostProxy:(id)arg1 reply:(id)arg2 ;
-(void)racGUIDForStoreID:(NSInteger)arg0 withReply:(id)arg1 ;
-(void)reloadFromServerWithReply:(id)arg0 ;
-(void)removeAllMigrationInfosExcludingStates:(id)arg0 withReply:(id)arg1 ;
-(void)removeMigrationInfoForStoreID:(NSInteger)arg0 withReply:(id)arg1 ;
-(void)removeRacGUIDForStoreID:(NSInteger)arg0 withReply:(id)arg1 ;
-(void)requestDownloadWithMetadata:(id)arg0 isRestore:(BOOL)arg1 reply:(id)arg2 ;
-(void)requestDownloadWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)requestDownloadsWithManifestRequest:(id)arg0 uiHostProxy:(id)arg1 reply:(id)arg2 ;
-(void)requestDownloadsWithMetadata:(id)arg0 areRestore:(BOOL)arg1 reply:(id)arg2 ;
-(void)requestDownloadsWithRestoreContentRequestItems:(id)arg0 reply:(id)arg1 ;
-(void)resetAllCrashSimulationOverridesWithReply:(id)arg0 ;
-(void)restartDownloadWithID:(id)arg0 withReply:(id)arg1 ;
-(void)resumeDownloadWithID:(id)arg0 withReply:(id)arg1 ;
-(void)setAutomaticDownloadEnabled:(BOOL)arg0 uiHostProxy:(id)arg1 reply:(id)arg2 ;
-(void)setMigrationState:(NSInteger)arg0 forStoreIDs:(id)arg1 withReply:(id)arg2 ;
-(void)setRacGUID:(id)arg0 forStoreID:(NSInteger)arg1 withReply:(id)arg2 ;
-(void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg0 withReply:(id)arg1 ;
-(void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg0 withReply:(id)arg1 ;
-(void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg0 withReply:(id)arg1 ;
-(void)setValueSimulateCrashAtInstallStart:(BOOL)arg0 withReply:(id)arg1 ;
-(void)setValueSimulateDeviceOutOfSpace:(BOOL)arg0 withReply:(id)arg1 ;
-(void)shutdown;


@end


#endif