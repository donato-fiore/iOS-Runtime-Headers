// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPCORRECTEDSEARCH_H
#define GEORPCORRECTEDSEARCH_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDPlaceRequest.h"
#import "GEOPDPlaceResponse.h"
#import "GEOPlaceSearchRequest.h"
#import "GEOPlaceSearchResponse.h"

@interface GEORPCorrectedSearch : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    ? _flags;
}


@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (nonatomic) BOOL hasCorrectedSearchResultIndex;
@property (nonatomic) BOOL hasOriginalSearchResultIndex;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPlaceResponse;
@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (readonly, nonatomic) BOOL hasPlaceSearchResponse;
@property (readonly, nonatomic) BOOL hasPreferredSearchDisplayLocation;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property (retain, nonatomic) NSString *preferredSearchDisplayLocation;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)containsReportableData;
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
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif