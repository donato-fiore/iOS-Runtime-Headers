// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVLPRECISION_H
#define GEOVLPRECISION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOVLPrecision : PBCodable <NSCopying>

 {
    ? _precisions;
}


@property (readonly, nonatomic) *unsigned int precisions;
@property (readonly, nonatomic) NSUInteger precisionsCount;


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
-(unsigned int)precisionsAtIndex:(NSUInteger)arg0 ;
-(void)addPrecisions:(unsigned int)arg0 ;
-(void)clearPrecisions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif