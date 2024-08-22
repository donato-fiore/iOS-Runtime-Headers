// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPUSERSEARCHINPUT_H
#define GEORPUSERSEARCHINPUT_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDAutocompleteEntry.h"
#import "GEOLatLng.h"
#import "GEOPDPlace.h"

@interface GEORPUserSearchInput : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _origin;
    ? _flags;
}


@property (retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) BOOL hasAutocompleteEntry;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (readonly, nonatomic) BOOL hasSingleLineAddressString;
@property (nonatomic) int origin;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *singleLineAddressString;


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
-(id)originAsString:(int)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif