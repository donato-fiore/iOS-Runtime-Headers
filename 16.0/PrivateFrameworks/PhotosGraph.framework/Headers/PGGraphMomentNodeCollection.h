// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHMOMENTNODECOLLECTION_H
#define PGGRAPHMOMENTNODECOLLECTION_H

@class NSString, NSDateInterval, NSSet;
@protocol PGGraphEventCollection, PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphBabyNodeCollection.h"
#import "PGGraphROINodeCollection.h"
#import "PGGraphBusinessNodeCollection.h"
#import "PGGraphHolidayNodeCollection.h"
#import "PGGraphLocationCityNodeCollection.h"
#import "PGGraphDateNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphFrequentLocationNodeCollection.h"
#import "PGGraphSceneNodeCollection.h"
#import "PGGraphHighlightNodeCollection.h"
#import "PGGraphPOINodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphMemoryNodeCollection.h"
#import "PGGraphMobilityNodeCollection.h"
#import "PGGraphPartOfWeekNodeCollection.h"
#import "PGGraphPetNodeCollection.h"
#import "PGGraphPublicEventNodeCollection.h"
#import "PGGraphSocialGroupNodeCollection.h"
#import "PGGraphWeekdayNodeCollection.h"
#import "PGGraphWeekendNodeCollection.h"

@interface PGGraphMomentNodeCollection : PGGraphNodeCollection <PGGraphEventCollection, PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *anniversaryPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *authorNodes;
@property (readonly, nonatomic) PGGraphBabyNodeCollection *babyNodes;
@property (readonly, nonatomic) PGGraphROINodeCollection *beachRoiNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *birthdayPersonNodes;
@property (readonly, nonatomic) PGGraphBusinessNodeCollection *businessNodes;
@property (readonly, nonatomic) PGGraphHolidayNodeCollection *celebratedHolidayNodes;
@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *cityNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *consolidatedPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *consolidatedPersonNodesPresentInAssets;
@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodes;
@property (readonly, nonatomic) PGGraphFrequentLocationNodeCollection *frequentLocationNodes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *highConfidenceSceneNodes;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly, nonatomic) PGGraphPOINodeCollection *improvedPOINodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *interestingForMemoriesSubset;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *interestingSubset;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *interestingWithAlternateJunkingSubset;
@property (readonly, nonatomic) NSDateInterval *localDateInterval;
@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodes;
@property (readonly, nonatomic) PGGraphMobilityNodeCollection *mobilityNodes;
@property (readonly, nonatomic) PGGraphROINodeCollection *mountainRoiNodes;
@property (readonly, nonatomic) PGGraphROINodeCollection *natureRoiNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *nextMomentNodes;
@property (readonly) NSUInteger numberOfAssets;
@property (readonly) NSUInteger numberOfAssetsInExtendedCuration;
@property (readonly) NSUInteger numberOfAssetsWithPersons;
@property (readonly, nonatomic) PGGraphPartOfWeekNodeCollection *partOfWeekNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodesInProximity;
@property (readonly, nonatomic) PGGraphPetNodeCollection *petNodes;
@property (readonly, nonatomic) PGGraphPOINodeCollection *poiNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *preciseAddressNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *presentPersonNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *previousMomentNodes;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *reliableMeaningNodes;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *reliableSceneNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *remoteAddressNodes;
@property (readonly, nonatomic) PGGraphROINodeCollection *roiNodes;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *searchConfidenceSceneNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *smartInterestingSubset;
@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *socialGroupNodes;
@property (readonly, nonatomic) PGGraphPOINodeCollection *specialPOINodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *subsetHappeningAtSensitiveLocation;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *subsetWithBothPrivateAndSharedAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *subsetWithOnlyPrivateAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *subsetWithOnlySharedAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *subsetWithPrivateAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *subsetWithSharedAssets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDateInterval *universalDateInterval;
@property (readonly, nonatomic) NSSet *universalStartDates;
@property (readonly, nonatomic) PGGraphROINodeCollection *urbanRoiNodes;
@property (readonly, nonatomic) NSSet *uuids;
@property (readonly, nonatomic) PGGraphROINodeCollection *waterRoiNodes;
@property (readonly, nonatomic) PGGraphWeekdayNodeCollection *weekdayNodes;
@property (readonly, nonatomic) PGGraphWeekendNodeCollection *weekendNodes;


+(Class)nodeClass;
+(id)momentNodeAsCollectionByMomentUUIDForArrayOfMomentUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodeAsCollectionByMomentUUIDForMomentUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodeForUUID:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodesForArrayOfUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodesForLocalDateInterval:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodesForUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodesInUniversalDateInterval:(id)arg0 inGraph:(id)arg1 ;
+(id)momentNodesWithEnoughFacesProcessedInGraph:(id)arg0 ;
+(id)momentNodesWithEnoughScenesProcessedInGraph:(id)arg0 ;
-(BOOL)happensPartiallyAtHomeOrWorkOfPersonNodes:(id)arg0 ;
-(CGFloat)averageContentScore;
-(id)eventMomentNodes;
-(id)firstAndLastMomentNodes;
-(id)momentNodeAsCollectionByMomentUUID;
-(id)momentNodeByMomentUUID;
-(id)momentNodesWithContentScoreAbove:(CGFloat)arg0 ;
-(id)momentNodesWithMinimumNumberOfExtendedCuratedAssets:(NSUInteger)arg0 ;
-(id)momentNodesWithMinimumNumberOfPersons:(NSUInteger)arg0 ;
-(id)personActivityMeaningNodes;
-(id)poiNodesForLabel:(id)arg0 ;
-(id)subsetForLocalDateInterval:(id)arg0 ;
-(id)subsetWithEnoughFacesProcessed;
-(id)subsetWithEnoughScenesProcessed;
-(id)subsetWithTotalNumberOfPersonsGreaterThanOrEqualTo:(NSUInteger)arg0 ;
-(void)enumerateLocalEndDatesUsingBlock:(id)arg0 ;
-(void)enumerateLocalStartDatesUsingBlock:(id)arg0 ;
-(void)enumerateUUIDsUsingBlock:(id)arg0 ;
-(void)enumerateUniversalEndDatesUsingBlock:(id)arg0 ;
-(void)enumerateUniversalStartDatesUsingBlock:(id)arg0 ;


@end


#endif