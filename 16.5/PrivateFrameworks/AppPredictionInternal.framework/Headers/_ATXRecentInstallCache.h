// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXRECENTINSTALLCACHE_H
#define _ATXRECENTINSTALLCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_ATXInternalInstallNotification.h"
#import "_ATXInternalUninstallNotification.h"

@interface _ATXRecentInstallCache : NSObject {
    CGFloat _ttl;
    _ATXInternalInstallNotification *_installNotificationMonitor;
    _ATXInternalUninstallNotification *_uninstallNotificationMonitor;
    NSMutableDictionary *_recentInstallations;
}




-(id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)arg0 ;
-(id)_getRecentInstallationsMap;
-(id)allRecentlyInstalledApplications;
-(id)init;
-(id)initTrackingAppsMoreRecentThan:(CGFloat)arg0 ;
-(id)initTrackingAppsMoreRecentThan:(CGFloat)arg0 installMonitor:(id)arg1 uninstallMonitor:(id)arg2 ;
-(void)_notifiedOfInstalls:(id)arg0 ;
-(void)_notifiedOfUninstalls:(id)arg0 ;
-(void)reset;


@end


#endif