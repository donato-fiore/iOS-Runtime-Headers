// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBOOKMARKSSETTINGSGATEWAY_H
#define WEBBOOKMARKSSETTINGSGATEWAY_H


#import <Foundation/Foundation.h>

#import "WebBookmarksXPCConnection.h"

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection *_connection;
}




-(id)init;
-(void)clearAllSafariHistoryWithCompletionHandler:(id)arg0 ;
-(void)deleteAllSafariSecurityOriginsWithCompletionHandler:(id)arg0 ;
-(void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id)arg0 ;
-(void)deleteSafariWebsiteDataRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(id)arg0 ;
-(void)getSafariWebDataUsageWithCompletion:(id)arg0 ;
-(void)scheduleBookmarksDatabaseMaintenance;
-(void)scheduleBookmarksDatabaseMigrationTask;
-(void)scheduleHSTSSuperCookieCleanup;
-(void)schedulePasswordIconsCleanup;


@end


#endif