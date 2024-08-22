// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBATTERYBREAKDOWNSERVICE_H
#define PLBATTERYBREAKDOWNSERVICE_H

@class PLService, NSSet, NSDictionary;



@interface PLBatteryBreakdownService : PLService

@property (retain, nonatomic) NSSet *deletedAppClipNames; // ivar: _deletedAppClipNames
@property (retain, nonatomic) NSSet *deletedAppNames; // ivar: _deletedAppNames
@property (retain, nonatomic) NSDictionary *givenNameToMappedName; // ivar: _givenNameToMappedName
@property (retain, nonatomic) NSDictionary *gizmoDaemonToAppBundleID; // ivar: _gizmoDaemonToAppBundleID
@property (retain, nonatomic) NSDictionary *gizmoIDSTopicToAppBundleID; // ivar: _gizmoIDSTopicToAppBundleID
@property BOOL hasHomeKitActivity; // ivar: _hasHomeKitActivity
@property (retain, nonatomic) NSDictionary *installedBundleIDToDisplayName; // ivar: _installedBundleIDToDisplayName
@property (retain, nonatomic) NSDictionary *installedPluginBundleIDToPluginEntry; // ivar: _installedPluginBundleIDToPluginEntry
@property (retain, nonatomic) NSSet *intermediateRootNodes; // ivar: _intermediateRootNodes
@property (retain, nonatomic) NSDictionary *nodeIDToNodeName; // ivar: _nodeIDToNodeName
@property (retain, nonatomic) NSSet *nonAppNames; // ivar: _nonAppNames
@property (retain, nonatomic) NSDictionary *rootNodeNameToRootNodeEnergyKey; // ivar: _rootNodeNameToRootNodeEnergyKey
@property (retain, nonatomic) NSSet *rootNodeNames; // ivar: _rootNodeNames
@property BOOL showGizmoQualifier; // ivar: _showGizmoQualifier
@property CGFloat totalEnergyDay; // ivar: _totalEnergyDay
@property CGFloat totalEnergyWeek; // ivar: _totalEnergyWeek
@property (retain, nonatomic) NSSet *webAppNames; // ivar: _webAppNames


