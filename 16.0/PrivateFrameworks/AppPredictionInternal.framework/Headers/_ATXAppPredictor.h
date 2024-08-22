// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPPREDICTOR_H
#define _ATXAPPPREDICTOR_H

@class NSDictionary, NSString, NSUserDefaults, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchLocation.h"
#import "_ATXAppDailyDose.h"
#import "_ATXRecentInstallCache.h"
#import "ATXPredictionContextBuilder.h"
#import "_ATXAppLaunchMonitor.h"
#import "ATXAppIntentMonitor.h"
#import "_ATXAppInstallMonitor.h"
#import "ATXAppLaunchLogger.h"
#import "ATXAppFeaturizer.h"
#import "ATXBBNotificationManager.h"
#import "ATXMagicalMomentsUpdateMonitor.h"
#import "ATXAppPredictionBlacklist.h"
#import "ATXActionPredictionBlacklist.h"
#import "ATXMediaApplications.h"
#import "_ATXAppInfoManager.h"
#import "ATXAppLaunchMicroLocation.h"
#import "ATXCurrentABGroupDetails.h"
#import "ATXCDNDownloaderTriggerManager.h"

@interface _ATXAppPredictor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_dayZeroParameters;
    NSDictionary *_dayZeroIntentParameters;
    NSString *_dayZeroABGroupIdentifier;
    NSString *_dayZeroIntentABGroupIdentifier;
    _ATXAppLaunchLocation *_appLaunchLocation;
    _ATXAppDailyDose *_appDailyDose;
    _ATXRecentInstallCache *_recentInstallCache;
    ATXPredictionContextBuilder *_predictionContextBuilder;
    _ATXAppLaunchMonitor *_appLaunchMonitor;
    ATXAppIntentMonitor *_appIntentMonitor;
    _ATXAppInstallMonitor *_appInstallMonitor;
    ATXAppLaunchLogger *_appLaunchLogger;
    ATXAppFeaturizer *_appFeaturizer;
    ATXBBNotificationManager *_notificationManager;
    ATXMagicalMomentsUpdateMonitor *_mmPredictionMonitor;
    uint8_t _appLaunchAndInstallMonitorsInitialized;
    uint8_t _iOSOnlyDependenciesInitialized;
    NSUserDefaults *_userDefaults;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    ATXActionPredictionBlacklist *_actionPredictionBlacklist;
    ATXMediaApplications *_mediaApps;
    _ATXAppInfoManager *_appInfoManager;
    ATXAppLaunchMicroLocation *_microLocation;
    ATXCurrentABGroupDetails *_currentABGroupDetails;
}


@property (retain, nonatomic) NSArray *abGroupIdentifiers; // ivar: _abGroupIdentifiers
@property (retain, nonatomic) ATXCDNDownloaderTriggerManager *cdnDownloaderTriggerManager; // ivar: _cdnDownloaderTriggerManager


+(id)_arrayFromSet:(id)arg0 upToSize:(NSUInteger)arg1 ;
+(id)getParseTreeForConsumerSubType:(unsigned char)arg0 ;
+(id)inputScoresForPredictionItem:(struct ATXPredictionItem *)arg0 ;
+(id)pruneItemsToRankForConsumerSubType:(unsigned char)arg0 itemsToRank:(id)arg1 datastore:(id)arg2 ;
+(id)recreateSharedInstanceWithCurrentABGroup;
+(id)sharedInstance;
+(void)updateConfidenceForItem:(struct ATXPredictionItem *)arg0 subscores:(id)arg1 ;
-(?)_evalFeaturesForActions:(?)arg0 scoreLogger:(?)arg1 contextfeatureCache;
-(?)_evalFeaturesForAppForAllIntents:(?)arg0 scoreLoggercontext;
-(?)_evalFeaturesForAppIntents:(?)arg0 scoreLoggercontext;
-(?)_getPredictionForItems:(?)arg0 clipBundleIdsToRank:(?)arg1 consumerSubType:(?)arg2 intent:(?)arg3 scoreLogger:(?)arg4 contextfeatureCache;
-(BOOL)_initAppLaunchAndInstallMonitors;
-(BOOL)_initIOSOnlyDependencies;
-(BOOL)predictAndWriteCacheFileWithLimit:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateActiontypes:(id)arg4 scoreLogger:(id)arg5 path:(id)arg6 cacheFileDescriptors:(id)arg7 featureCache:(id)arg8 ;
-(BOOL)writeCacheFileWithSerializedChunks:(id)arg0 path:(id)arg1 cacheFileDescriptors:(id)arg2 consumerSubType:(unsigned char)arg3 ;
-(CGFloat)_predictionScoreAndUpdateConfidenceForItem:(struct ATXPredictionItem *)arg0 interpreter:(id)arg1 consumerSubType:(unsigned char)arg2 scoreLogger:(id)arg3 intentType:(id)arg4 ;
-(CGFloat)finalScoreForSubscores:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(CGFloat)predictionScoreAndUpdateConfidenceForItem:(struct ATXPredictionItem *)arg0 consumerSubType:(unsigned char)arg1 ;
-(id)_allDayZeroApps;
-(id)_appPredictionsSeedAppsGivenSBAppList:(id)arg0 consumerSubType:(unsigned char)arg1 minimumDesiredApps:(NSUInteger)arg2 ;
-(id)_appsToPredictWithConsumerSubType:(unsigned char)arg0 intent:(id)arg1 candidateBundleIdentifiers:(id)arg2 allSBApps:(id)arg3 appPredictionBlacklist:(id)arg4 digitalHealthBlacklist:(id)arg5 ;
-(id)appInstallMonitor;
-(id)appIntentMonitor;
-(id)appLaunchMonitor;
-(id)getABGroups;
-(id)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg0 ;
-(id)init;
-(id)initInternal;
-(id)predictWithLimit:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateActiontypes:(id)arg4 scoreLogger:(id)arg5 ;
-(id)predictWithLimit:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateActiontypes:(id)arg4 scoreLogger:(id)arg5 predictionItemsToKeep:(*void)arg6 predictedItemsOutParameter:(*void)arg7 context:(id)arg8 datastore:(id)arg9 featureCache:(id)arg10 ;
-(id)predictWithLimit:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateActiontypes:(id)arg4 scoreLogger:(id)arg5 predictionItemsToKeep:(*void)arg6 predictedItemsOutParameter:(*void)arg7 context:(id)arg8 featureCache:(id)arg9 ;
-(id)predictWithLimit:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateActiontypes:(id)arg4 scoreLogger:(id)arg5 predictionItemsToKeep:(*void)arg6 predictedItemsOutParameter:(*void)arg7 datastore:(id)arg8 ;
-(id)predictWithLimit:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateActiontypes:(id)arg4 scoreLogger:(id)arg5 predictionItemsToKeep:(*void)arg6 predictedItemsOutParameter:(*void)arg7 featureCache:(id)arg8 ;
-(id)recentInstallCache;
-(struct unordered_map<NSString *, const ATXPredictionItem *, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, const ATXPredictionItem *>>> )_createMapOfKeyToItemForPredictionItems:(*void)arg0 ;
-(void)_addZeroDayAppIntentKeysToBundleIdTable:(id)arg0 ;
-(void)_copyValidScoreInputsFromPredictionItem:(struct ATXPredictionItem *)arg0 toPredictionItem:(struct ATXPredictionItem *)arg1 ;
-(void)_initFeaturizers;
-(void)_setActionBlacklist:(id)arg0 ;
-(void)_updateFromAsset;
-(void)_updateFromZeroDayAsset;
-(void)_updateFromZeroDayIntentAsset;
-(void)dealloc;
-(void)iterZeroDayAppIntentKeysWithBlock:(id)arg0 ;
-(void)logCacheAgeAtRefreshForNonBlendingCachesWithCachePath:(id)arg0 consumerSubType:(unsigned char)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)receiveFeedbackForConsumerType:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 atxResponse:(id)arg2 engagementType:(NSUInteger)arg3 engagedBundleId:(id)arg4 bundleIdsShown:(id)arg5 explicitlyRejectedBundleIds:(id)arg6 context:(id)arg7 ;
-(void)resetRecentInstallCache;
-(void)setupScoreLogger:(id)arg0 forConsumerSubType:(unsigned char)arg1 ;
-(void)train;


@end


#endif