// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPARSECRANKINGFEATURES_H
#define GEOPDPARSECRANKINGFEATURES_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDParsecRankingFeatures : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _distanceFromContainment;
    CGFloat _distanceFromDeviceLocation;
    CGFloat _expectedCtr;
    BOOL _isRecallMismatch;
    BOOL _isSpellCorrected;
    ? _flags;
}


@property (nonatomic) CGFloat distanceFromContainment;
@property (nonatomic) CGFloat distanceFromDeviceLocation;
@property (nonatomic) CGFloat expectedCtr;
@property (nonatomic) BOOL hasDistanceFromContainment;
@property (nonatomic) BOOL hasDistanceFromDeviceLocation;
@property (nonatomic) BOOL hasExpectedCtr;
@property (nonatomic) BOOL hasIsRecallMismatch;
@property (nonatomic) BOOL hasIsSpellCorrected;
@property (nonatomic) BOOL isRecallMismatch;
@property (nonatomic) BOOL isSpellCorrected;
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