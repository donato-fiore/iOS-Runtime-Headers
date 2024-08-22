// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPADDRESSFEEDBACK_H
#define GEORPADDRESSFEEDBACK_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPAddressCorrections.h"
#import "GEORPPersonalizedMapsContext.h"
#import "GEOPDPlaceRequest.h"
#import "GEOPDPlace.h"

@interface GEORPAddressFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPPersonalizedMapsContext *_personalizedMaps;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasPersonalizedMaps;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) GEORPPersonalizedMapsContext *personalizedMaps;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (nonatomic) int type;
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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif