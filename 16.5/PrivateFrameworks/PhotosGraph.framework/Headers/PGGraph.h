// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPH_H
#define PGGRAPH_H

@class MAGraph, NSDictionary, NSDateFormatter, NSSet;
@protocol OS_dispatch_queue;


#import "PGGraphLocationCityNodeCollection.h"
#import "PGGraphLocationCountyNodeCollection.h"
#import "PGGraphLocationStateNodeCollection.h"
#import "PGGraphLocationCountryNodeCollection.h"
#import "PGGraphInfoNode.h"
#import "PGMessageProfile.h"

@interface PGGraph : MAGraph {
    os_unfair_lock_s _supersetLock;
    PGGraphLocationCityNodeCollection *_supersetCityNodes;
    PGGraphLocationCountyNodeCollection *_supersetCountyNodes;
    PGGraphLocationStateNodeCollection *_supersetStateNodes;
    PGGraphLocationCountryNodeCollection *_supersetCountryNodes;
    PGGraphLocationCityNodeCollection *_interestingCityNodes;
    NSDictionary *_zeroKeywordMappingByMeaningLabel;
}


@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *graphQueue; // ivar: _graphQueue
@property (readonly) PGGraphInfoNode *infoNode;
@property (readonly) BOOL isOnGraphQueue;
@property (readonly, nonatomic) NSInteger librarySizeRange;
@property (retain, nonatomic) PGMessageProfile *messageProfile; // ivar: _messageProfile
@property (readonly, nonatomic) NSSet *musicSessions;
@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *supersetCityNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *supersetCountryNodes;
@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *supersetCountyNodes;
@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *supersetStateNodes;
@property (readonly, nonatomic) NSSet *supersets;
@property (readonly, nonatomic) NSDictionary *zeroKeywordMappingByMeaningLabel;


+(BOOL)graphExistsWithName:(id)arg0 parentDirectoryURL:(id)arg1 ;
+(NSInteger)librarySizeRangeForNumberOfAssets:(NSUInteger)arg0 ;
+(NSUInteger)meaningForMeaningLabel:(id)arg0 ;
+(id)_closestRelationshipEdgeLabelForPersonNode:(id)arg0 andOtherPersonNode:(id)arg1 ;
+(id)_findParentMeaningLabelForMeaningLabel:(id)arg0 inTree:(id)arg1 currentParent:(id)arg2 ;
+(id)_graphNodePOILabelByPlaceType;
+(id)_meaningLabelTree;
+(id)_personClosestToMeBetweenPersonNode:(id)arg0 andOtherPersonNode:(id)arg1 ;
+(id)allMeaningfulMeanings;
+(id)assetPropertySetsForIngest;
+(id)defaultMatchingSortDescriptors;
+(id)defaultSpecification;
+(id)frequentMeaningLabels;
+(id)graphURLForName:(id)arg0 parentDirectoryURL:(id)arg1 ;
+(id)graphWithVisualString:(id)arg0 error:(*id)arg1 ;
+(id)lessMeaningfulMeanings;
+(id)matchingBlockedSceneLabels;
+(id)matchingWeightToDictionary;
+(id)meaningLabelForMeaning:(NSUInteger)arg0 ;
+(id)meaningV2MeaningLabels;
+(id)mostSignificantMeaningLabels;
+(id)parentMeaningLabelForMeaningLabel:(id)arg0 ;
+(id)poiLabelForPOIType:(id)arg0 ;
+(id)preciseMeaningNodeForMeaningLabel:(id)arg0 meaningfulEvent:(id)arg1 ;
+(id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg0 ;
+(id)stellarMeanings;
+(id)veryMeaningfulMeanings;
+(void)_traverseMeaningLabelsInTree:(id)arg0 usingBlock:(id)arg1 ;
+(void)_traverseMeaningLabelsUsingBlock:(id)arg0 ;
+(void)traverseParentMeaningsForMeaningLabel:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_enumerateMomentNodesForAssetCollection:(id)arg0 paddingTime:(CGFloat)arg1 error:(*id)arg2 enumerationBlock:(id)arg3 ;
-(BOOL)copyToURL:(id)arg0 ;
-(BOOL)eventIsStellar:(id)arg0 ;
-(BOOL)eventIsVeryMeaningful:(id)arg0 ;
-(BOOL)exportMatchMomentEventResults:(id)arg0 relatedType:(NSUInteger)arg1 focusOnNodes:(id)arg2 toFileURL:(id)arg3 error:(*id)arg4 ;
-(BOOL)hasSocialGroups;
-(BOOL)isBestPairSocialGroup:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isPairSocialGroup:(id)arg0 ;
-(BOOL)isSharedLibraryEnabled;
-(BOOL)isSocialGroupEligible:(NSUInteger)arg0 longevity:(float)arg1 ;
-(BOOL)saveToURL:(id)arg0 ;
-(BOOL)singlePersonBelongsToSocialGroupOfMaxSize:(id)arg0 groups:(id)arg1 maxSize:(NSUInteger)arg2 ;
-(BOOL)singlePersonGroupIsInSocialGroups:(id)arg0 groups:(id)arg1 ;
-(CGFloat)_distanceForLocationLabel:(id)arg0 ;
-(CGFloat)_scoreForPlaceSubDomain:(unsigned short)arg0 ;
-(CGFloat)averageTopMomentTimes:(id)arg0 numberOfMoments:(NSUInteger)arg1 ;
-(CGFloat)libraryDuration;
-(CGFloat)longevity:(id)arg0 ;
-(CGFloat)momentsCountDistance:(id)arg0 withSecondBaseGroup:(id)arg1 withSubsetBias:(CGFloat)arg2 withDistanceThreshold:(CGFloat)arg3 withIntersectionBias:(CGFloat)arg4 withKey:(id)arg5 ;
-(CGFloat)peopleDistance:(id)arg0 withSecondBaseGroup:(id)arg1 threshold:(CGFloat)arg2 factor:(CGFloat)arg3 ;
-(CGFloat)relationshipScoreForPersonNode:(id)arg0 ;
-(NSInteger)libraryAge;
-(NSUInteger)_cluePeopleForRelationships:(id)arg0 ;
-(NSUInteger)_countOfDistinctSocialGroups:(id)arg0 ;
-(NSUInteger)_peopleCountWithoutMe:(id)arg0 focusOnNodes:(id)arg1 ;
-(NSUInteger)numberOfMomentNodes;
-(NSUInteger)numberOfPersonNodesIncludingMe:(BOOL)arg0 ;
-(NSUInteger)numberOfSocialGroupNodes;
-(float)normalizeFeatureValue:(float)arg0 average:(float)arg1 featureValues:(id)arg2 factor:(float)arg3 ;
-(float)recencyFeature:(CGFloat)arg0 ;
-(id)_closestLocationNodeFromAddressNode:(id)arg0 toAddressNode:(id)arg1 ;
-(id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg0 andAddressNode:(id)arg1 ;
-(id)_commonAreaNodesBetweenAddressNode:(id)arg0 andAddressNode:(id)arg1 ;
-(id)_coreEventMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_coreLocationMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_coreSceneMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_createZeroKeywordMappingByMeaningLabel;
-(id)_eventMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_eventMatchingIdsToScoresFromEvent:(id)arg0 options:(id)arg1 ;
-(id)_eventsFromEvents:(id)arg0 withTargetDomain:(unsigned short)arg1 ;
-(id)_firstLocationNodeFromAddressNode:(id)arg0 inLocationNodes:(id)arg1 ;
-(id)_fuzzyMomentLookupForMomentNode:(id)arg0 inPhotoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_fuzzyMomentNodeLookupForAssetCollection:(id)arg0 error:(*id)arg1 ;
-(id)_locationMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_locationMatchingIdsToScoresFromEvent:(id)arg0 options:(id)arg1 ;
-(id)_momentNodeForAssetCollection:(id)arg0 error:(*id)arg1 ;
-(id)_momentNodesForDateComponents:(id)arg0 error:(*id)arg1 ;
-(id)_peopleMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_peopleMatchingIdsToResultsFromEvent:(id)arg0 options:(id)arg1 ;
-(id)_peopleMatchingResultFromEvent:(id)arg0 matchedEvent:(id)arg1 presentPeopleCountForEvent:(NSUInteger)arg2 presentPeopleCountForMatchedEvent:(NSUInteger)arg3 commonPeople:(id)arg4 relationshipScoreCache:(id)arg5 needsKeywords:(BOOL)arg6 ;
-(id)_peopleWithoutMe:(id)arg0 focusOnNodes:(id)arg1 ;
-(id)_personNodeIntersectingSocialGroups:(id)arg0 ;
-(id)_placeMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_placeMatchingIdsToScoresFromEvent:(id)arg0 options:(id)arg1 ;
-(id)_previousSeasonForSeason:(id)arg0 ;
-(id)_sceneMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_sceneMatchingIdsToScoresFromEvent:(id)arg0 options:(id)arg1 ;
-(id)_socialGroupNodeForPersonNodes:(id)arg0 searchWithTolerance:(BOOL)arg1 ;
-(id)_strictMomentLookupForMomentNode:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)_strictMomentNodeLookupForAssetCollection:(id)arg0 error:(*id)arg1 ;
-(id)_timeMatchingFromEvent:(id)arg0 toEvent:(id)arg1 options:(id)arg2 ;
-(id)_timeMatchingIdsToScoresFromEvent:(id)arg0 options:(id)arg1 ;
-(id)aggregationHighlightTypeNode;
-(id)aggregationNodes;
-(id)allSocialGroupsForPersonLocalIdentifier:(id)arg0 ;
-(id)allTimeYearsNodes;
-(id)allTripNodes;
-(id)bestFittingAreaNodeFromAreaNodes:(id)arg0 ;
-(id)bestMeaningLabelForMeaningfulEvent:(id)arg0 ;
-(id)bestSocialGroupNodes;
-(id)businessNodes;
-(id)celebratedHolidayNodes;
-(id)celebratedHolidays;
-(id)children;
-(id)closestMomentNodeForLocalDate:(id)arg0 ;
-(id)commonSocialGroupNodesForPersonNodes:(id)arg0 ;
-(id)commonSocialGroupNodesForPersonNodes:(id)arg0 withThreshold:(CGFloat)arg1 ;
-(id)coworkers;
-(id)dateNodeFilterForLocalDateInterval:(id)arg0 ;
-(id)dateNodeForLocalDate:(id)arg0 ;
-(id)dateNodeNameWithLocalDate:(id)arg0 ;
-(id)dateNodesForLocalDate:(id)arg0 ;
-(id)dateNodesForLocalDateInterval:(id)arg0 ;
-(id)dateNodesForMonth:(NSInteger)arg0 ;
-(id)dateNodesForWeekOfMonth:(NSInteger)arg0 ;
-(id)dateNodesForWeekOfYear:(NSInteger)arg0 ;
-(id)dateNodesForYear:(NSInteger)arg0 ;
-(id)dateNodesIgnoringYearForLocalDate:(id)arg0 ;
-(id)dayHighlightNodes;
-(id)dayHighlightNodesSortedByDate;
-(id)dayNodeForDay:(NSInteger)arg0 ;
-(id)dayOfWeekNodeForDayOfWeek:(NSInteger)arg0 ;
-(id)dayOfWeekNodes;
-(id)defaultHighlightNodes;
-(id)defaultHighlightTypeNode;
-(id)eventNodeForAssetCollection:(id)arg0 ;
-(id)familyMembers;
-(id)favoritedPersonNodesIncludingMe:(BOOL)arg0 ;
-(id)friends;
-(id)highlightForHighlightNode:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)highlightGroupNodes;
-(id)highlightGroupNodesSortedByDate;
-(id)highlightNodeForHighlight:(id)arg0 ;
-(id)inferredMeNode;
-(id)inferredUserLocales;
-(id)initWithSpecification:(id)arg0 ;
-(id)initWithURL:(id)arg0 persistenceOptions:(NSInteger)arg1 progressReporter:(id)arg2 ;
-(id)interestingAreaNodes;
-(id)interestingCityNodes;
-(id)largeFrequentLocationNodes;
-(id)localDatesForMomentNode:(id)arg0 ;
-(id)longTripHighlightTypeNode;
-(id)longTripNodes;
-(id)mainUrbanCityNodes;
-(id)matchEvent:(id)arg0 options:(id)arg1 ;
-(id)matchEvent:(id)arg0 withEvent:(id)arg1 options:(id)arg2 ;
-(id)matchPersonNodes:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)maximalSocialGroupsForPersonLocalIdentifiers:(id)arg0 ;
-(id)meNode;
-(id)meNodeCollection;
-(id)meaningNodes;
-(id)meaningfulEventNodeForUUID:(id)arg0 ;
-(id)meaningfulEvents;
-(id)meaningfulMomentNodesSortedByDate;
-(id)meaningsFromMeaningfulEvent:(id)arg0 ;
-(id)momentForMomentNode:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)momentNodeForAsset:(id)arg0 ;
-(id)momentNodeForMoment:(id)arg0 ;
-(id)momentNodes;
-(id)momentNodesForPersonNodes:(id)arg0 ;
-(id)momentNodesOverlappingLocalDateInterval:(id)arg0 ;
-(id)momentNodesSortedByDate;
-(id)momentNodesSortedByDateFromMomentNodes:(id)arg0 ;
-(id)momentNodesWithMeaning:(NSUInteger)arg0 ;
-(id)momentsForMomentNodes:(id)arg0 inPhotoLibrary:(id)arg1 sortChronologically:(BOOL)arg2 ;
-(id)momentsResultForMomentNodes:(id)arg0 inPhotoLibrary:(id)arg1 sortChronologically:(BOOL)arg2 ;
-(id)monthNodeForMonth:(NSInteger)arg0 ;
-(id)musicGenreDistributionUsingTaggedGenres:(BOOL)arg0 ;
-(id)nodeLabelForHighlightType:(unsigned short)arg0 ;
-(id)onGoingTripHighlightTypeNode;
-(id)onGoingTripNodes;
-(id)parents;
-(id)partners;
-(id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg0 shouldIncludeMeNode:(BOOL)arg1 ;
-(id)personNodeForPersonLocalIdentifier:(id)arg0 ;
-(id)personNodesForPersonLocalIdentifiers:(id)arg0 ;
-(id)personNodesIncludingMe:(BOOL)arg0 ;
-(id)poiNodes;
-(id)previousSeasonNodeForSeasonNode:(id)arg0 ;
-(id)publicEventNodes;
-(id)relevantMomentNodesForSocialGroupProcessing;
-(id)sceneNodeForSceneName:(id)arg0 ;
-(id)sceneNodesForSceneNames:(id)arg0 ;
-(id)seasonNodeForLocalDate:(id)arg0 ;
-(id)shortTripHighlightTypeNode;
-(id)shortTripNodes;
-(id)socialGroupNodeForPersonNodes:(id)arg0 ;
-(id)socialGroupNodesSortedByImportance;
-(id)socialGroupsForPersonLocalIdentifiers:(id)arg0 ;
-(id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg0 shouldIncludeMeNode:(BOOL)arg1 ;
-(id)sortedSocialGroupNodesWithMomentNodes:(id)arg0 ;
-(id)staticGraphSchema;
-(id)trips;
-(id)weekends;
-(id)yearNodeForYear:(NSInteger)arg0 ;
-(void)_checkCanRead;
-(void)_enumerateMeaningfulEventsWithMeaningLabel:(id)arg0 visitedMeaningfulEvents:(id)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateMomentForMomentNode:(id)arg0 inPhotoLibrary:(id)arg1 paddingTime:(CGFloat)arg2 enumerationBlock:(id)arg3 ;
-(void)_reportBusinessItemsWithAnalytics:(id)arg0 ;
-(void)_reportDisambiguatedLocationsWithAnalytics:(id)arg0 ;
-(void)_reportLibraryWithAnalytics:(id)arg0 ;
-(void)_reportMobilityWithAnalytics:(id)arg0 ;
-(void)enumerateAreaNodesUsingBlock:(id)arg0 ;
-(void)enumerateBusinessNodesUsingBlock:(id)arg0 ;
-(void)enumerateCelebratedHolidayNodesUsingBlock:(id)arg0 ;
-(void)enumerateDayHighlightNodesWithBlock:(id)arg0 ;
-(void)enumerateHighlightGroupNodesWithBlock:(id)arg0 ;
-(void)enumerateMeaningfulEventsWithMeaning:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateMeaningsFromMeaningfulEvent:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateMomentNodesWithMeaning:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateMusicSessionNodesUsingBlock:(id)arg0 ;
-(void)enumeratePeopleClustersIncludingMeNode:(BOOL)arg0 socialGroupsVersion:(NSUInteger)arg1 singlePersonGroups:(*id)arg2 withBlock:(id)arg3 ;
-(void)enumeratePeopleClustersWithLinkage:(NSUInteger)arg0 threshold:(CGFloat)arg1 includingMeNode:(BOOL)arg2 socialGroupsVersion:(NSUInteger)arg3 singlePersonGroups:(*id)arg4 withBlock:(id)arg5 ;
-(void)enumeratePersonNodesIncludingMe:(BOOL)arg0 withBlock:(id)arg1 ;
-(void)enumeratePublicEventNodesUsingBlock:(id)arg0 ;
// -(void)enumerateSocialGroupsIncludingMeNode:(BOOL)arg0 socialGroupsVersion:(NSUInteger)arg1 validGroupsBlock:(id)arg2 invalidGroupsBlock:(unk)arg3 averageWeight:(id)arg4  ;
// -(void)enumerateSocialGroupsIncludingMeNode:(BOOL)arg0 validGroupsBlock:(id)arg1 invalidGroupsBlock:(unk)arg2 averageWeight:(id)arg3  ;
-(void)enumerateSocialGroupsWithBlock:(id)arg0 ;
-(void)invalidateMemoryCaches;
-(void)invalidateProcessingCaches;
-(void)invalidateSupersetCaches;
-(void)reportMetricsLogsWithAnalytics:(id)arg0 ;
-(void)unloadMessageProfile;


@end


#endif