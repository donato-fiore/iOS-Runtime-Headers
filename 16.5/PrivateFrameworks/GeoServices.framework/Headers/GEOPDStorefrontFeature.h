// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSTOREFRONTFEATURE_H
#define GEOPDSTOREFRONTFEATURE_H

@class PBCodable;
@protocol NSCopying;


#import "GEOPDOrientedBoundingBox.h"

@interface GEOPDStorefrontFeature : PBCodable <NSCopying>

 {
    GEOPDOrientedBoundingBox *_geometry;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) GEOPDOrientedBoundingBox *geometry;
@property (readonly, nonatomic) BOOL hasGeometry;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;


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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif