// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPBTRANSITSYSTEM_H
#define GEOPBTRANSITSYSTEM_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOTransitNamedItem, NSCopying;


#import "GEOPBTransitArtwork.h"
#import "GEOStyleAttributes.h"

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSUInteger _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSString *_website;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _systemIndex;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasSystemIndex;
@property (readonly, nonatomic) BOOL hasWebsite;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *website;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)bestName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)geoTransitSystem;
-(id)identifier;
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