// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACESUMMARYLAYOUTUNITCONTAINMENT_H
#define GEOPDPLACESUMMARYLAYOUTUNITCONTAINMENT_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPDPlaceSummaryLayoutUnitContainment : PBCodable <NSCopying>

 {
    int _containmentType;
    ? _flags;
}


@property (nonatomic) int containmentType;
@property (nonatomic) BOOL hasContainmentType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containmentTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsContainmentType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif