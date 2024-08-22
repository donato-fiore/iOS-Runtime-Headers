// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCLOUDSTORAGESETTINGSLISTENER_H
#define ATXCLOUDSTORAGESETTINGSLISTENER_H

@protocol ATXCloudStorageSettingsDelegate;

#import <Foundation/Foundation.h>


@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) NSObject<ATXCloudStorageSettingsDelegate> *delegate; // ivar: _delegate


+(BOOL)isBackupForContactsEnabled;
+(BOOL)isBackupForSiriEnabled;
+(id)sharedInstance;
-(id)init;
-(void)handleBackupPreferencesDidChange;
-(void)handleDeleteDataRequest;
-(void)registerForCloudStorageDeletedByUserNotification;
-(void)registerForCloudStorageSettingsNotifications;
-(void)registerForCloudSyncPreferenceDidChangeNotification;


@end


#endif