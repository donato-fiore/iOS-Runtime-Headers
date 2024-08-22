// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPPANELLAUNCHRATIOLOGGER_H
#define ATXAPPPANELLAUNCHRATIOLOGGER_H


#import <Foundation/Foundation.h>


@interface ATXAppPanelLaunchRatioLogger : NSObject



+(id)_getOrCreateDataDictionaryFromDefaults:(id)arg0 ;
+(int)_homeScreenLocationFromPageIndex:(NSUInteger)arg0 ;
+(void)_logRatioMetricToTracker:(id)arg0 location:(int)arg1 ratioType:(int)arg2 numAppLaunches:(NSUInteger)arg3 numAppsShown:(NSUInteger)arg4 ;
+(void)_writeDataDictionaryToDefaults:(id)arg0 dataDictionary:(id)arg1 ;
+(void)logAppPanelAppLaunchWithSBPageIndex:(NSUInteger)arg0 ;
+(void)logAppPanelAppLaunchWithSBPageIndex:(NSUInteger)arg0 userDefaults:(id)arg1 ;
+(void)logCountedAppLaunchesToEventTracker;
+(void)logCountedAppLaunchesToEventTracker:(id)arg0 homeScreenConfigCache:(id)arg1 userDefaults:(id)arg2 ;
+(void)logCountedAppLaunchesToEventTracker:(id)arg0 homeScreenPage:(id)arg1 dataDictionary:(id)arg2 ;
+(void)logCountedDockLaunchesToEventTracker:(id)arg0 dockAppList:(id)arg1 dataDictionary:(id)arg2 ;
+(void)logNonAppPanelAppLaunchFromDock;
+(void)logNonAppPanelAppLaunchFromDockWithUserDefaults:(id)arg0 ;
+(void)logNonAppPanelAppLaunchWithSBPageIndex:(NSUInteger)arg0 ;
+(void)logNonAppPanelAppLaunchWithSBPageIndex:(NSUInteger)arg0 userDefaults:(id)arg1 ;


@end


#endif