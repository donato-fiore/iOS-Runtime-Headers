// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBPROACTIVESUGGESTIONSCORESPECIFICATION_H
#define ATXPBPROACTIVESUGGESTIONSCORESPECIFICATION_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBProactiveSuggestionScoreSpecification : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRawScore;
@property (nonatomic) BOOL hasSuggestedConfidenceCategory;
@property (nonatomic) CGFloat rawScore; // ivar: _rawScore
@property (nonatomic) int suggestedConfidenceCategory; // ivar: _suggestedConfidenceCategory


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestedConfidenceCategoryAsString:(int)arg0 ;
-(int)StringAsSuggestedConfidenceCategory:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif