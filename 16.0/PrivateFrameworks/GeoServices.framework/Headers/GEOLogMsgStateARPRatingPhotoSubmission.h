// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATEARPRATINGPHOTOSUBMISSION_H
#define GEOLOGMSGSTATEARPRATINGPHOTOSUBMISSION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOLogMsgStateARPRatingPhotoSubmission : PBCodable <NSCopying>

 {
    NSString *_originTarget;
    BOOL _isFromMapsSuggesions;
    BOOL _isFromRecommendationCard;
    BOOL _isPlacecardInlineSubmission;
    ? _flags;
}


@property (nonatomic) BOOL hasIsFromMapsSuggesions;
@property (nonatomic) BOOL hasIsFromRecommendationCard;
@property (nonatomic) BOOL hasIsPlacecardInlineSubmission;
@property (readonly, nonatomic) BOOL hasOriginTarget;
@property (nonatomic) BOOL isFromMapsSuggesions;
@property (nonatomic) BOOL isFromRecommendationCard;
@property (nonatomic) BOOL isPlacecardInlineSubmission;
@property (retain, nonatomic) NSString *originTarget;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif