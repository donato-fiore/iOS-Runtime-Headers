// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDORIENTEDBOUNDINGBOX_H
#define GEOPDORIENTEDBOUNDINGBOX_H

@class PBCodable;
@protocol NSCopying;


#import "GEOPDOrientedPosition.h"

@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying>

 {
    CGFloat _depth;
    CGFloat _height;
    GEOPDOrientedPosition *_position;
    CGFloat _width;
    ? _flags;
}


@property (nonatomic) CGFloat depth;
@property (nonatomic) BOOL hasDepth;
@property (nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) BOOL hasPosition;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) CGFloat height;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic) CGFloat width;


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