+(BOOL)canSetQualifier:(int)arg0 forBundleID:(id)arg1 ;
+(id)appNameForBundleID:(id)arg0 ;
+(id)combineQualifiers:(id)arg0 ;
+(id)defaults;
+(id)installedPlugins;
+(id)pluginEntryFromRecord:(id)arg0 ;
+(id)rootNodeQualificationNameWithQualificationName:(id)arg0 withRootNodeName:(id)arg1 ;
+(id)whereValidName;
+(void)load;
-(BOOL)checkHomeKitEvents;
-(BOOL)inDemoMode;
-(BOOL)isBackgroundLocationUsageAlwaysEnabled:(id)arg0 withLocationDict:(id)arg1 ;
-(BOOL)isBackgroundRefreshEnabled:(id)arg0 ;
-(BOOL)isForegroundOnlyBucket:(short)arg0 ;
-(BOOL)shouldShowBatteryBreakdownWithTotalSumEnergy:(CGFloat)arg0 withtotalSumEnergyRatioCutOff:(CGFloat)arg1 ;
-(BOOL)shouldShowOngoingRestoreInsight;
-(BOOL)shouldShowUpgradeInsightWithQueryType:(int)arg0 ;
-(BOOL)shouldSuggestAutoBrightnessWithEnergyEntries:(id)arg0 andSavedEnergyPercent:(*CGFloat)arg1 ;
-(BOOL)shouldSuggestAutoLockWithEnergyEntries:(id)arg0 andSavedEnergyPercent:(*CGFloat)arg1 ;
-(BOOL)shouldSuggestReduceBrightnessWithEnergyEntries:(id)arg0 andSavedEnergyPercent:(*CGFloat)arg1 ;
-(BOOL)showRootNodesInInternal;
-(BOOL)wasGizmoConnectedInRange:(struct _PLTimeIntervalRange )arg0 ;
-(CGFloat)computeTotalBackgroundDuration:(id)arg0 ;
-(CGFloat)computeTotalForegroundDuration:(id)arg0 ;
-(CGFloat)getLastUpgradeTimestamp;
-(CGFloat)getfirstEntryTimestampFromDb;
-(CGFloat)nonAppRuntimeWithEventForwardTableName:(id)arg0 withRange:(struct _PLTimeIntervalRange )arg1 andIdentificationKey:(id)arg2 ;
-(CGFloat)totalSumEnergyRatioCutOff;
-(id)addForegroundAndBackgroundDurations:(id)arg0 withRange:(struct _PLTimeIntervalRange )arg1 withQueryType:(int)arg2 ;
-(id)addNotificationValues:(id)arg0 withRange:(struct _PLTimeIntervalRange )arg1 withQueryType:(int)arg2 ;
-(id)adjustBackgroundTimesWithEnergyEntries:(id)arg0 ;
-(id)adjustExtensionBackgroundTimeWithEnergyEntries:(id)arg0 ;
-(id)adjustFGBGTimeForNonAppEnergyEntry:(id)arg0 ;
-(id)adjustForegroundTimesWithEnergyEntries:(id)arg0 ;
-(id)applyDynamicNameTransformationsWithEnergyEntries:(id)arg0 ;
-(id)applyStaticNameTransformationsWithEnergyEntries:(id)arg0 ;
-(id)batteryBreakdownWithTimeRange:(struct _PLTimeIntervalRange )arg0 withDataRange:(struct _PLTimeIntervalRange )arg1 withEntryTimeInterval:(CGFloat)arg2 withQueryType:(int)arg3 ;
-(id)batteryBreakdownWithTimeRange:(struct _PLTimeIntervalRange )arg0 withDataRange:(struct _PLTimeIntervalRange )arg1 withEntryTimeInterval:(CGFloat)arg2 withQueryType:(int)arg3 withTotalSumEnergyRatioCutOff:(CGFloat)arg4 ;
-(id)bundleIDsForMappedName:(id)arg0 ;
-(id)combineDuplicatesWithEnergyEntries:(id)arg0 ;
-(id)determineDisplayNamesWithEnergyEntries:(id)arg0 ;
-(id)energyEntriesWithRange:(struct _PLTimeIntervalRange )arg0 withEntryTimeInterval:(CGFloat)arg1 withQueryType:(int)arg2 ;
-(id)filterEnergyEntriesBasedOnTime:(id)arg0 withQueryType:(int)arg1 ;
-(id)filterWithEnergyEntries:(id)arg0 withQueryType:(int)arg1 ;
-(id)getUpgradeDataWithLastUpgradeTimestamp:(CGFloat)arg0 withFirstEntryTimestampFromDB:(CGFloat)arg1 withNow:(id)arg2 withBeforeUpgrade:(BOOL)arg3 withRange:(struct _PLTimeIntervalRange )arg4 ;
-(id)getUsageDataWithStartTime:(CGFloat)arg0 withMidTime:(CGFloat)arg1 withEndTime:(id)arg2 ;
-(id)mapCloudDocsToAppsWithEnergyEntries:(id)arg0 ;
-(id)mapDeletedAppsWithEnergyEntries:(id)arg0 ;
-(id)mapGizmoToAppsWithEnergyEntries:(id)arg0 ;
-(id)mapPluginsToAppsWithEnergyEntries:(id)arg0 ;
-(id)nonAppsRuntimesWithRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)nonNullValue:(id)arg0 withKey:(id)arg1 ;
-(id)pluginBundleIDsforBundleID:(id)arg0 ;
-(id)populateBLDKeysWithEnergyEntries:(id)arg0 ;
-(id)populateEnergyBucketKeysWithEntries:(id)arg0 ;
-(id)populateRootNodeEnergyKeysWithEnergyEntries:(id)arg0 ;
-(id)qualifiersWithEnergyEntry:(id)arg0 bucketSize:(CGFloat)arg1 andTotalEnergy:(CGFloat)arg2 ;
-(id)reaccountBackupRestoreWithEnergyEntries:(id)arg0 ;
-(id)reaccountExchangeEntriesWithEnergyEntries:(id)arg0 ;
-(id)removeNodesNotToShowInInternalUI:(id)arg0 withQueryType:(int)arg1 ;
-(id)shouldSuggestBackgroundCPUWithEnergyEntries:(id)arg0 ;
-(id)shouldSuggestBackgroundLocationWithEnergyEntries:(id)arg0 ;
-(id)suggestionsWithEnergyEntries:(id)arg0 ;
-(int)appTypeForName:(id)arg0 ;
-(int)minimumRequiredQueryTypeForAppType:(int)arg0 ;
-(short)energyMetricBucketForRootNodeID:(id)arg0 ;
-(void)clearState;


@end


#endif