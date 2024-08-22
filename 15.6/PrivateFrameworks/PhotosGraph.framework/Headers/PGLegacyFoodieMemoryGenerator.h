// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLEGACYFOODIEMEMORYGENERATOR_H
#define PGLEGACYFOODIEMEMORYGENERATOR_H

@class NSMutableDictionary, NSDictionary, CLSCurationSession, NSString;


#import "PGFeaturedMemoryGenerator.h"
#import "PGGraphSceneNodeCollection.h"

@interface PGLegacyFoodieMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSMutableDictionary *assetUUIDsWithPeopleByMomentNodeLocalIdentifier; // ivar: _assetUUIDsWithPeopleByMomentNodeLocalIdentifier
@property (retain, nonatomic) NSDictionary *confidenceThresholdByDrinkSceneIdentifier; // ivar: _confidenceThresholdByDrinkSceneIdentifier
@property (retain, nonatomic) NSDictionary *confidenceThresholdByFoodSceneIdentifier; // ivar: _confidenceThresholdByFoodSceneIdentifier
@property (retain, nonatomic) NSDictionary *confidenceThresholdByForbiddenSceneIdentifiers; // ivar: _confidenceThresholdByForbiddenSceneIdentifiers
@property (retain, nonatomic) CLSCurationSession *curationSession; // ivar: _curationSession
@property (nonatomic) NSInteger currentYear; // ivar: _currentYear
@property (retain, nonatomic) PGGraphSceneNodeCollection *foodSceneNodeAsCollection; // ivar: _foodSceneNodeAsCollection
@property (retain, nonatomic) NSString *foodieMemoryKind; // ivar: _foodieMemoryKind
@property (retain, nonatomic) NSString *foodieMemoryType; // ivar: _foodieMemoryType
@property (retain, nonatomic) NSMutableDictionary *locationCoordinateByAssetUUID; // ivar: _locationCoordinateByAssetUUID
@property (retain, nonatomic) NSMutableDictionary *relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier; // ivar: _relevantFoodieAssetUUIDsByMomentNodeLocalIdentifier


+(BOOL)_aggregationMeetsMinimumTimeIntervalForMomentNodes:(id)arg0 ;
+(id)_assetsCloseInTimeAndLocationToAsset:(id)arg0 inAssets:(id)arg1 stopAtFirstMatch:(BOOL)arg2 ;
-(BOOL)_hasEnoughAssetsWithMinimumSceneAnalysisVersion;
-(BOOL)generateRelevantAssetsForPotentialMemory:(id)arg0 ;
-(NSUInteger)_foodMemoryKindFromFeatureNodes:(id)arg0 outSpecificFeatureNode:(*id)arg1 ;
-(id)_assetUUIDsAtLocationCoordinate:(struct CLLocationCoordinate2D )arg0 inAssetsWithUUIDs:(id)arg1 ;
-(id)_assetUUIDsAtLocationNode:(id)arg0 forMomentNodes:(id)arg1 assetUUIDs:(id)arg2 progressReporter:(id)arg3 ;
-(id)_assetUUIDsWithPeopleForMomentNode:(id)arg0 ;
-(id)_curatedPersonAssetsFromPersonAssetsByMomentNodeLocalIdentifier:(id)arg0 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)arg1 momentNodes:(id)arg2 featuringPersonNode:(id)arg3 outValidMomentNodes:(*id)arg4 outRelevantFoodAssetsForFeaturedPersonByMomentNodeLocalIdentifier:(*id)arg5 progressBlock:(id)arg6 ;
-(id)_extendedCurationForAssets:(id)arg0 progressBlock:(id)arg1 ;
-(id)_fetchAssetsForAssetUUIDsByMomentNodeLocalIdentifier:(id)arg0 ;
-(id)_incompatibleMeanings;
-(id)_incompatiblePOILabels;
-(id)_momentNodesByYearFromMomentNodes:(id)arg0 ;
-(id)_momentNodesFilteredForIncompatibleMeaningsFromMomentNodes:(id)arg0 ;
-(id)_momentNodesFilteredForIncompatiblePOIFromMomentNodes:(id)arg0 ;
-(id)_personAssetUUIDsByMomentNodeLocalIdentifierForMomentNodes:(id)arg0 locationCoordinate:(struct CLLocationCoordinate2D )arg1 locationNode:(id)arg2 progressReporter:(id)arg3 ;
-(id)_potentialGenericMemoriesWithGraph:(id)arg0 progressReporter:(id)arg1 ;
-(id)_potentialMemoriesForCitiesWithGraph:(id)arg0 progressReporter:(id)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(id)_potentialMemoriesForHomeWithGraph:(id)arg0 progressReporter:(id)arg1 ;
-(id)_potentialMemoriesForPeopleWithGraph:(id)arg0 progressReporter:(id)arg1 ;
-(id)_potentialMemoriesForRestaurantsWithGraph:(id)arg0 progressReporter:(id)arg1 ;
-(id)_potentialMemoriesForTripsWithGraph:(id)arg0 progressReporter:(id)arg1 ;
-(id)_potentialMemoriesFromMomentNodes:(id)arg0 atLocationCoordinate:(struct CLLocationCoordinate2D )arg1 atLocationNode:(id)arg2 requireMinimumTimeInterval:(BOOL)arg3 includeSingleYearMemories:(BOOL)arg4 features:(id)arg5 featuredNode:(id)arg6 kind:(NSUInteger)arg7 progressReporter:(id)arg8 ;
-(id)_preferredPotentialMemoriesFromPotentialMemories:(id)arg0 ;
-(id)_relevantFoodieAssetUUIDsForMomentNode:(id)arg0 ;
-(id)_uuidsOfRequiredFoodAssetsWithNumberOfFoodAssetsToRequirePerMoment:(NSUInteger)arg0 relevantFoodAssetsByMomentNodeLocalIdentifier:(id)arg1 progressBlock:(id)arg2 ;
-(id)curationOptionsWithRequiredAssetUUIDs:(id)arg0 potentialMemory:(id)arg1 ;
-(id)foodSceneNodesInGraph:(id)arg0 ;
-(id)foodieTitleGeneratorForMomentNodes:(id)arg0 kind:(NSUInteger)arg1 featureNode:(id)arg2 tripTitleLocationType:(NSUInteger)arg3 ;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)relevantFeederForTriggeredMemory:(id)arg0 inGraph:(id)arg1 allowGuestAsset:(BOOL)arg2 progressReporter:(id)arg3 ;
-(id)titleGeneratorForTriggeredMemory:(id)arg0 withKeyAsset:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 titleGenerationContext:(id)arg4 inGraph:(id)arg5 ;
-(id)uuidsOfRequiredAssetsWithKeyAsset:(id)arg0 triggeredMemory:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3 ;
-(void)_calculateRelevantFoodieAssetUUIDsForMomentNode:(id)arg0 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif