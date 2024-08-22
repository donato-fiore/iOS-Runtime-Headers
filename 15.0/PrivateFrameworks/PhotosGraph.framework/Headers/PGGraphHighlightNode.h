// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHHIGHLIGHTNODE_H
#define PGGRAPHHIGHLIGHTNODE_H

@class NSString, NSDate;
@protocol PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment, PGAssetCollectionFeature, PGGraphEventCollection;


#import "PGGraphOptimizedNode.h"
#import "PGGraphHighlightNodeCollection.h"
#import "PGGraphHighlightGroupNode.h"

@interface PGGraphHighlightNode : PGGraphOptimizedNode <PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment, PGAssetCollectionFeature>

 {
    CGFloat _localStartTimestamp;
    CGFloat _localEndTimestamp;
}


@property (readonly) NSString *UUID;
@property (readonly) BOOL babyIsPresent;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *collection;
@property (readonly) CGFloat contentScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<PGGraphEventCollection> *eventCollection;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) BOOL hasLocation;
@property (readonly) NSUInteger hash;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly) BOOL isAggregation;
@property (readonly) BOOL isInteresting;
@property (readonly) BOOL isInterestingWithAlternateJunking;
@property (readonly) BOOL isLongTrip;
@property (readonly) BOOL isPartOfAggregation;
@property (readonly) BOOL isPartOfLongTrip;
@property (readonly) BOOL isPartOfShortTrip;
@property (readonly) BOOL isPartOfTrip;
@property (readonly) BOOL isShortTrip;
@property (readonly) BOOL isSmartInteresting;
@property (readonly) BOOL isTrip;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSUInteger numberOfRegularGemAssets;
@property (readonly) NSUInteger numberOfShinyGemAssets;
@property (readonly) BOOL petIsPresent;
@property (readonly) NSObject<PGGraphEventCollection> *scenedEventCollection;
@property (readonly) Class superclass;
@property (readonly) CGFloat timestampUTCEnd; // ivar: _universalEndTimestamp
@property (readonly) CGFloat timestampUTCStart; // ivar: _universalStartTimestamp
@property (readonly) CGFloat timezoneOffsetAtEnd;
@property (readonly) CGFloat timezoneOffsetAtStart;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly) NSString *uuid; // ivar: _uuid


+(CGFloat)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(struct ? )arg0 ;
+(CGFloat)averagePromotionScoreWithPromotionScoreDescriptor:(struct ? )arg0 ;
+(CGFloat)belowAveragePromotionScoreWithPromotionScoreDescriptor:(struct ? )arg0 ;
+(CGFloat)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(struct ? )arg0 isAggregation:(BOOL)arg1 enrichmentState:(unsigned short)arg2 ;
+(CGFloat)promotionScoreWithHighlightNode:(id)arg0 enrichmentState:(unsigned short)arg1 numberOfExtendedAssets:(NSUInteger)arg2 neighborScoreComputer:(id)arg3 ;
+(id)allHighlightsFilter;
+(id)dayHighlightsFilter;
+(id)filter;
+(id)filterWithUUID:(id)arg0 ;
+(id)filterWithUUIDs:(id)arg0 ;
+(id)highlightGroupOfHighlight;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg0 withName:(id)arg1 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg0 withName:(id)arg1 ;
+(id)momentInDayHighlight;
+(id)momentInHighlight;
+(id)otherVeryMeaningfulMeanings;
+(id)pathFromMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg0 ;
+(id)pathToMoment;
+(id)pathToTargetNodeDomain:(unsigned short)arg0 ;
+(id)promotionScoreSortDescriptors;
+(id)propertiesWithHighlight:(id)arg0 ;
+(id)scoreSortDescriptors;
+(struct ? )_promotionScoreDescriptorWithMomentNodes:(id)arg0 neighborScoreComputer:(id)arg1 ;
-(BOOL)endsBeforeLocalDate:(id)arg0 ;
-(BOOL)happensPartiallyAtHomeOfPersonNodes:(id)arg0 ;
-(BOOL)happensPartiallyAtHomeOrWorkOfPersonNodes:(id)arg0 ;
-(BOOL)happensPartiallyAtWorkOfPersonNodes:(id)arg0 ;
-(BOOL)hasPeopleCountingMe:(BOOL)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)startsAfterLocalDate:(id)arg0 ;
-(CGFloat)nonMeaningfulPromotionScoreForTripKeyAssetWithEnrichmentState:(unsigned short)arg0 neighborScoreComputer:(id)arg1 ;
-(CGFloat)weightForMoment:(id)arg0 ;
-(id)addressNodes;
-(id)anniversaryPersonNodes;
-(id)birthdayPersonNodes;
-(id)businessNodes;
-(id)businessedEvent;
-(id)celebratedHolidayNodes;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg0 ;
-(id)dateNodes;
-(id)debugDictionary;
-(id)enrichableEvent;
-(id)eventEnrichmentMomentNodes;
-(id)eventEnrichmentSortedMomentNodes;
-(id)eventSortedMomentNodes;
-(id)holidayNodes;
-(id)initFromHighlight:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)keywordsForRelatedType:(NSUInteger)arg0 focusOnNodes:(id)arg1 ;
-(id)label;
-(id)locatedEvent;
-(id)meaningLabels;
-(id)meaningfulEvent;
-(id)naturalLanguageFeatures;
-(id)peopledEvent;
-(id)personNodes;
-(id)photoEvent;
-(id)poiNodes;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)publicEventNodes;
-(id)relatableEvent;
-(id)relatableNode;
-(id)reliableMeaningLabels;
-(id)roiNodes;
-(id)scenedEvent;
-(id)seasonNodes;
-(id)socialGroupNodes;
-(id)timedEvent;
-(unsigned short)domain;
-(void)enumerateBusinessesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)setLocalProperties:(id)arg0 ;


@end


#endif