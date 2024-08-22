// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPHOTOOPTIONS_H
#define GEOPHOTOOPTIONS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPhotoOptions : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _photoSizes;
    int _maxPhotos;
    int _photoType;
    ? _flags;
}


@property (nonatomic) BOOL hasPhotoType;
@property (nonatomic) int maxPhotos;
@property (readonly, nonatomic) *int photoSizes;
@property (readonly, nonatomic) NSUInteger photoSizesCount;
@property (nonatomic) int photoType;
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
-(id)photoSizesAsString:(int)arg0 ;
-(id)photoTypeAsString:(int)arg0 ;
-(int)StringAsPhotoSizes:(id)arg0 ;
-(int)StringAsPhotoType:(id)arg0 ;
-(int)photoSizeAtIndex:(NSUInteger)arg0 ;
-(void)addPhotoSize:(int)arg0 ;
-(void)clearPhotoSizes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif