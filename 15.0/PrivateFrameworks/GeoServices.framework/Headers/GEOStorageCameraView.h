// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSTORAGECAMERAVIEW_H
#define GEOSTORAGECAMERAVIEW_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOURLCamera.h"

@interface GEOStorageCameraView : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOURLCamera *_camera;
    int _mapType;
    ? _flags;
}


@property (retain, nonatomic) GEOURLCamera *camera;
@property (readonly, nonatomic) BOOL hasCamera;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;
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
-(id)mapTypeAsString:(int)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif