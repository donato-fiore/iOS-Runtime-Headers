// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYGENERATOR_H
#define PGMEMORYGENERATOR_H

@class NSString;
@protocol PGMemoryGeneratorProtocol, PGMemoryEnrichmentProtocol, OS_os_log;

#import <Foundation/Foundation.h>

#import "PGMemoryController.h"
#import "PGGraphLocationHelper.h"
#import "PGMemoryCurationSession.h"
#import "PGMemoryGenerationContext.h"
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
@property (readonly, nonatomic) PGMemoryGenerationContext *memoryGenerationContext; // ivar: _memoryGenerationContext
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache; // ivar: _momentNodesWithBlockedFeatureCache
@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache; // ivar: _processedScenesAndFacesCache
@property (readonly) Class superclass;


+(NSInteger)titleDateMatchingTypeForMemoryCategory:(NSUInteger)arg0 ;
-(BOOL)semanticalDedupingEnabledForCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(NSUInteger)durationForCuration;
-(NSUInteger)durationForExtendedCuration;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg0 ;
-(id)baseCurationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 ;
-(id)chapterTitleGeneratorForTriggeredMemory:(id)arg0 curatedAssets:(id)arg1 extendedCuratedAssets:(id)arg2 titleGenerationContext:(id)arg3 inGraph:(id)arg4 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 eligibleAssetUUIDs:(id)arg1 triggeredMemory:(id)arg2 ;
-(id)defaultTitleGeneratorWithMomentNodes:(id)arg0 keyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 category:(NSUInteger)arg4 creationDate:(id)arg5 titleGenerationContext:(id)arg6 ;
-(id)extendedCurationOptionsWithRequiredAssetUUIDs:(id)arg0 triggeredMemory:(id)arg1 ;
-(id)generateAllPotentialMemoriesWithGraph:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithMemoryCurationSession:(id)arg0 loggingConnection:(id)arg1 ;
-(id)initWithMemoryGenerationContext:(id)arg0 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)localIdentifiersFromAssets:(id)arg0 ;
-(id)relevantCurationFeederForTriggeredMemory:(id)arg0 relevantFeeder:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(BOOL)arg3 progressReporter:(id)arg4 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)relevantKeyCurationFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(id)uuidsOfRequiredAssetsWithKeyAsset:(id)arg0 triggeredMemory:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3 ;
-(void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg0 withGraph:(id)arg1 attemptUpgradesBeforeSorting:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)addLocalIdentifiersFromAssets:(id)arg0 to:(id)arg1 ;


@end


#endif