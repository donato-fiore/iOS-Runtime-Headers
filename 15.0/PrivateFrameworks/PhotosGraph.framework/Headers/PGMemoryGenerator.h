// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYGENERATOR_H
#define PGMEMORYGENERATOR_H

@class NSString;
@protocol PGMemoryGeneratorProtocol, PGMemoryEnrichmentProtocol, OS_os_log;

#import <Foundation/Foundation.h>

#import "PGMemoryController.h"
#import "PGGraphLocationHelper.h"
#import "PGMemoryCurationSession.h"
#import "PGMemoryMomentNodesWithBlockedFeatureCache.h"
#import "PGMemoryProcessedScenesAndFacesCache.h"

@interface PGMemoryGenerator : NSObject <PGMemoryGeneratorProtocol, PGMemoryEnrichmentProtocol>



@property (readonly, weak) PGMemoryController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isDebug; // ivar: _isDebug
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper; // ivar: _locationHelper
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) PGMemoryCurationSession *memoryCurationSession; // ivar: _memoryCurationSession
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache; // ivar: _momentNodesWithBlockedFeatureCache
@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache; // ivar: _processedScenesAndFacesCache
@property (readonly) Class superclass;


+(NSInteger)titleDateMatchingTypeForMemoryCategory:(NSUInteger)arg0 ;
-(BOOL)_event:(id)arg0 isAcceptableForUpgradeWithGraph:(id)arg1 ;
-(BOOL)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg0 withGraph:(id)arg1 didUpgradeToWeekend:(BOOL)arg2 upgradedToMeaningfulEvent:(*BOOL)arg3 ;
-(BOOL)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg0 withGraph:(id)arg1 ;
-(BOOL)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg0 withGraph:(id)arg1 upgradedToWeekend:(*BOOL)arg2 ;
-(BOOL)semanticalDedupingEnabledForCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(NSUInteger)_numberOfIndependentMomentNodesInMomentNodes:(id)arg0 ;
-(NSUInteger)durationForCuration;
-(NSUInteger)durationForExtendedCuration;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg0 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg0 ;
-(id)_generateMemoryForDryTesting;
-(id)_potentialMemoriesForDryTesting;
-(id)createMemoryWithPotentialMemory:(id)arg0 andGraph:(id)arg1 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)defaultTitleGeneratorWithMomentNodes:(id)arg0 keyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 category:(NSUInteger)arg4 creationDate:(id)arg5 titleGenerationContext:(id)arg6 ;
-(id)extendedCurationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)extendedCurationOptionsWithRequiredAssetUUIDs:(id)arg0 triggeredMemory:(id)arg1 ;
-(id)generateAllMemories;
-(id)generateAllPotentialMemoriesWithGraph:(id)arg0 progressBlock:(id)arg1 ;
-(id)generateMemories:(NSUInteger)arg0 ;
-(id)generateMemory;
-(id)initWithController:(id)arg0 ;
-(id)initWithMemoryCurationSession:(id)arg0 loggingConnection:(id)arg1 ;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)localIdentifiersFromAssets:(id)arg0 ;
-(id)relevantCurationFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantCurationFeederForTriggeredMemory:(id)arg0 relevantFeeder:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(BOOL)arg3 progressReporter:(id)arg4 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)relevantKeyCurationFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantKeyCurationFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(id)uuidsOfRequiredAssetsWithKeyAsset:(id)arg0 triggeredMemory:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3 ;
-(void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg0 withGraph:(id)arg1 attemptUpgradesBeforeSorting:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_generateDefaultTitleAndSubtitleForMemory:(id)arg0 withPotentialMemory:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)addLocalIdentifiersFromAssets:(id)arg0 to:(id)arg1 ;
-(void)computeCurationForMemory:(id)arg0 withPotentialMemory:(id)arg1 graph:(id)arg2 ;
-(void)setDefaultValuesIfNeededOnNewMemory:(id)arg0 withPotentialMemory:(id)arg1 graph:(id)arg2 ;


@end


#endif