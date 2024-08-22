// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAFARIBOOKMARKSSYNCAGENTPROXY_H
#define WBSSAFARIBOOKMARKSSYNCAGENTPROXY_H

@class NSXPCConnection, NSString;
@protocol WBSSafariBookmarksSyncAgentProtocol;

#import <Foundation/Foundation.h>


@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>



@property (retain) NSXPCConnection *_connection; // ivar: __connection
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
-(void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id)arg0 ;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteDevicesWithUUIDStrings:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCloudSettingsChangesImmediately;
-(void)fetchCloudTabDevicesAndCloseRequests;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(id)arg0 ;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id)arg0 ;
-(void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id)arg0 ;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(id)arg0 ;
-(void)getCloudTabDevicesWithCompletionHandler:(id)arg0 ;
-(void)migrateToCloudKitWithCompletionHandler:(id)arg0 ;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)registerForPushNotificationsIfNeeded;
-(void)resetToDAVDatabaseWithCompletionHandler:(id)arg0 ;
-(void)saveCloudBackgroundImageWithURL:(id)arg0 isLightAppearance:(BOOL)arg1 successCompletionHandler:(id)arg2 ;
-(void)saveCloudSettingWithDictionaryRepresentation:(id)arg0 successCompletionHandler:(id)arg1 ;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg0 closeRequestUUIDString:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg0 deviceUUIDString:(id)arg1 completionHandler:(id)arg2 ;
-(void)scheduleCloudBackgroundImageSaveWithURL:(id)arg0 isLightAppearance:(BOOL)arg1 successCompletionHandler:(id)arg2 ;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg0 ;
-(void)syncDownSafariSettingsSyncWithCompletion:(id)arg0 ;
-(void)syncUpSafariSettingsSyncWithCompletion:(id)arg0 ;
-(void)triggerImmediateBackgroundImageSaveIfApplicable;
-(void)triggerSafariTabGroupSync;
-(void)userAccountDidChange:(NSInteger)arg0 ;
-(void)userDidUpdateBookmarkDatabase;


@end


#endif