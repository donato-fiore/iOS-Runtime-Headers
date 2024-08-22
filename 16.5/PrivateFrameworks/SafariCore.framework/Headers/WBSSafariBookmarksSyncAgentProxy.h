// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAFARIBOOKMARKSSYNCAGENTPROXY_H
#define WBSSAFARIBOOKMARKSSYNCAGENTPROXY_H

@class NSXPCConnection, NSString;
@protocol WBSSafariBookmarksSyncAgentProtocol;

#import <Foundation/Foundation.h>


@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>



@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection; // ivar: _safariBookmarksSyncAgentConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProxy;
-(id)init;
-(void)beginMigrationFromDAV;
-(void)clearLocalDataIncludingMigrationState:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)collectDiagnosticsDataWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackgroundImageDirectory;
-(void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id)arg0 ;
-(void)deleteCloudExtensionDevicesWithUUIDStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id)arg0 ;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteDevicesWithUUIDStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)deletePerSiteSettingsSyncData;
-(void)fetchCloudSettingsChangesImmediately;
-(void)fetchCloudTabDevicesAndCloseRequests;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(id)arg0 ;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id)arg0 ;
-(void)fetchTabGroupEntitiesWithCompletion:(id)arg0 ;
-(void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id)arg0 ;
-(void)getCloudExtensionStatesWithCompletionHandler:(id)arg0 ;
-(void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id)arg0 ;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(id)arg0 ;
-(void)getCloudTabDevicesWithCompletionHandler:(id)arg0 ;
-(void)migrateToCloudKitWithCompletionHandler:(id)arg0 ;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)registerForPushNotificationsIfNeeded;
-(void)resetToDAVDatabaseWithCompletionHandler:(id)arg0 ;
-(void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)arg0 successCompletionHandler:(id)arg1 ;
-(void)saveCloudSettingWithDictionaryRepresentation:(id)arg0 successCompletionHandler:(id)arg1 ;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg0 closeRequestUUIDString:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveExtensionDeviceWithDictionaryRepresentation:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveExtensionStatesWithDictionaryRepresentation:(id)arg0 forDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg0 deviceUUIDString:(id)arg1 completionHandler:(id)arg2 ;
-(void)scheduleCloudBackgroundImageSaveWithURL:(id)arg0 isLightAppearance:(BOOL)arg1 successCompletionHandler:(id)arg2 ;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg0 ;
-(void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id)arg0 ;
-(void)syncDownSafariSettingsSyncWithCompletion:(id)arg0 ;
-(void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id)arg0 ;
-(void)syncUpSafariSettingsSyncWithCompletion:(id)arg0 ;
-(void)triggerImmediateBackgroundImageSaveIfApplicable;
-(void)triggerSafariTabGroupSync;
-(void)userAccountDidChange:(NSInteger)arg0 ;
-(void)userDidUpdateBookmarkDatabase;


@end


#endif