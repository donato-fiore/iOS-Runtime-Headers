// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAPPLICATIONAGENT_H
#define PLAPPLICATIONAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, BKSApplicationStateMonitor, RBSProcessMonitor, NSSet, NSString, NSMutableSet, NSDate;
@protocol LSApplicationWorkspaceObserverProtocol;



@interface PLApplicationAgent : PLAgent <LSApplicationWorkspaceObserverProtocol>



@property (retain) PLXPCListenerOperatorComposition *appDockingListener; // ivar: _appDockingListener
@property (retain) PLXPCListenerOperatorComposition *appPrewarmListener; // ivar: _appPrewarmListener
@property (retain) BKSApplicationStateMonitor *appStateMonitor; // ivar: _appStateMonitor
@property (retain) RBSProcessMonitor *appStateMonitorRBS; // ivar: _appStateMonitorRBS
@property (retain) NSSet *currentDisplayIdentifiers; // ivar: _currentDisplayIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableSet *keyboardPlugins; // ivar: _keyboardPlugins
@property BOOL scheduledAppCleanup; // ivar: _scheduledAppCleanup
@property (retain) NSDate *startDateForOverAllBackGroundActivity; // ivar: _startDateForOverAllBackGroundActivity
@property (retain) PLXPCListenerOperatorComposition *suggestedWidgetReloadListener; // ivar: _suggestedWidgetReloadListener
@property (readonly) Class superclass;
@property (retain) NSMutableSet *widgetPlugins; // ivar: _widgetPlugins
@property (retain) PLXPCListenerOperatorComposition *widgetStatsListener; // ivar: _widgetStatsListener
@property (retain) PLXPCListenerOperatorComposition *widgetUpdatesListener; // ivar: _widgetUpdatesListener


+(id)appNameForBundleID:(id)arg0 ;
+(id)appVersionForBundle:(id)arg0 ;
+(id)defaults;
+(id)entryAggregateDefinitionApplicationReason;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionApplicationMemory;
+(id)entryEventBackwardDefinitionWidgetStats;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionApplication;
+(id)entryEventForwardDefinitionApplicationDidUninstall;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneAllApps;
+(id)entryEventNoneAllPlugins;
+(id)entryEventNoneAppVersions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAppDocking;
+(id)entryEventPointDefinitionAppPrewarm;
+(id)entryEventPointDefinitionApplicationExitReason;
+(id)entryEventPointDefinitionSuggestedWidgetReload;
+(id)entryEventPointDefinitionWidgetUpdates;
+(id)entryEventPointDefinitions;
+(id)installedPlugins;
+(id)pluginEntryFromProxy:(id)arg0 ;
+(int)appTypeFromProxy:(id)arg0 ;
+(void)addAppVersion:(id)arg0 withVersion:(id)arg1 ;
+(void)load;
+(void)removeAppVersion:(id)arg0 forVersion:(id)arg1 ;
-(BOOL)appAnalyticsEnabled;
-(BOOL)checkAppReferenceCleanupNeeded;
-(BOOL)isAppClipWithBundleID:(id)arg0 ;
-(BOOL)isApplication:(int)arg0 ;
-(id)extensionSetWithType:(id)arg0 ;
-(id)init;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(void)appReferenceCleanup;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)buildAppVersionDictionary:(id)arg0 ;
-(void)buildQueryWithQuery:(id)arg0 withKey:(id)arg1 withValue:(id)arg2 ;
-(void)dealloc;
-(void)displayIdentifiersDidChange;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAllAppsAndVersions;
-(void)logAllPlugins;
-(void)logEventBackwardApplicationMemoryWithBundleId:(id)arg0 withSuspendedMemory:(id)arg1 withPeakMemory:(id)arg2 ;
-(void)logEventBackwardWidgetStats:(id)arg0 ;
-(void)logEventForwardApplicationDidUninstall:(id)arg0 withAppName:(id)arg1 ;
-(void)logEventPointApplication;
-(void)logEventPointApplicationExitReason:(id)arg0 ;
-(void)logEventPointApplicationForDisplayID:(id)arg0 ;
-(void)logEventPointApplicationForDisplayID:(id)arg0 withPid:(int)arg1 withState:(id)arg2 withReasons:(id)arg3 ;
-(void)logEventPointDASAppDocking:(id)arg0 ;
-(void)logEventPointDASAppPrewarm:(id)arg0 ;
-(void)logEventPointSuggestedWidgetReload:(id)arg0 ;
-(void)logEventPointWidgetUpdates:(id)arg0 ;
-(void)logInstalledAppVersionWithProxy:(id)arg0 withBundleID:(id)arg1 ;
-(void)logInstalledAppWithProxy:(id)arg0 withBundleID:(id)arg1 ;
-(void)logInstalledPlugin:(id)arg0 ;
-(void)logUninstalledApp:(id)arg0 ;
-(void)logUninstalledAppVersion:(id)arg0 ;
-(void)logUpdatedAppVersion:(id)arg0 ;
-(void)refreshAllAppsAndPlugins;


@end


#endif