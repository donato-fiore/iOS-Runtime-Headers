// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPINSTALLMONITOR_H
#define _ATXAPPINSTALLMONITOR_H

@class NSDictionary, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXAppInfoManager.h"
#import "ATXWebClipDataStore.h"
#import "ATXHistogramBundleIdTable.h"
#import "_ATXAppIconState.h"

@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppInfoManager *_appInfoManager;
    ATXWebClipDataStore *_webClipDataStore;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
    _ATXAppIconState *_appIconState;
    NSDictionary *_assetData;
    NSObject<OS_dispatch_queue> *_installQueue;
    id *_updateCompletionBlock;
}


@property (retain, nonatomic) NSSet *azulNewAppSet; // ivar: _azulNewAppSet


+(id)appDirectoryAppCategoryMappings;
+(id)appInfoDictWithBackDate:(BOOL)arg0 assetData:(id)arg1 azulNewAppSet:(id)arg2 isFromNotification:(BOOL)arg3 newApps:(id)arg4 ;
+(id)removeIntersectionBetweenSet:(id)arg0 set:(id)arg1 ;
-(BOOL)restoreInProgress;
-(id)_appInfoDictWithBackDate:(BOOL)arg0 isFromNotification:(BOOL)arg1 newApps:(id)arg2 ;
-(id)_fetchAllApps;
-(id)_fetchAllAppsFromDatastore;
-(id)_fetchAllAppsWithInstallDateFromDatastore;
-(id)init;
-(id)initWithAppInfoManager:(id)arg0 ;
-(id)initWithAppInfoManager:(id)arg0 histogramBundleIdTable:(id)arg1 appIconState:(id)arg2 webClipDataStore:(id)arg3 shouldSynchronousUpdate:(BOOL)arg4 ;
-(id)initWithAppInfoManager:(id)arg0 shouldSynchronousUpdate:(BOOL)arg1 ;
-(id)webClipsForRemovedApps:(id)arg0 ;
-(void)_receivedInstallNotificationWithApps:(id)arg0 placeholderInstallNotification:(BOOL)arg1 ;
-(void)_receivedUninstallNotificationWithApps:(id)arg0 placeholderUninstallNotification:(BOOL)arg1 ;
-(void)dealloc;
-(void)handleInstallationOfApps:(id)arg0 isFromNotification:(BOOL)arg1 andBackdate:(BOOL)arg2 ;
-(void)handleUninstallationOfApps:(id)arg0 ;
-(void)noSyncUpdateWithWaitTime:(NSUInteger)arg0 andBackdate:(BOOL)arg1 ;
-(void)notifyInstallationOfAppsWithInstallDictionary:(id)arg0 ;
-(void)notifyUninstallationOfAppsWithBundleIdsToRemoveSet:(id)arg0 ;
-(void)receivedInstallNotification:(id)arg0 ;
-(void)receivedStateChangeNotification:(id)arg0 ;
-(void)receivedUninstallNotification:(id)arg0 ;
-(void)setUpdateCompletionBlock:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronousUpdateAndBackdate:(BOOL)arg0 ;
-(void)synchronousUpdateWithUninstallWaitTime:(NSUInteger)arg0 andBackdate:(BOOL)arg1 ;
-(void)train;


@end


#endif