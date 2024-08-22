// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEONEARBYTRANSITGROUP_H
#define GEONEARBYTRANSITGROUP_H

@class PBCodable;
@protocol NSCopying;



@interface GEONearbyTransitGroup : PBCodable <NSCopying>

 {
    unsigned int _linesShown;
    unsigned int _lines;
    ? _flags;
}


@property (nonatomic) BOOL hasLines;
@property (nonatomic) BOOL hasLinesShown;
@property (nonatomic) unsigned int lines;
@property (nonatomic) unsigned int linesShown;


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