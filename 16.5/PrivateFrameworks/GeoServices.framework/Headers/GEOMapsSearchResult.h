// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPSSEARCHRESULT_H
#define GEOMAPSSEARCHRESULT_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOAddress.h"
#import "GEOPDMapsIdentifier.h"
#import "GEOPlaceActionDetails.h"

@interface GEOMapsSearchResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOAddress *_address;
    GEOPDMapsIdentifier *_mapsId;
    NSUInteger _muid;
    GEOPlaceActionDetails *_placeActionDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOAddress *address;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasPlaceActionDetails;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif