// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMCLIENTATTRIBUTES_H
#define GEOMAPITEMCLIENTATTRIBUTES_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOMapItemAddressBookAttributes.h"
#import "GEOMapItemCorrectedLocationAttributes.h"
#import "GEOMapItemRoutineAttributes.h"

@interface GEOMapItemClientAttributes : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (retain, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property (readonly, nonatomic) BOOL hasAddressBookAttributes;
@property (readonly, nonatomic) BOOL hasCorrectedLocationAttributes;
@property (readonly, nonatomic) BOOL hasRoutineAttributes;
@property (retain, nonatomic) GEOMapItemRoutineAttributes *routineAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif