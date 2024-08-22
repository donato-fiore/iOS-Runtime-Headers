// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHQUERYGEONORMALIZERMETADATA_H
#define GEOPDSEARCHQUERYGEONORMALIZERMETADATA_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOPDSearchQueryGeoNormalizerMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _normalizers;
    NSString *_floor;
    NSString *_mailStop;
    NSString *_poPox;
    NSString *_unitNumber;
    NSString *_unitTypeId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif