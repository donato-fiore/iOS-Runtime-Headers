// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPPHOTOMETADATA_H
#define GEORPPHOTOMETADATA_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEORPPhotoMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_clientImageUuid;
    NSString *_deviceLensMake;
    NSString *_deviceLensModel;
    GEOLocation *_geotag;
    NSString *_imageDescription;
    NSString *_mediaType;
    NSUInteger _size;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _source;
    ? _flags;
}


@property (retain, nonatomic) NSString *clientImageUuid;
@property (retain, nonatomic) NSString *deviceLensMake;
@property (retain, nonatomic) NSString *deviceLensModel;
@property (retain, nonatomic) GEOLocation *geotag;
@property (readonly, nonatomic) BOOL hasClientImageUuid;
@property (readonly, nonatomic) BOOL hasDeviceLensMake;
@property (readonly, nonatomic) BOOL hasDeviceLensModel;
@property (readonly, nonatomic) BOOL hasGeotag;
@property (readonly, nonatomic) BOOL hasImageDescription;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *imageDescription;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) NSUInteger size;
@property (nonatomic) int source;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif