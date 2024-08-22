// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPHOTO_H
#define GEOPHOTO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOPhoto : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_photoInfos;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _photoType;
    ? _flags;
}


@property (nonatomic) BOOL hasPhotoType;
@property (readonly, nonatomic) BOOL hasUid;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (nonatomic) int photoType;
@property (retain, nonatomic) NSString *uid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)photoInfoType;
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
-(id)initWithPlaceDataPhoto:(id)arg0 ;
-(id)jsonRepresentation;
-(id)photoInfoAtIndex:(NSUInteger)arg0 ;
-(id)photoTypeAsString:(int)arg0 ;
-(int)StringAsPhotoType:(id)arg0 ;
-(void)addPhotoInfo:(id)arg0 ;
-(void)clearPhotoInfos;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif