// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBANCHORMODELENGAGEMENTTRACKER_H
#define ATXMPBANCHORMODELENGAGEMENTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBAnchorModelEngagementTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) CGFloat anchorPopularity; // ivar: _anchorPopularity
@property (retain, nonatomic) NSString *anchorType; // ivar: _anchorType
@property (retain, nonatomic) NSString *candidateType; // ivar: _candidateType
@property (nonatomic) CGFloat classConditionalProbability; // ivar: _classConditionalProbability
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (nonatomic) int engagementType; // ivar: _engagementType
@property (retain, nonatomic) NSString *executableObject; // ivar: _executableObject
@property (nonatomic) CGFloat globalPopularity; // ivar: _globalPopularity
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasAnchorPopularity;
@property (readonly, nonatomic) BOOL hasAnchorType;
@property (readonly, nonatomic) BOOL hasCandidateType;
@property (nonatomic) BOOL hasClassConditionalProbability;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasEngagementType;
@property (readonly, nonatomic) BOOL hasExecutableObject;
@property (nonatomic) BOOL hasGlobalPopularity;
@property (nonatomic) BOOL hasNumPredictionsforAnchor;
@property (nonatomic) BOOL hasNumUniqueOccurrencesAfterAnchor;
@property (nonatomic) BOOL hasPosteriorProbability;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasSecondsAfterAnchor;
@property (nonatomic) BOOL hasStandardDeviationOfOffsetFromAnchor;
@property (nonatomic) unsigned int numPredictionsforAnchor; // ivar: _numPredictionsforAnchor
@property (nonatomic) unsigned int numUniqueOccurrencesAfterAnchor; // ivar: _numUniqueOccurrencesAfterAnchor
@property (nonatomic) CGFloat posteriorProbability; // ivar: _posteriorProbability
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) unsigned int secondsAfterAnchor; // ivar: _secondsAfterAnchor
@property (nonatomic) CGFloat standardDeviationOfOffsetFromAnchor; // ivar: _standardDeviationOfOffsetFromAnchor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementTypeAsString:(int)arg0 ;
-(int)StringAsEngagementType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif