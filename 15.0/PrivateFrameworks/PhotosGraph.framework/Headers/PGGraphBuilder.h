// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHBUILDER_H
#define PGGRAPHBUILDER_H

@class NSMutableDictionary, CLSCurationContext, CLSFocusPeopleCache, NSDictionary, PHPhotoLibrary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraphTimeDomainBuildingHelper.h"
#import "PGGraphPeopleDomainBuildingHelper.h"
#import "PGCurationManager.h"
#import "PGMutableGraph.h"
#import "PGManager.h"

@interface PGGraphBuilder : NSObject {
    NSMutableDictionary *_curationScoreByAsset;
    NSMutableDictionary *_interactionScoreByAsset;
    CGFloat _topTierAestheticScore;
    NSUInteger _numberOfUtilityAssets;
    NSUInteger _numberOfDefaultAssets;
    NSUInteger _numberOfImprovedAssets;
    NSUInteger _numberOfBetterAssets;
    PGGraphTimeDomainBuildingHelper *_timeDomainBuildingHelper;
    PGGraphPeopleDomainBuildingHelper *_peopleDomainBuildingHelper;
}


@property (readonly) CLSCurationContext *curationContext; // ivar: _curationContext
@property (readonly) PGCurationManager *curationManager; // ivar: _curationManager
@property (retain, nonatomic) CLSFocusPeopleCache *focusPeopleIngestCache; // ivar: _focusPeopleIngestCache
@property (readonly) PGMutableGraph *graph; // ivar: _graph
@property (nonatomic) BOOL keepsExistingAssetCurationScores; // ivar: _keepsExistingAssetCurationScores
@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) PGManager *managerSoonToGo; // ivar: _managerSoonToGo
@property (readonly, nonatomic) NSDictionary *personActivityMeaningCriteriaDictionaryByMeaningLabel; // ivar: _personActivityMeaningCriteriaDictionaryByMeaningLabel
@property (readonly) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(BOOL)location:(struct CLLocationCoordinate2D )arg0 isCloseToLocation:(struct CLLocationCoordinate2D )arg1 ;
+(CGFloat)topTierAestheticScoreForRatio:(CGFloat)arg0 inPhotoLibrary:(id)arg1 ;
+(NSUInteger)memoryCategoryForLabel:(id)arg0 ;
+(id)memoryLabelForCategory:(NSUInteger)arg0 ;
+(void)prepareGraphForRebuild:(id)arg0 ;
-(BOOL)_shouldUpdateCurationScore:(CGFloat)arg0 withNewCurationScore:(CGFloat)arg1 ;
-(BOOL)_shouldUpdateRepresentativeAssetUUIDsForPerson:(id)arg0 actionValueString:(id)arg1 assetIsPassingSceneCriteria:(BOOL)arg2 personLocalIdentifierIsDoingActionInAsset:(BOOL)arg3 ;
-(id)_cleanUpMoments:(id)arg0 ;
-(id)_insertMomentNodeForClueCollection:(id)arg0 feeder:(id)arg1 insertedAndUpdatedPersonNodes:(*id)arg2 graphUpdate:(id)arg3 progressBlock:(id)arg4 ;
-(id)_momentNodesFromPersonNodes:(id)arg0 ;
-(id)_peopleDomainBuildingHelper;
-(id)_propertiesFromIngestHighlight:(id)arg0 ;
-(id)_uuidForPlacemark:(id)arg0 forNodeLabel:(id)arg1 ;
-(id)connectPublicEventNode:(id)arg0 withBusinessNode:(id)arg1 ;
-(id)criteriaEvaluatorsByValidPersonActivityMeaningLabelFromAssets:(id)arg0 withPersonActivityMeaningCriteriaDictionaryByMeaningLabel:(id)arg1 ;
-(id)criteriaEvaluatorsByValidPersonActivityMeaningLabelFromMomentNode:(id)arg0 withPersonActivityMeaningCriteriaDictionaryByMeaningLabel:(id)arg1 ;
-(id)feederForInsertingAssetCollection:(id)arg0 ;
-(id)initWithGraph:(id)arg0 ;
-(id)initWithGraph:(id)arg0 manager:(id)arg1 ;
-(id)insertAddressNodeWithPlacemark:(id)arg0 location:(id)arg1 weight:(float)arg2 numberOfAssets:(NSUInteger)arg3 duringDateInterval:(id)arg4 fromMomentNode:(id)arg5 ;
-(id)insertAddressNodeWithProjectedPlacemark:(id)arg0 atEventLocation:(id)arg1 usingImprovedPlacemark:(BOOL)arg2 ;
-(id)insertAddressNodeWithProjectedPlacemark:(id)arg0 atEventLocation:(id)arg1 usingImprovedPlacemark:(BOOL)arg2 changeRequest:(id)arg3 ;
-(id)insertBaby:(id)arg0 ;
-(id)insertBusiness:(id)arg0 fromEventNode:(id)arg1 ;
-(id)insertContactSuggestion:(id)arg0 forPersonNode:(id)arg1 confidence:(CGFloat)arg2 edgeProperties:(id)arg3 ;
-(id)insertDateNodeHierarchyWithDateComponents:(id)arg0 ;
-(id)insertDateNodesFromEventNode:(id)arg0 ;
-(id)insertDateNodesFromLocalStartDate:(id)arg0 toLocalEndDate:(id)arg1 fromEventNode:(id)arg2 ;
-(id)insertDateNodesWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertHighlightGroupNodeWithHighlight:(id)arg0 ;
-(id)insertHighlightNodeWithHighlight:(id)arg0 ;
-(id)insertHomeWorkNodeForPerson:(id)arg0 personNode:(id)arg1 fromAddressNodes:(id)arg2 ;
-(id)insertLocationHierarchyWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertLocationMobilityNodeWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertLocationMobilityNodeWithMobility:(id)arg0 fromMomentNode:(id)arg1 edgeWeight:(float)arg2 ;
-(id)insertMePersonNodeForPerson:(id)arg0 ;
-(id)insertMemoryNodeFromMemory:(id)arg0 ;
-(id)insertMemoryNodeFromMemory:(id)arg0 changeRequest:(id)arg1 ;
-(id)insertMomentNodeForClueCollection:(id)arg0 feeder:(id)arg1 progressBlock:(id)arg2 ;
-(id)insertMomentNodeForMoment:(id)arg0 ;
-(id)insertMonthDayNodeForMonth:(NSInteger)arg0 day:(NSInteger)arg1 ;
-(id)insertMusicAlbumNodeWithAlbumTitle:(id)arg0 ;
-(id)insertMusicGenreNodeWithGenreName:(id)arg0 ;
-(id)insertMusicSessionNodeWithLocalStartDate:(id)arg0 localEndDate:(id)arg1 ;
-(id)insertMusicTrackWithTrackTitle:(id)arg0 durationInSeconds:(CGFloat)arg1 ;
-(id)insertOverTheYearsNode;
-(id)insertPOINodeWithPlace:(id)arg0 fromEventNode:(id)arg1 hasInsertedSpecialPOIAmusementParkNode:(BOOL)arg2 ;
-(id)insertPOIWithFeeder:(id)arg0 fromMomentNode:(id)arg1 isNearHomeOrWork:(BOOL)arg2 ;
-(id)insertPartOfDayNodeWithPartOfDayName:(id)arg0 fromEventNode:(id)arg1 edgeWeight:(float)arg2 ;
-(id)insertPartOfDayNodesWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertPeopleWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 addressNodes:(id)arg2 isNearPeopleAddress:(*BOOL)arg3 ;
-(id)insertPersonNodeForPerson:(id)arg0 ;
-(id)insertPersonNodeForPerson:(id)arg0 fromEventNode:(id)arg1 numberOfAssetsWithPerson:(NSUInteger)arg2 edgeWeight:(float)arg3 ;
-(id)insertPersonNodeForPerson:(id)arg0 fromEventNode:(id)arg1 numberOfAssetsWithPerson:(NSUInteger)arg2 edgeWeight:(float)arg3 includeMergeCandidates:(BOOL)arg4 ;
-(id)insertPet:(id)arg0 ;
-(id)insertPresentEdgeFromPersonNode:(id)arg0 toEventNode:(id)arg1 numberOfAssetsWithPerson:(NSUInteger)arg2 edgeWeight:(float)arg3 ;
-(id)insertPresentEdgeFromPersonNode:(id)arg0 toEventNode:(id)arg1 numberOfAssetsWithPerson:(NSUInteger)arg2 edgeWeight:(float)arg3 includeMergeCandidates:(BOOL)arg4 ;
-(id)insertPublicEvent:(id)arg0 fromEventNode:(id)arg1 ;
-(id)insertROINodeWithPlace:(id)arg0 fromEventNode:(id)arg1 ;
-(id)insertROINodeWithType:(id)arg0 ;
-(id)insertROINodeWithType:(id)arg0 fromEventNode:(id)arg1 edgeWeight:(float)arg2 ;
-(id)insertROIWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertSceneNodeWithScene:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertSceneNodeWithScene:(id)arg0 fromMomentNode:(id)arg1 sceneNodeBySceneName:(id)arg2 changeRequest:(id)arg3 ;
-(id)insertSceneNodesWithClueCollection:(id)arg0 fromMomentNode:(id)arg1 ;
-(id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)arg0 ;
-(id)insertTimeNodesWithDateComponents:(id)arg0 fromEventNode:(id)arg1 ;
-(id)momentForMomentNode:(id)arg0 ;
-(id)nodesForHighlightsInHighlightDayGroup:(id)arg0 ;
-(id)nodesForMomentsInHighlight:(id)arg0 ;
-(id)timeDomainBuildingHelper;
-(void)_clearPeopleDomainBuildingHelper;
-(void)_connectPersonActivityMeaningNode:(id)arg0 toMomentNode:(id)arg1 withChangeRequest:(id)arg2 representativeAssetUUIDsByPersonLocalIdentifier:(id)arg3 ;
-(void)_deleteMomentsWithGraphUpdate:(id)arg0 ;
-(void)_insertMomentFeaturesForMomentNode:(id)arg0 assets:(id)arg1 photoLibrary:(id)arg2 featureProvider:(id)arg3 atMomentIngest:(BOOL)arg4 curationContext:(id)arg5 ;
-(void)_persistCurationScores:(id)arg0 ;
-(void)_persistInteractionScores:(id)arg0 ;
-(void)_registerInsertedMomentNodes:(id)arg0 inGraphUpdate:(id)arg1 ;
-(void)_updatePersonActivitiesOfMomentNode:(id)arg0 assets:(id)arg1 graph:(id)arg2 withPositiveSceneCriteriaByValidPersonActivityMeaningLabel:(id)arg3 actionValueByValidPersonActivityMeaningLabel:(id)arg4 actionConfidenceHighRecallThresholdByActionValue:(id)arg5 changeRequest:(id)arg6 ;
-(void)addCurationScore:(CGFloat)arg0 forAsset:(id)arg1 ;
-(void)addInteractionScore:(float)arg0 forAsset:(id)arg1 ;
-(void)addMeaningToMeaningfulEventNode:(id)arg0 meaningLabel:(id)arg1 meaningConfidenceScore:(float)arg2 ;
-(void)addMeaningToMeaningfulEventNode:(id)arg0 meaningLabel:(id)arg1 meaningIsReliable:(BOOL)arg2 ;
-(void)addParentMeaningHierarchyForMeaningNode:(id)arg0 ;
-(void)addRelationshipEdgesBetweenPersonNode:(id)arg0 andPersonNode:(id)arg1 forRelationship:(NSUInteger)arg2 confidence:(float)arg3 properties:(id)arg4 ;
-(void)addRelationshipEdgesBetweenPersonNode:(id)arg0 andSocialGroupNode:(id)arg1 forRelationship:(NSUInteger)arg2 confidence:(float)arg3 properties:(id)arg4 ;
-(void)clearPersonActivityMeaningCriteriaDictionaryByMeaningLabel;
-(void)clearTimeDomainBuildingHelper;
-(void)computeAndPersistAssetStatistics;
-(void)computeAndPersistTopTierAestheticScores;
-(void)deleteAllMemoryNodesAndEdges;
-(void)deleteAllMemoryNodesAndEdgesForMemoryCategory:(NSUInteger)arg0 ;
-(void)deleteHighlightsWithGraphUpdate:(id)arg0 ;
-(void)deletePersonsWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)enumerateDateComponentsBetweenLocalStartDate:(id)arg0 andLocalEndDate:(id)arg1 usingBlock:(id)arg2 ;
-(void)insertAreasOfInterestForProjectedPlacemark:(id)arg0 fromAddressNode:(id)arg1 changeRequest:(id)arg2 ;
-(void)insertAssetCurationScoreInLibraryForFeeder:(id)arg0 progressBlock:(id)arg1 ;
-(void)insertAuthorForMomentNode:(id)arg0 ;
-(void)insertHighlightDayGroupsWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)insertHighlightDaysWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)insertHighlightsWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)insertLocationHierarchyWithProjectedPlacemark:(id)arg0 fromAddressNode:(id)arg1 changeRequest:(id)arg2 ;
-(void)insertMomentFeaturesForMomentNode:(id)arg0 assets:(id)arg1 featureProvider:(id)arg2 atMomentIngest:(BOOL)arg3 curationContext:(id)arg4 ;
-(void)insertMomentFeaturesForMomentNode:(id)arg0 photoLibrary:(id)arg1 featureProvider:(id)arg2 atMomentIngest:(BOOL)arg3 curationContext:(id)arg4 ;
-(void)insertMomentsWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)performBatchUpdatesWithGraphUpdate:(id)arg0 withRecipe:(id)arg1 progressBlock:(id)arg2 ;
-(void)performChangeForGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)performPostprocessingWithGraphUpdate:(id)arg0 withRecipe:(id)arg1 progressBlock:(id)arg2 ;
-(void)performPreprocessingWithGraphUpdate:(id)arg0 withRecipe:(id)arg1 progressBlock:(id)arg2 ;
-(void)performProcessingSteps:(id)arg0 withGraphUpdate:(id)arg1 progressBlock:(id)arg2 ;
-(void)persistPendingScores;
-(void)persistPersonalHighAestheticsThreshold:(CGFloat)arg0 personalGoodAestheticsThreshold:(CGFloat)arg1 ;
-(void)prepareGraphForRebuild;
-(void)setAgeCategory:(NSUInteger)arg0 onPersonNodeForIdentifier:(NSUInteger)arg1 ;
-(void)setBiologicalSex:(NSUInteger)arg0 onPersonNodeForIdentifier:(NSUInteger)arg1 ;
-(void)setCanUseLocationDomain:(BOOL)arg0 ;
-(void)setCurationAlgorithmsVersion:(NSUInteger)arg0 ;
-(void)setGeoServiceProviderID:(id)arg0 ;
-(void)setIsBlocked:(BOOL)arg0 onAreaNodeForIdentifier:(NSUInteger)arg1 ;
-(void)setLanguageIdentifiers:(id)arg0 ;
-(void)setLocaleIdentifier:(id)arg0 ;
-(void)setPOIIsImproved:(BOOL)arg0 onPOIEdgeForIdentifier:(NSUInteger)arg1 ;
-(void)updateHighlightNode:(id)arg0 withHighlight:(id)arg1 ;
-(void)updateHighlightsForHighlightDayGroupNode:(id)arg0 nodesForHighlightsInHighlightDayGroup:(id)arg1 ;
-(void)updateMomentsForHighlightNode:(id)arg0 nodesForMomentsInHighlight:(id)arg1 ;
-(void)updatePersonNodeForIdentifier:(NSUInteger)arg0 withPerson:(id)arg1 forPropertyNames:(id)arg2 ;


@end


#endif