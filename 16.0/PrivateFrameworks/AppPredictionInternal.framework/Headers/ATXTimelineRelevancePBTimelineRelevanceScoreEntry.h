// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTIMELINERELEVANCEPBTIMELINERELEVANCESCOREENTRY_H
#define ATXTIMELINERELEVANCEPBTIMELINERELEVANCESCOREENTRY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXTimelineRelevancePBTimelineRelevanceScoreEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasRelevanceScore;
@property (readonly, nonatomic) BOOL hasSuggestionID;
@property (nonatomic) BOOL hasSuggestionMappingReason;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (retain, nonatomic) NSString *suggestionID; // ivar: _suggestionID
@property (nonatomic) int suggestionMappingReason; // ivar: _suggestionMappingReason
@property (nonatomic) NSInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestionMappingReasonAsString:(int)arg0 ;
-(int)StringAsSuggestionMappingReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif