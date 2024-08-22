// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOWIFIBSS_H
#define GEOWIFIBSS_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOLatLngE7.h"
#import "GEOLatLng.h"

@interface GEOWiFiBSS : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _attributes;
    NSString *_identifier;
    GEOLatLngE7 *_latLngE7;
    GEOLatLng *_location;
    NSMutableArray *_qualities;
    NSInteger _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int attributes;
@property (readonly, nonatomic) NSUInteger attributesCount;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLatLngE7;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) GEOLatLngE7 *latLngE7;
@property (retain, nonatomic) GEOLatLng *location;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) NSInteger uniqueIdentifier;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)qualitiesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAttributes:(id)arg0 ;
-(int)attributesAtIndex:(NSUInteger)arg0 ;
-(void)addAttributes:(int)arg0 ;
-(void)addQualities:(id)arg0 ;
-(void)clearAttributes;
-(void)clearQualities;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif