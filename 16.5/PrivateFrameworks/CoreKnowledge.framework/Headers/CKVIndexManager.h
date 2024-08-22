// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVINDEXMANAGER_H
#define CKVINDEXMANAGER_H

@class NSDate, NSMutableDictionary;
@protocol KVSkitAccessProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKVFilesystemBase.h"
#import "CKVGlobalInfoLog.h"
#import "CKVSettings.h"

@interface CKVIndexManager : NSObject <KVSkitAccessProvider>

 {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_migrationStartTime;
    NSMutableDictionary *_instanceLogCache;
    NSMutableDictionary *_readOnlyDatabaseCache;
    NSMutableDictionary *_readOnlySkitCache;
    CKVGlobalInfoLog *_globalLog;
}


@property (readonly, nonatomic) CKVSettings *settings; // ivar: _settings


+(id)sharedReaderInstance;
-(BOOL)_dataDirectoryExists:(id)arg0 ;
-(BOOL)_deleteDataForUser:(id)arg0 deviceId:(id)arg1 ifMatching:(BOOL)arg2 didDelete:(*BOOL)arg3 ;
-(BOOL)_destroySkitAtDataDirectory:(id)arg0 ;
-(BOOL)_destroySpeechProfileAtDataDirectory:(id)arg0 ;
-(BOOL)_destroyStateAtDataDirectory:(id)arg0 ;
-(BOOL)_executeDatabaseTransactionForUser:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_executeSkitRebuildTransactionAtDataDirectory:(id)arg0 description:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)_executeSkitRebuildTransactionForUser:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_initiateMigration:(BOOL)arg0 ;
-(BOOL)_purgeProfileSnapshots;
-(BOOL)_rebuildSpeechProfileForUser:(id)arg0 ;
-(BOOL)_resetAllState;
-(BOOL)_shouldCleanupDatabaseAtDataDirectory:(id)arg0 instanceLog:(id)arg1 ;
-(BOOL)_shouldRunMigration;
-(BOOL)_verifySkitAtDataDirectory:(id)arg0 description:(id)arg1 ;
-(BOOL)deleteDataForUser:(id)arg0 ;
-(BOOL)deleteDataForUser:(id)arg0 deviceId:(id)arg1 ifMatching:(BOOL)arg2 didDelete:(*BOOL)arg3 ;
-(BOOL)initiateMigration:(BOOL)arg0 ;
-(BOOL)rebuildSpeechProfileForUser:(id)arg0 ;
-(BOOL)resetAllState;
-(BOOL)setItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)submitDatabaseTransactionForUser:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)submitSkitRebuildTransactionForUser:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)supportsMultiUser;
-(BOOL)updateStoredEnablementOptions:(unsigned char)arg0 ;
-(BOOL)updateStoredLanguageCodes:(id)arg0 ;
-(id)_accessReadOnlyDatabaseForAllUsers;
-(id)_cachedReadOnlyDatabaseAccessAtDataDirectoryURL:(id)arg0 ;
-(id)_cachedReadOnlySkitAccessAtDataDirectoryURL:(id)arg0 ;
-(id)_dataDirectoryURLForUser:(id)arg0 ;
-(id)_getFilesSortedByCreationDateForDirectoryPath:(id)arg0 ;
-(id)_instanceLogAtDataDirectory:(id)arg0 ;
-(id)_localDataDirectoryURL;
-(id)_localDatabaseFileURL;
-(id)_localSkitDirectoryURL;
-(id)_openReadWriteDatabaseOrCreate:(BOOL)arg0 atDataDirectory:(id)arg1 description:(id)arg2 ;
-(id)_snapshotDirectoryURL;
-(id)_writeOnlySkitAccessAtDataDirectory:(id)arg0 description:(id)arg1 flushThreshold:(NSUInteger)arg2 ;
-(id)accessReadOnlyDatabaseForAllUsers;
-(id)accessReadOnlyDatabaseForUser:(id)arg0 ;
-(id)accessReadOnlySkitForUser:(id)arg0 ;
-(id)captureProfileSnapshot:(id)arg0 ;
-(id)findProfileSnapshotsNearDate:(id)arg0 ;
-(id)init;
-(id)initWithFilesystemBase:(id)arg0 settings:(id)arg1 isWriter:(BOOL)arg2 ;
-(id)lastMaintenanceForUser:(id)arg0 ;
-(id)storedLanguageCodes;
-(id)userIdHash:(id)arg0 ;
-(int)_protectionClassForDataDirectory:(id)arg0 ;
-(unsigned char)storedEnablementOptions;
-(unsigned short)_executeDatabaseAndSkitTransactionForUser:(id)arg0 usingBlock:(id)arg1 ;
-(unsigned short)performMaintenance;
-(unsigned short)submitDatabaseAndSkitTransactionForUser:(id)arg0 usingBlock:(id)arg1 ;
-(void)_cacheAllLocalAccess;
-(void)_cleanupSnapshotDirectory;
-(void)_clearAllCachedAccessAtDataDirectory:(id)arg0 ;
-(void)_clearAllCaches;
-(void)_clearCachedDatabaseAccessAtDataDirectory:(id)arg0 ;
-(void)_clearCachedSkitAccessAtDataDirectory:(id)arg0 ;
-(void)_loadGlobalLog;
-(void)_speechProfileAccessAtDataDirectory:(id)arg0 userId:(id)arg1 description:(id)arg2 usingBlock:(id)arg3 ;
-(void)_speechProfileAccessForUser:(id)arg0 usingBlock:(id)arg1 ;
-(void)_verifyAllManagedDataDirectories;
-(void)_verifyIndexesAtDataDirectory:(id)arg0 description:(id)arg1 userId:(id)arg2 clean:(BOOL)arg3 ;
-(void)closeAllConnections;
-(void)completeMigration;
-(void)performIndexVerification;
-(void)registerSpeechProfileUpdateForUser:(id)arg0 originAppId:(id)arg1 itemType:(NSInteger)arg2 fieldTypes:(id)arg3 options:(unsigned short)arg4 ;
-(void)resetWithFilesystemBase:(id)arg0 ;


@end


#endif