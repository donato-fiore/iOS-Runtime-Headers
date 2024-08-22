// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKBACKUPCONTROLLER_H
#define IMDCKBACKUPCONTROLLER_H

@class NSString, NSDate;
@protocol IMDXPCEventStreamHandlerDelegate;

#import <Foundation/Foundation.h>

#import "IMDCKUtilities.h"

@interface IMDCKBackupController : NSObject <IMDXPCEventStreamHandlerDelegate>



@property (weak, nonatomic) IMDCKUtilities *ckUtilities; // ivar: _ckUtilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *firstSyncDate;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL iCloudBackupsDisabled;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_canDisableiCloudBackupsAfterRestore;
-(BOOL)_currentDeviceStateIsRestore:(id)arg0 ;
-(BOOL)_deviceStateHasChanged:(id)arg0 ;
-(BOOL)_firstSyncTimeoutHasExpired;
-(BOOL)_setiCloudBackupAttribute:(BOOL)arg0 onItemAtPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)_timeIntervalFromFirstSync:(id)arg0 hasExpiredForDate:(id)arg1 ;
-(BOOL)checkDatabaseWasRestored;
-(BOOL)iCloudBackupEnabledSystemWide;
-(BOOL)pathRemovedFromBackup:(id)arg0 ;
-(BOOL)readUserDefaultBoolForKey:(id)arg0 ;
-(BOOL)setupAssistantNeedsToRun;
-(CGFloat)_firstSyncExpirationTimeInterval;
-(NSInteger)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)arg0 ;
-(NSInteger)_disableiCloudBackupIfSyncPercentageIsHighEnough:(NSInteger)arg0 totalCount:(NSInteger)arg1 ;
-(NSInteger)_readRecordCount;
-(id)_debuggingRestoreStateDescription;
-(id)_disabledDirectoryPath;
-(id)_primaryAccountAltDSID;
-(id)_readCurrentDeviceState;
-(id)_readPreviousDeviceState;
-(id)_serverBagTimeIntervalForFirstSyncTimeout;
-(id)createBackupManager;
-(id)dateOfLastBackUp;
-(id)readUserDefaultForKey:(id)arg0 ;
-(id)syncStateDebuggingInfo:(id)arg0 ;
-(void)_deviceIDFromMobileBackupManager:(*id)arg0 legacyDeviceID:(*id)arg1 ;
-(void)_enqueOperation:(id)arg0 ;
-(void)_ensureRestoredDatabaseToBackup;
-(void)_fetchCountOfSyncedCloudKitRecords:(*NSInteger)arg0 totalCount:(*NSInteger)arg1 ;
-(void)_savePreviousDeviceState:(id)arg0 ;
-(void)_saveRecordCount:(NSInteger)arg0 ;
-(void)eventStreamHandler:(id)arg0 didReceiveEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)registerForDistributedNotifications;
-(void)removePathFromiCloudBackup:(id)arg0 ;
-(void)removeUserDefault:(id)arg0 ;
-(void)sendDeviceIDToCloudKitWithCompletion:(id)arg0 ;
-(void)setUserDefaultBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)toggleiCloudBackupsIfNeeded:(id)arg0 ;
-(void)writeUserDefault:(id)arg0 forKey:(id)arg1 ;


@end


#endif