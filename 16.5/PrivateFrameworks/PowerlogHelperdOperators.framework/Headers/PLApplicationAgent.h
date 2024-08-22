// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAPPLICATIONAGENT_H
#define PLAPPLICATIONAGENT_H

@class PLAgent, RBSProcessMonitor, PLXPCListenerOperatorComposition, BKSApplicationStateMonitor, NSSet, NSString;
@protocol LSApplicationWorkspaceObserverProtocol;



@interface PLApplicationAgent : PLAgent <LSApplicationWorkspaceObserverProtocol>



@property (retain) RBSProcessMonitor *RBSAppStateMonitor; // ivar: _RBSAppStateMonitor
@property (retain) PLXPCListenerOperatorComposition *appDockingListener; // ivar: _appDockingListener
@property (retain) PLXPCListenerOperatorComposition *appPrewarmListener; // ivar: _appPrewarmListener
@property (retain) BKSApplicationStateMonitor *appStateMonitor; // ivar: _appStateMonitor
@property (retain) RBSProcessMonitor *appStateMonitorRBS; // ivar: _appStateMonitorRBS
@property (retain) NSSet *currentDisplayIdentifiers; // ivar: _currentDisplayIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PLXPCListenerOperatorComposition *liveActivityStatsListener; // ivar: _liveActivityStatsListener
@property (retain) PLXPCListenerOperatorComposition *liveActivityUpdatesListener; // ivar: _liveActivityUpdatesListener
@property (retain) PLXPCListenerOperatorComposition *posterUpdatesListener; // ivar: _posterUpdatesListener
@property BOOL scheduledAppCleanup; // ivar: _scheduledAppCleanup
@property (retain) PLXPCListenerOperatorComposition *suggestedWidgetReloadListener; // ivar: _suggestedWidgetReloadListener
@property (readonly) Class superclass;
@property (retain) PLXPCListenerOperatorComposition *systemApertureListener; // ivar: _systemApertureListener
@property (retain) PLXPCListenerOperatorComposition *widgetStatsListener; // ivar: _widgetStatsListener
@property (retain) PLXPCListenerOperatorComposition *widgetUpdatesListener; // ivar: _widgetUpdatesListener


+(BOOL)hasScreenPresence:(id)arg0 ;
+(BOOL)isVisible:(id)arg0 ;
+(id)appVersionForBundle:(id)arg0 ;
+(id)defaults;
+(id)entryAggregateDefinitionApplicationReason;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionApplicationMemory;
+(id)entryEventBackwardDefinitionWidgetStats;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionApplication;
+(id)entryEventForwardDefinitionApplicationDidUninstall;
+(id)entryEventForwardDefinitionLiveActivityStats;
+(id)entryEventForwardDefinitionSystemAperture;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneAllApps;
+(id)entryEventNoneAllPlugins;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAppDocking;
+(id)entryEventPointDefinitionAppPrewarm;
+(id)entryEventPointDefinitionApplicationExitReason;
+(id)entryEventPointDefinitionLiveActivityUpdates;
+(id)entryEventPointDefinitionPosterUpdates;
+(id)entryEventPointDefinitionSuggestedWidgetReload;
+(id)entryEventPointDefinitionWidgetUpdates;
+(id)entryEventPointDefinitions;
+(id)getReasons:(id)arg0 ;
+(id)installedPlugins;
+(id)pluginEntryFromRecord:(id)arg0 ;
+(void)addAppVersion:(id)arg0 withVersion:(id)arg1 ;
+(void)load;
+(void)removeAppVersion:(id)arg0 forVersion:(id)arg1 ;
-(BOOL)checkAppReferenceCleanupNeeded;
-(BOOL)isAppClipWithBundleID:(id)arg0 ;
-(BOOL)isApplication:(int)arg0 ;
-(id)getApplicationRecordSet:(id)arg0 ;
-(id)init;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(void)appReferenceCleanup;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)buildAppVersionDictionary:(id)arg0 ;
-(void)dealloc;
-(void)displayIdentifiersDidChange;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAllApps;
-(void)logAllPlugins;
-(void)logEventBackwardApplicationMemoryWithBundleId:(id)arg0 withSuspendedMemory:(id)arg1 withPeakMemory:(id)arg2 ;
-(void)logEventBackwardWidgetStats:(id)arg0 ;
-(void)logEventForwardApplicationDidUninstall:(id)arg0 withAppName:(id)arg1 ;
-(void)logEventForwardLiveActivityStats:(id)arg0 ;
-(void)logEventForwardSystemAperture:(id)arg0 ;
-(void)logEventPointApplication;
-(void)logEventPointApplicationExitReason:(id)arg0 ;
-(void)logEventPointApplicationForDisplayID:(id)arg0 ;
-(void)logEventPointApplicationForDisplayID:(id)arg0 withPid:(int)arg1 withState:(id)arg2 withReasons:(id)arg3 ;
-(void)logEventPointDASAppDocking:(id)arg0 ;
-(void)logEventPointDASAppPrewarm:(id)arg0 ;
-(void)logEventPointLiveActivityUpdates:(id)arg0 ;
-(void)logEventPointPosterUpdates:(id)arg0 ;
-(void)logEventPointSuggestedWidgetReload:(id)arg0 ;
-(void)logEventPointWidgetUpdates:(id)arg0 ;
-(void)logInstalledAppWithRecord:(id)arg0 withBundleID:(id)arg1 ;
-(void)logInstalledPlugin:(id)arg0 ;
-(void)logUninstalledApp:(id)arg0 ;
-(void)logUninstalledAppVersion:(id)arg0 ;
-(void)logUpdatedAppVersion:(id)arg0 ;
-(void)refreshAllAppsAndPlugins;


@end


#endif