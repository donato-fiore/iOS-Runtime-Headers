// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPHOTOINFO_H
#define GEOPHOTOINFO_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPhotoInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _size;
    ? _flags;
}


@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) int size;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *url;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithPlaceDataPhotoContent:(id)arg0 ;
-(id)jsonRepresentation;
-(id)sizeAsString:(int)arg0 ;
-(int)StringAsSize:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif