// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHMOMENTNODE_H
#define PGGRAPHMOMENTNODE_H

@class NSString, NSSet, NSDate, CLLocation;
@protocol PLMomentProcessingProtocol, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment, PGAssetCollectionFeature, PGGraphEventCollection;


#import "PGGraphOptimizedNode.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphHighlightGroupNode.h"
#import "PGGraphHighlightNode.h"
#import "PGGraphMomentNode.h"

@interface PGGraphMomentNode : PGGraphOptimizedNode <PLMomentProcessingProtocol, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment, PGAssetCollectionFeature>

 {
    NSString *_localIdentifier;
    CGFloat _localStartTimestamp;
    CGFloat _localEndTimestamp;
    BOOL _numberOfPersonNodes;
}


@property (readonly) NSString *UUID;
@property (readonly) BOOL babyIsPresent;
@property (readonly) CGFloat behavioralScore; // ivar: _behavioralScore
@property (readonly, nonatomic) PGGraphMomentNodeCollection *collection;
@property (readonly) BOOL containsBetterScoringAsset; // ivar: _containsBetterScoringAsset
@property (readonly) BOOL containsNonJunkAssets; // ivar: _containsNonJunkAssets
@property (readonly) CGFloat contentScore; // ivar: _contentScore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<PGGraphEventCollection> *eventCollection;
@property (readonly) CGFloat facesProcessedRatio; // ivar: _facesProcessedRatio
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSSet *frequentLocationNodes;
@property (readonly) BOOL happensAtFrequentLocation;
@property (readonly) BOOL happensAtSensitiveLocation; // ivar: _happensAtSensitiveLocation
@property (readonly) BOOL hasAddressNodes;
@property (readonly) BOOL hasAssetsWithInterestingScenes; // ivar: _hasAssetsWithInterestingScenes
@property (readonly) BOOL hasEnoughFacesProcessed;
@property (readonly) BOOL hasEnoughScenesProcessed;
@property (readonly) BOOL hasHigherThanImprovedAssets; // ivar: _hasHigherThanImprovedAssets
@property (readonly) BOOL hasLocation;
@property (readonly) BOOL hasMeanings;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly) PGGraphHighlightNode *highlightNode;
@property (readonly) CGFloat inhabitationScore; // ivar: _inhabitationScore
@property (readonly) BOOL isAggregation;
@property (readonly) BOOL isInteresting; // ivar: _isInteresting
@property (readonly) BOOL isInterestingForMemories;
@property (readonly) BOOL isInterestingWithAlternateJunking; // ivar: _isInterestingWithAlternateJunking
@property (readonly) BOOL isLongTrip;
@property (readonly) BOOL isMeaningful;
@property (readonly) BOOL isPartOfTrip;
@property (readonly) BOOL isShortTrip;
@property (readonly) BOOL isSmartInteresting; // ivar: _isSmartInteresting
@property (readonly) BOOL isTrip;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSUInteger locationMobilityType;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) PGGraphMomentNode *nextMomentNode;
@property (readonly) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly) NSUInteger numberOfAssetsInExtendedCuration; // ivar: _numberOfAssetsInExtendedCuration
@property (readonly) NSUInteger numberOfAssetsWithPersons; // ivar: _numberOfAssetsWithPersons
@property (readonly) NSUInteger numberOfRegularGemAssets; // ivar: _numberOfRegularGemAssets
@property (readonly) NSUInteger numberOfShinyGemAssets; // ivar: _numberOfShinyGemAssets
@property (readonly) BOOL petIsPresent;
@property (readonly, nonatomic) CLLocationCoordinate2D pl_coordinate;
@property (readonly, nonatomic) NSDate *pl_endDate;
@property (readonly, nonatomic) CLLocation *pl_location;
@property (readonly, nonatomic) NSUInteger pl_numberOfAssets;
@property (readonly, nonatomic) short pl_originatorState;
@property (readonly, nonatomic) NSDate *pl_startDate;
@property (readonly) PGGraphMomentNode *previousMomentNode;
@property (readonly) NSObject<PGGraphEventCollection> *scenedEventCollection;
@property (readonly) CGFloat scenesProcessedRatio; // ivar: _scenesProcessedRatio
@property (readonly) unsigned short sharingComposition; // ivar: _sharingComposition
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) CGFloat timestampUTCEnd; // ivar: _universalEndTimestamp
@property (readonly) CGFloat timestampUTCStart; // ivar: _universalStartTimestamp
@property (readonly) NSUInteger totalNumberOfPersons; // ivar: _totalNumberOfPersons
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly, nonatomic) NSString *uuid;


+(NSInteger)breakoutOfRoutineTypeWithNeighborScore:(CGFloat)arg0 ;
+(id)addressOfMoment;
+(id)anniversaryPersonInMoment;
+(id)authorOfMoment;
+(id)babyPresentInMoment;
+(id)birthdayPersonInMoment;
+(id)businessOfMoment;
+(id)celebratedHolidayOfMoment;
+(id)cityOfMoment;
+(id)consolidatedPersonInMoment;
+(id)consolidatedPersonPresentInAssets;
+(id)contentBasedPropertiesWithMoment:(id)arg0 ;
+(id)dateOfMoment;
+(id)featureOfMoment;
+(id)filter;
+(id)filterWithLocalDateInterval:(id)arg0 ;
+(id)filterWithTotalNumberOfPersonsGreaterThanOrEqualTo:(NSUInteger)arg0 ;
+(id)filterWithUUID:(id)arg0 ;
+(id)filterWithUUIDs:(id)arg0 ;
+(id)filterWithUniversalDateInterval:(id)arg0 ;
+(id)firstAndLastMomentNodesInMomentNodes:(id)arg0 ;
+(id)frequentLocationOfMoment;
+(id)highlightOfMoment;
+(id)improvedPOIOfMoment;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg0 withName:(id)arg1 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg0 withName:(id)arg1 ;
+(id)interestingFilter;
+(id)interestingWithAlternateJunkingFilter;
+(id)meaningHierarchyOfMoment;
+(id)meaningOfMoment;
+(id)memoryOfMoment;
+(id)mobilityOfMoment;
+(id)momentWithOnlyPrivateAssetsOfMoment;
+(id)momentWithOnlySharedAssetsOfMoment;
+(id)momentWithPrivateAndSharedAssetsOfMoment;
+(id)momentWithPrivateAssetsOfMoment;
+(id)momentWithSharedAssetsOfMoment;
+(id)nextMomentOfMoment;
+(id)partOfDayOfMoment;
+(id)pathFromMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg0 ;
+(id)pathToMoment;
+(id)pathToTargetNodeDomain:(unsigned short)arg0 ;
+(id)personActivityMeaningOfMoment;
+(id)personExcludingMeInMoment;
+(id)personInMoment;
+(id)personInProximityInMoment;
+(id)personPhysicallyPresentInMoment;
+(id)petPresentInMoment;
+(id)poiOfMoment;
+(id)poiWithNonzeroConfidenceOfMoment;
+(id)preciseAddressOfMoment;
+(id)previousMomentOfMoment;
+(id)propertiesWithMoment:(id)arg0 ;
+(id)publicEventOfMoment;
+(id)reliableMeaningOfMoment;
+(id)reliableSceneOfMoment;
+(id)remoteAddressOfMoment;
+(id)roiOfMoment;
+(id)roiWithNonzeroConfidenceOfMoment;
+(id)sceneOfMoment;
+(id)scoreSortDescriptors;
+(id)significantPartOfDayOfMoment;
+(id)smartInterestingFilter;
+(id)socialGroupInMoment;
+(id)specialPOIOfMoment;
+(id)weekdayOfMoment;
+(id)weekendOfMoment;
-(BOOL)endsBeforeLocalDate:(id)arg0 ;
-(BOOL)happensPartiallyAtHomeOfPersonNodes:(id)arg0 ;
-(BOOL)happensPartiallyAtHomeOrWorkOfPersonNodes:(id)arg0 ;
-(BOOL)happensPartiallyAtWorkOfPersonNodes:(id)arg0 ;
-(BOOL)hasPeopleCountingMe:(BOOL)arg0 ;
-(BOOL)hasPersonNodes;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isWeekend;
-(BOOL)startsAfterLocalDate:(id)arg0 ;
-(CGFloat)graphScore;
-(CGFloat)meaningScore;
-(CGFloat)weightForMoment:(id)arg0 ;
-(NSInteger)_compareToMomentNode:(id)arg0 withSortDescriptors:(id)arg1 ;
-(NSUInteger)_partsOfDayWithThreshold:(CGFloat)arg0 ;
-(NSUInteger)partsOfDay;
-(NSUInteger)significantPartsOfDay;
-(id)addressEdges;
-(id)addressNodes;
-(id)anniversaryPersonNodes;
-(id)associatedNodesForRemoval;
-(id)bestAddressNode;
-(id)birthdayPersonNodes;
-(id)businessNodes;
-(id)businessedEvent;
-(id)celebratedHolidayNodes;
-(id)changingPropertiesWithProperties:(id)arg0 ;
-(id)cityNodes;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg0 ;
-(id)consolidatedPersonNodes;
-(id)consolidatedPersonNodesPresentInAssets;
-(id)countryNodes;
-(id)dateNodes;
-(id)debugDictionary;
-(id)earlierMomentNode:(id)arg0 ;
-(id)enrichableEvent;
-(id)eventEnrichmentMomentNodes;
-(id)eventEnrichmentSortedMomentNodes;
-(id)eventSortedMomentNodes;
-(id)holidayNodes;
-(id)initFromMoment:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)keywordsForRelatedType:(NSUInteger)arg0 focusOnNodes:(id)arg1 ;
-(id)label;
-(id)lastWeekendMoments;
-(id)laterMomentNode:(id)arg0 ;
-(id)locatedEvent;
-(id)meaningLabels;
-(id)meaningLabelsIncludingParents;
-(id)meaningNodes;
-(id)meaningfulEvent;
-(id)naturalLanguageFeatures;
-(id)peopledEvent;
-(id)personNodes;
-(id)personNodesInProximity;
-(id)photoEvent;
-(id)poiNodes;
-(id)preciseAddressEdges;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)publicEventNodes;
-(id)relatableEvent;
-(id)relatableNode;
-(id)reliableMeaningLabels;
-(id)remoteAddressEdges;
-(id)roiNodes;
-(id)sameMonthMoments;
-(id)sameWeekendMoments;
-(id)scenedEvent;
-(id)seasonNodes;
-(id)socialGroupNodes;
-(id)timedEvent;
-(id)weekendNode;
-(struct CLLocationCoordinate2D )bestLocationCoordinate;
-(unsigned short)domain;
-(void)_enumeratePartsOfDayWithThreshold:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)enumerateAddressEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateBabyNodesUsingBlock:(id)arg0 ;
-(void)enumerateBusinessEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateBusinessNodesUsingBlock:(id)arg0 ;
-(void)enumerateBusinessesUsingBlock:(id)arg0 ;
-(void)enumerateCelebratedHolidayNodesUsingBlock:(id)arg0 ;
-(void)enumerateConsolidatedAddressesUsingBlock:(id)arg0 ;
-(void)enumerateDateEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateDateNodesUsingBlock:(id)arg0 ;
-(void)enumerateFrequentLocationNodesUsingBlock:(id)arg0 ;
-(void)enumerateHighlightNodesUsingBlock:(id)arg0 ;
-(void)enumerateMeaningEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateMeaningNodesUsingBlock:(id)arg0 ;
-(void)enumerateMeaningfulEventsUsingBlock:(id)arg0 ;
-(void)enumeratePOIEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePOINodesUsingBlock:(id)arg0 ;
-(void)enumeratePartOfDayEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePartsOfDayUsingBlock:(id)arg0 ;
-(void)enumeratePersonEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePersonNodesUsingBlock:(id)arg0 ;
-(void)enumeratePetNodesUsingBlock:(id)arg0 ;
-(void)enumeratePreciseAddressEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePreciseAddressNodesUsingBlock:(id)arg0 ;
-(void)enumeratePublicEventEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumeratePublicEventNodesUsingBlock:(id)arg0 ;
-(void)enumerateROIEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateROINodesUsingBlock:(id)arg0 ;
-(void)enumerateReliableMeaningNodesUsingBlock:(id)arg0 ;
-(void)enumerateRemoteAddressNodesUsingBlock:(id)arg0 ;
-(void)enumerateSceneEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateSceneNodesUsingBlock:(id)arg0 ;
-(void)enumerateSignificantPartsOfDayUsingBlock:(id)arg0 ;
-(void)enumerateSocialGroupEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateSocialGroupNodesUsingBlock:(id)arg0 ;
-(void)setLocalProperties:(id)arg0 ;


@end


#endif