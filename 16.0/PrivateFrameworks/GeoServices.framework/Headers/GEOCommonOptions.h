// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMMONOPTIONS_H
#define GEOCOMMONOPTIONS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOCommonOptions : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    BOOL _excludeGuidance;
    BOOL _includeSnapScoreMetadataDebug;
    BOOL _includeSummaryForPredictedDestination;
    BOOL _includeTravelTimeAggressive;
    BOOL _includeTravelTimeConservative;
    BOOL _includeTravelTimeEstimate;
    BOOL _supportsArMode;
    ? _flags;
}


@property (nonatomic) BOOL excludeGuidance;
@property (nonatomic) BOOL hasExcludeGuidance;
@property (nonatomic) BOOL hasIncludeSnapScoreMetadataDebug;
@property (nonatomic) BOOL hasIncludeSummaryForPredictedDestination;
@property (nonatomic) BOOL hasIncludeTravelTimeAggressive;
@property (nonatomic) BOOL hasIncludeTravelTimeConservative;
@property (nonatomic) BOOL hasIncludeTravelTimeEstimate;
@property (nonatomic) BOOL hasSupportsArMode;
@property (nonatomic) BOOL includeSnapScoreMetadataDebug;
@property (nonatomic) BOOL includeSummaryForPredictedDestination;
@property (nonatomic) BOOL includeTravelTimeAggressive;
@property (nonatomic) BOOL includeTravelTimeConservative;
@property (nonatomic) BOOL includeTravelTimeEstimate;
@property (nonatomic) BOOL supportsArMode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif