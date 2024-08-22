// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXTIMELINERELEVANCEPBTIMELINERELEVANCECONTAINER_H
#define ATXTIMELINERELEVANCEPBTIMELINERELEVANCECONTAINER_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXTimelineRelevancePBFeatureVector.h"

@interface ATXTimelineRelevancePBTimelineRelevanceContainer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) BOOL atLeastOnePositiveTimelineRelevanceScore; // ivar: _atLeastOnePositiveTimelineRelevanceScore
@property (retain, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (retain, nonatomic) ATXTimelineRelevancePBFeatureVector *featureVector; // ivar: _featureVector
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasAtLeastOnePositiveTimelineRelevanceScore;
@property (readonly, nonatomic) BOOL hasContainerBundleIdentifier;
@property (readonly, nonatomic) BOOL hasFeatureVector;
@property (nonatomic) BOOL hasTimelineDonationNilCount;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *rotations; // ivar: _rotations
@property (retain, nonatomic) NSMutableArray *stackConfigSummarys; // ivar: _stackConfigSummarys
@property (nonatomic) NSInteger timelineDonationNilCount; // ivar: _timelineDonationNilCount
@property (retain, nonatomic) NSMutableArray *timelineRelevanceScores; // ivar: _timelineRelevanceScores
@property (retain, nonatomic) NSMutableArray *timelineRelevanceSuggestions; // ivar: _timelineRelevanceSuggestions
@property (nonatomic) NSInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (nonatomic) int widgetFamily; // ivar: _widgetFamily
@property (retain, nonatomic) NSString *widgetKind; // ivar: _widgetKind


+(Class)rotationType;
+(Class)stackConfigSummaryType;
+(Class)timelineRelevanceScoreType;
+(Class)timelineRelevanceSuggestionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rotationAtIndex:(NSUInteger)arg0 ;
-(id)stackConfigSummaryAtIndex:(NSUInteger)arg0 ;
-(id)timelineRelevanceScoreAtIndex:(NSUInteger)arg0 ;
-(id)timelineRelevanceSuggestionAtIndex:(NSUInteger)arg0 ;
-(id)widgetFamilyAsString:(int)arg0 ;
-(int)StringAsWidgetFamily:(id)arg0 ;
-(void)addRotation:(id)arg0 ;
-(void)addStackConfigSummary:(id)arg0 ;
-(void)addTimelineRelevanceScore:(id)arg0 ;
-(void)addTimelineRelevanceSuggestion:(id)arg0 ;
-(void)clearRotations;
-(void)clearStackConfigSummarys;
-(void)clearTimelineRelevanceScores;
-(void)clearTimelineRelevanceSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif