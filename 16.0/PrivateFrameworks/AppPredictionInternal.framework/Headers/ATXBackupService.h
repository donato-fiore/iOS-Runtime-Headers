// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBACKUPSERVICE_H
#define ATXBACKUPSERVICE_H

@class NSUserDefaults, NSString;
@protocol ATXCloudStorageSettingsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXBackupFileManager.h"
#import "ATXCloudKitClient.h"
#import "ATXCloudStorageSettingsListener.h"

@interface ATXBackupService : NSObject <ATXCloudStorageSettingsDelegate>

 {
    NSUserDefaults *_atxDefaults;
}


@property (retain, nonatomic) ATXBackupFileManager *backupFileManager; // ivar: _backupFileManager
@property (retain, nonatomic) ATXCloudKitClient *ckClient; // ivar: _ckClient
@property (weak, nonatomic) ATXCloudStorageSettingsListener *cloudStorageSettingsListener; // ivar: _cloudStorageSettingsListener
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL isManatee; // ivar: _isManatee
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(BOOL)isBackupRestore;
+(BOOL)isCloudKitError:(id)arg0 ;
+(BOOL)isManateeDecryptionError:(id)arg0 ;
+(id)allErrorsFromCloudKitError:(id)arg0 ;
+(id)backupService;
+(id)queryForBackupsWithDeviceID:(id)arg0 ;
-(BOOL)retryIfNeededInResponseToError:(id)arg0 withBlock:(id)arg1 ;
-(id)initWithContainerIdentifier:(id)arg0 backupFileManager:(id)arg1 ;
-(void)backupWithCompletionHandler:(id)arg0 ;
-(void)fetchBackupAssetWithCompletionHandler:(id)arg0 ;
-(void)getDeviceIDWithCompletionHandler:(id)arg0 ;
-(void)handleDeleteDataRequest;
// -(void)initializeCloudKitClientWithCompletionHandler:(id)arg0 withRetryBlock:(unk)arg1  ;
// -(void)isManateeAvailableWithCompletionHandler:(id)arg0 withRetryBlock:(unk)arg1  ;
-(void)restoreFromBackupIfNeccessary:(id)arg0 ;
-(void)restoreFromBackupWithRetries:(NSUInteger)arg0 fromContainerID:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveBackupAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)setupRecordZoneWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateIsRestoreStarted:(BOOL)arg0 ;
-(void)writeBackupToiCloud:(id)arg0 ;


@end


#endif