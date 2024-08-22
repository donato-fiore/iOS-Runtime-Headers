// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEBATTERYBREAKDOWN_H
#define PLBATTERYUIRESPONSETYPEBATTERYBREAKDOWN_H

@class NSMutableArray, NSDictionary, NSString, NSSet, NSDate;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeBatteryBreakdown : NSObject <PLBatteryUIResponseProtocol>



@property CGFloat bucketSize; // ivar: _bucketSize
@property (retain) NSMutableArray *buckets; // ivar: _buckets
@property (retain) NSDictionary *bundleIDsToBackgroundTimes; // ivar: _bundleIDsToBackgroundTimes
@property (retain) NSDictionary *bundleIDsToDisplayNames; // ivar: _bundleIDsToDisplayNames
@property (retain) NSDictionary *bundleIDsToEnergyKeyForSlopAdjustment; // ivar: _bundleIDsToEnergyKeyForSlopAdjustment
@property (retain) NSDictionary *bundleIDsToForegroundTimes; // ivar: _bundleIDsToForegroundTimes
@property (retain) NSDictionary *bundleIDsToReplacementBundleIDs; // ivar: _bundleIDsToReplacementBundleIDs
@property CGFloat dataDuration; // ivar: _dataDuration
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSSet *deletedAppBundleIDs; // ivar: _deletedAppBundleIDs
@property (retain) NSSet *deletedAppClipBundleIDs; // ivar: _deletedAppClipBundleIDs
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (retain) NSSet *exchangeBundleIDs; // ivar: _exchangeBundleIDs
@property BOOL gizmoConnected; // ivar: _gizmoConnected
@property BOOL hasHomeKit; // ivar: _hasHomeKit
@property (readonly) NSUInteger hash;
@property (retain) NSSet *intermediateRootNodes; // ivar: _intermediateRootNodes
@property BOOL isSlopAdjustmentEnabled; // ivar: _isSlopAdjustmentEnabled
@property (retain) NSDictionary *lastBatteryEntry; // ivar: _lastBatteryEntry
@property CGFloat lastUpgradeTimestamp; // ivar: _lastUpgradeTimestamp
@property (retain) NSDate *monotonicNow; // ivar: _monotonicNow
@property (retain) NSDictionary *nodeIDsToNodeNames; // ivar: _nodeIDsToNodeNames
@property (retain) NSSet *nonAppBundleIDs; // ivar: _nonAppBundleIDs
@property (retain) NSDictionary *pluginBundleIDsToEntries; // ivar: _pluginBundleIDsToEntries
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSSet *rootNodeBundleIDs; // ivar: _rootNodeBundleIDs
@property (retain) NSDictionary *rootNodeIDToRootNodeEnergyKeys; // ivar: _rootNodeIDToRootNodeEnergyKeys
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;
@property (retain) NSSet *webAppBundleIDs; // ivar: _webAppBundleIDs


-(BOOL)canSetQualifier:(int)arg0 forBundleID:(id)arg1 ;
-(BOOL)filterFgBg:(id)arg0 filterArray:(id)arg1 ;
-(BOOL)gizmoConnectedInRange:(struct _PLTimeIntervalRange )arg0 ;
-(BOOL)shouldShowBreakdown:(id)arg0 ;
-(CGFloat)getDataDurationFromRange:(struct _PLTimeIntervalRange )arg0 ;
-(CGFloat)getEnergyToRemoveForSlopAdjustment:(id)arg0 withEnergyKey:(id)arg1 forBucket:(id)arg2 ;
-(CGFloat)getNonAppRuntimesWith:(id)arg0 identificationKey:(id)arg1 andRange:(struct _PLTimeIntervalRange )arg2 withNow:(id)arg3 ;
-(id)buildBucketWithEnergyEntries:(id)arg0 andRange:(struct _PLTimeIntervalRange )arg1 ;
-(id)buildEnergyEntriesWithRootNodes:(id)arg0 andQualificationNodes:(id)arg1 andRange:(struct _PLTimeIntervalRange )arg2 ;
-(id)combineQualifiers:(id)arg0 ;
-(id)getAppRuntimesInRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)getBundleIDToBackgroundTimeMap;
-(id)getBundleIDToDisplayNameMap;
-(id)getBundleIDToForegroundTimeMap;
-(id)getBundleIDToReplacementBundleIDMap;
-(id)getBundleIDsToEnergyKeyForSlopAdjustmentMap;
-(id)getDeletedAppBundleIDs;
-(id)getDeletedAppClipBundleIDs;
-(id)getEnergyEntry:(id)arg0 forBundleID:(id)arg1 ;
-(id)getExchangeBundleIDs;
-(id)getInstalledPluginEntries;
-(id)getIntermediateRootNodes;
-(id)getLastBatteryEntry;
-(id)getNodeEntriesForEntryKey:(id)arg0 withRange:(struct _PLTimeIntervalRange )arg1 andTimeInterval:(CGFloat)arg2 ;
-(id)getNodeIDToNodeNameMap;
-(id)getNonAppBundleIDs;
-(id)getNonAppRuntimesInRange:(struct _PLTimeIntervalRange )arg0 withNow:(id)arg1 ;
-(id)getNotificationEntriesInRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)getPluginBundleIDToEntryMap;
-(id)getQualificationNodeEntriesInRange:(struct _PLTimeIntervalRange )arg0 withTimeInterval:(CGFloat)arg1 ;
-(id)getRootNodeBundleIDs;
-(id)getRootNodeEntriesInRange:(struct _PLTimeIntervalRange )arg0 withTimeInterval:(CGFloat)arg1 ;
-(id)getRootNodeIDToRootNodeEnergyKeys;
-(id)getWebAppBundleIDs;
-(id)processAppTimeEntries:(id)arg0 inRange:(struct _PLTimeIntervalRange )arg1 withAppArray:(id)arg2 ;
-(id)processNotificationEntries:(id)arg0 inRange:(struct _PLTimeIntervalRange )arg1 withAppArray:(id)arg2 ;
-(id)processQualificationNodes:(id)arg0 inRange:(struct _PLTimeIntervalRange )arg1 ;
-(id)processRootNodes:(id)arg0 inRange:(struct _PLTimeIntervalRange )arg1 ;
-(id)result;
-(int)computeNumberOfBuckets;
-(short)getEnergyMetricBucketForRootNodeID:(id)arg0 ;
-(struct _PLTimeIntervalRange )generateRange:(struct _PLTimeIntervalRange )arg0 withDataRange:(struct _PLTimeIntervalRange )arg1 ;
-(struct _PLTimeIntervalRange )getDataRange:(id)arg0 ;
-(void)addEntryTypes:(id)arg0 ;
-(void)addErrorCode:(id)arg0 ;
-(void)addFgEnergyForMetrics:(id)arg0 qualificationID:(id)arg1 rootNodeQualificationEnergy:(id)arg2 energyEntry:(id)arg3 ;
-(void)addQualifiers:(id)arg0 ;
-(void)addRNEForMetrics:(id)arg0 rootNodeEnergy:(id)arg1 energyEntry:(id)arg2 ;
-(void)addTotalEnergy:(id)arg0 ;
-(void)addTotals:(id)arg0 ;
-(void)adjustEnergyValues:(id)arg0 ;
-(void)adjustExtensionBackgroundTimeWithEnergyEntries:(id)arg0 ;
-(void)adjustRuntimes:(id)arg0 ;
-(void)applyDisplayNameTransformation:(id)arg0 ;
-(void)applyDynamicNameTransformation:(id)arg0 ;
-(void)applySlopAdjustment:(id)arg0 ;
-(void)applyStaticNameTransformation:(id)arg0 ;
-(void)bgLocationAudioTimeApps:(id)arg0 ;
-(void)bgLocationAudioTimeRuntimes:(id)arg0 bundleID:(id)arg1 ;
-(void)buildBucketsForRange:(struct _PLTimeIntervalRange )arg0 ;
-(void)buildUtilityCache;
-(void)coalesce;
-(void)collapseEnergyEntries:(id)arg0 ;
-(void)configure:(id)arg0 ;
-(void)enumerateBucketsUsingBlock:(id)arg0 ;
-(void)filterEnergyEntries:(id)arg0 ;
-(void)filterEnergyEntriesWithRuntimes:(id)arg0 ;
-(void)getStaticData;
-(void)identifyBucket:(id)arg0 withRange:(struct _PLTimeIntervalRange )arg1 ;
-(void)initBackgroundLocationAudioTime;
-(void)initializeBucketsWithRange:(struct _PLTimeIntervalRange )arg0 ;
-(void)populateBLDKeysWithEnergyEntries:(id)arg0 ;
-(void)populateBackgroundLocationAudioTime:(id)arg0 bundleID:(id)arg1 ;
-(void)populateEnergyBucketKeysWithEntries:(id)arg0 ;
-(void)populateInternalRootNodeEnergyKeys:(id)arg0 ;
-(void)prepareBucketsWithRange:(struct _PLTimeIntervalRange )arg0 ;
-(void)reaccountBackupRestore:(id)arg0 ;
-(void)reaccountExchangeEntries:(id)arg0 ;
-(void)removeNotifications:(id)arg0 ;
-(void)run;
-(void)transformCloudDocs:(id)arg0 ;
-(void)transformDeletedApps:(id)arg0 ;
-(void)transformGizmoDaemons:(id)arg0 ;
-(void)transformPlugins:(id)arg0 ;


@end


#endif