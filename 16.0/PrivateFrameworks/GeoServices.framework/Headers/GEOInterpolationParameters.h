// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOINTERPOLATIONPARAMETERS_H
#define GEOINTERPOLATIONPARAMETERS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOInterpolationParameters : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _fractionalDistance;
    unsigned int _sideOfLine;
    ? _flags;
}


@property (nonatomic) CGFloat fractionalDistance;
@property (nonatomic) BOOL hasFractionalDistance;
@property (nonatomic) BOOL hasSideOfLine;
@property (nonatomic) unsigned int sideOfLine;
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