// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STYUSERSCENARIOCACHE_H
#define STYUSERSCENARIOCACHE_H

@class NSDictionary, NSError, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface STYUserScenarioCache : NSObject

@property (retain) NSDictionary *animationConfigForWhitelistedCategories; // ivar: _animationConfigForWhitelistedCategories
@property (retain) NSDictionary *animationConfigForWhitelistedNames; // ivar: _animationConfigForWhitelistedNames
@property (retain) NSDictionary *animationConfigForWhitelistedSubsystems; // ivar: _animationConfigForWhitelistedSubsystems
@property (retain) NSError *badConfigError; // ivar: _badConfigError
@property (retain) NSDictionary *bundleIdForAppName; // ivar: _bundleIdForAppName
@property (retain) NSError *bundledIdLookupFailedrror; // ivar: _bundledIdLookupFailedrror
@property (retain) NSString *hwModel; // ivar: _hwModel
@property (retain) NSMutableDictionary *lifecycleScenarios; // ivar: _lifecycleScenarios
@property (retain) NSDictionary *responsivenessConfigForWhitelistedCategories; // ivar: _responsivenessConfigForWhitelistedCategories
@property (retain) NSDictionary *responsivenessConfigForWhitelistedNames; // ivar: _responsivenessConfigForWhitelistedNames
@property (retain) NSDictionary *responsivenessConfigForWhitelistedSubsystems; // ivar: _responsivenessConfigForWhitelistedSubsystems
@property (retain) NSMutableDictionary *scenarioObjects; // ivar: _scenarioObjects


+(id)internalResourceBundle;
+(id)sharedCache;
-(BOOL)isAnimationScenarioWhitelisted:(id)arg0 error:(*id)arg1 ;
-(BOOL)isResponsivenessScenarioWhitelisted:(id)arg0 error:(*id)arg1 ;
-(BOOL)kpiIsLatency:(id)arg0 ;
-(BOOL)processWhitelisted:(id)arg0 error:(*id)arg1 ;
-(BOOL)scenarioWhitelisted:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupWhitelistedAnimationScenarios:(id)arg0 bundles:(id)arg1 ;
-(BOOL)setupWhitelistedResponsivenessScenarios:(id)arg0 bundles:(id)arg1 ;
-(BOOL)setupWhitelistedScenarios:(id)arg0 bundles:(id)arg1 ;
-(float)framerateGoalsForSignpostInterval:(id)arg0 ;
-(float)latencyGoalsForSignpostInterval:(id)arg0 ;
-(id)appNameFromBundleId:(id)arg0 ;
-(id)bundleIdForProcessName:(id)arg0 ;
-(id)initWithPlatform:(id)arg0 ;
-(id)issueCategoryForSignpostInterval:(id)arg0 ;
-(id)loadWhitelist:(id)arg0 platform:(id)arg1 bundles:(id)arg2 ;
-(id)processBundleIdForSignpostInterval:(id)arg0 ;
-(id)scenarioForFrontboardLaunchWatchdog:(id)arg0 ;
-(id)scenarioFromSignpostEvent:(id)arg0 error:(*id)arg1 ;
-(id)scenarioFromSignpostInterval:(id)arg0 error:(*id)arg1 ;
-(id)scenarioGroupForSignpostInterval:(id)arg0 ;
-(id)scenarioIdForSignpostEmittedEvent:(id)arg0 ;
-(id)scenarioIdForSignpostInterval:(id)arg0 ;
-(int)processIdForSignpostEvent:(id)arg0 ;
-(void)setupBundleIdWhitelists:(id)arg0 bundles:(id)arg1 ;


@end


#endif