// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBBEHAVIOROPTIONS_H
#define MBBEHAVIOROPTIONS_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MBConnection.h"

@interface MBBehaviorOptions : NSObject

@property (nonatomic) BOOL backupFromLocalSnapshot;
@property (retain, nonatomic) NSMutableDictionary *cachedPrefs; // ivar: _cachedPrefs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedPrefsQueue; // ivar: _cachedPrefsQueue
@property (copy, nonatomic) NSString *cloudKitContainerName;
@property (retain, nonatomic) MBConnection *conn; // ivar: _conn
@property (nonatomic) BOOL flushLogMessages; // ivar: _flushLogMessages
@property (nonatomic) NSInteger manifestPageSize;
@property (nonatomic) NSInteger maxBatchCount;
@property (readonly, nonatomic) NSInteger maxBatchFetchAssetSize;
@property (readonly, nonatomic) NSInteger maxBatchSaveAssetSize;
@property (nonatomic) NSInteger maxBatchSize;
@property (copy, nonatomic) NSString *minimumBuildVersionForFullBackup;
@property (nonatomic) NSInteger recordSaveAttempts;
@property (nonatomic) BOOL shouldKeepFileSystemSnapshotAfterBackupFailure;
@property (nonatomic) BOOL shouldKeepFileSystemSnapshotAfterBackupSuccess;
@property (nonatomic) BOOL snapshotAfterForegroundRestore;
@property (nonatomic) int sqlBatchCount;
@property (nonatomic) CGFloat sqlBatchTime;
@property (nonatomic) BOOL sqlTrace;
@property (nonatomic) BOOL useABC;
@property (nonatomic) BOOL useBackgroundOperationsForBackup;
@property (readonly, nonatomic) BOOL usePowerLog;
@property (nonatomic) BOOL warnForLateiTunesBackups; // ivar: _warnForLateiTunesBackups


+(id)sharedOptions;
-(BOOL)_getBoolOptionForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)enableSQLiteArchivingWithDefaultValue:(BOOL)arg0 ;
-(BOOL)fixOwnershipOnFileScanWithDefaultValue:(BOOL)arg0 ;
-(BOOL)validateSignatureOnRestoreWithDefaultValue:(BOOL)arg0 ;
-(CGFloat)SQLiteSpaceSavingsThresholdWithDefaultValue:(CGFloat)arg0 ;
-(CGFloat)_getDoubleOptionForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(id)_behaviorContainerOptionForKey:(id)arg0 ;
-(id)_behaviorOptionForKey:(id)arg0 ;
-(id)_getArrayOptionForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)_getStringOptionForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)_getStringOptionLockedForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)init;
-(int)_getIntOptionForKey:(id)arg0 defaultValue:(int)arg1 ;
-(int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg0 ;
-(int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)arg0 ;
-(int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg0 ;
-(int)validateFileEncodingWithDefaultValue:(int)arg0 ;
-(void)_setPref:(id)arg0 forKey:(id)arg1 ;
-(void)_startListeningForNotifications;
-(void)setSQLTrace:(BOOL)arg0 ;
-(void)setmaxBatchFetchAssetSize:(NSInteger)arg0 ;
-(void)setmaxBatchSaveAssetSize:(NSInteger)arg0 ;


@end


#endif