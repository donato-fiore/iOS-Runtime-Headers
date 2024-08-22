// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTIMELINERELEVANCEPBTIMELINERELEVANCESUGGESTION_H
#define ATXTIMELINERELEVANCEPBTIMELINERELEVANCESUGGESTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXTimelineRelevancePBTimelineRelevanceSuggestion : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *abuseControlOutcomes; // ivar: _abuseControlOutcomes
@property (readonly, nonatomic) BOOL hasSuggestionID;
@property (retain, nonatomic) NSString *suggestionID; // ivar: _suggestionID
@property (retain, nonatomic) NSMutableArray *timelineRelevanceScoreEntrys; // ivar: _timelineRelevanceScoreEntrys


+(Class)abuseControlOutcomeType;
+(Class)timelineRelevanceScoreEntryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)abuseControlOutcomeAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)timelineRelevanceScoreEntryAtIndex:(NSUInteger)arg0 ;
-(void)addAbuseControlOutcome:(id)arg0 ;
-(void)addTimelineRelevanceScoreEntry:(id)arg0 ;
-(void)clearAbuseControlOutcomes;
-(void)clearTimelineRelevanceScoreEntrys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif