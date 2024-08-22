// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLABELINFO_H
#define GEOLABELINFO_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOFormattedString.h"
#import "GEOPBTransitArtwork.h"
#import "GEOStyleAttributes.h"

@interface GEOLabelInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    GEOPBTransitArtwork *_iconArtwork;
    GEOStyleAttributes *_labelStyleAttributes;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) BOOL hasDetail;
@property (readonly, nonatomic) BOOL hasIconArtwork;
@property (readonly, nonatomic) BOOL hasLabelStyleAttributes;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOPBTransitArtwork *iconArtwork;
@property (retain, nonatomic) GEOStyleAttributes *labelStyleAttributes;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
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