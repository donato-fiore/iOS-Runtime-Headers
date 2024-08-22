// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACERESULT_H
#define GEOPLACERESULT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPlace.h"
#import "GEOPlaceSearchRequest.h"
#import "GEOAddress.h"

@interface GEOPlaceResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_additionalPlaces;
    NSMutableArray *_disambiguationLabels;
    NSUInteger _flyoverTourMuid;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    NSMutableArray *_namedFields;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    NSMutableArray *_unmatchedStrings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _cacheControl;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *additionalPlaces;
@property (nonatomic) int cacheControl;
@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (nonatomic) NSUInteger flyoverTourMuid;
@property (nonatomic) BOOL hasCacheControl;
@property (nonatomic) BOOL hasFlyoverTourMuid;
@property (readonly, nonatomic) BOOL hasQuad;
@property (readonly, nonatomic) BOOL hasRevgeoRequestTemplate;
@property (readonly, nonatomic) BOOL hasSuggestedQuery;
@property (readonly, nonatomic) BOOL hasTokenEntity;
@property (nonatomic) BOOL hasTravelDistance;
@property (nonatomic) BOOL hasTravelTime;
@property (retain, nonatomic) NSMutableArray *matchedTokens;
@property (retain, nonatomic) NSMutableArray *namedFeatures;
@property (retain, nonatomic) NSMutableArray *namedFields;
@property (retain, nonatomic) GEOPlace *place;
@property (retain, nonatomic) NSString *quad;
@property (retain, nonatomic) GEOPlaceSearchRequest *revgeoRequestTemplate;
@property (retain, nonatomic) NSString *suggestedQuery;
@property (retain, nonatomic) GEOAddress *tokenEntity;
@property (nonatomic) unsigned int travelDistance;
@property (nonatomic) unsigned int travelTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *unmatchedStrings;


+(BOOL)isValid:(id)arg0 ;
+(Class)additionalPlaceType;
+(Class)disambiguationLabelType;
+(Class)matchedTokenType;
+(Class)namedFeatureType;
+(Class)namedFieldType;
+(Class)unmatchedStringType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)additionalPlaceAtIndex:(NSUInteger)arg0 ;
-(id)cacheControlAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)disambiguationLabelAtIndex:(NSUInteger)arg0 ;
-(id)geoMapItem;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)matchedTokenAtIndex:(NSUInteger)arg0 ;
-(id)namedFeatureAtIndex:(NSUInteger)arg0 ;
-(id)namedFieldAtIndex:(NSUInteger)arg0 ;
-(id)unmatchedStringAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCacheControl:(id)arg0 ;
-(void)addAdditionalPlace:(id)arg0 ;
-(void)addDisambiguationLabel:(id)arg0 ;
-(void)addMatchedToken:(id)arg0 ;
-(void)addNamedFeature:(id)arg0 ;
-(void)addNamedField:(id)arg0 ;
-(void)addUnmatchedString:(id)arg0 ;
-(void)clearAdditionalPlaces;
-(void)clearDisambiguationLabels;
-(void)clearMatchedTokens;
-(void)clearNamedFeatures;
-(void)clearNamedFields;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearUnmatchedStrings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif