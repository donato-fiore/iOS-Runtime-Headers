// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACE_H
#define GEOPDPLACE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"
#import "GEOPDPlacecardLayoutData.h"
#import "GEOMapItemInitialRequestData.h"

@interface GEOPDPlace : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_components;
    NSUInteger _createdTime;
    GEOPDMapsIdentifier *_mapsId;
    NSUInteger _muid;
    NSString *_placeCacheKey;
    GEOPDPlacecardLayoutData *_placeLayoutData;
    NSUInteger _preferredMuid;
    GEOMapItemInitialRequestData *_requestData;
    NSUInteger _updateVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _referenceFrame;
    int _resultProviderId;
    int _status;
    BOOL _nilPlace;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *components;
@property (nonatomic) NSUInteger createdTime;
@property (nonatomic) BOOL hasCreatedTime;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasNilPlace;
@property (readonly, nonatomic) BOOL hasPlaceCacheKey;
@property (readonly, nonatomic) BOOL hasPlaceLayoutData;
@property (nonatomic) BOOL hasPreferredMuid;
@property (nonatomic) BOOL hasReferenceFrame;
@property (readonly, nonatomic) BOOL hasRequestData;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasUpdateVersion;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) BOOL nilPlace;
@property (retain, nonatomic) NSString *placeCacheKey;
@property (retain, nonatomic) GEOPDPlacecardLayoutData *placeLayoutData;
@property (nonatomic) NSUInteger preferredMuid;
@property (nonatomic) int referenceFrame;
@property (retain, nonatomic) GEOMapItemInitialRequestData *requestData;
@property (nonatomic) int resultProviderId;
@property (nonatomic) int status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) NSUInteger updateVersion;


+(BOOL)isValid:(id)arg0 ;
+(Class)componentType;
+(id)attributionForPlaceData:(id)arg0 type:(int)arg1 ;
+(id)componentTypesFromComponentInfos:(id)arg0 ;
+(id)failedPlaceData;
+(id)failedPlaceDataForMuid:(NSUInteger)arg0 ;
-(BOOL)_isKey:(id)arg0 subsetOf:(id)arg1 ;
-(BOOL)hasBrandMUID;
-(BOOL)hasExpectedComponentTypes:(id)arg0 ;
-(BOOL)hasExpiredComponentsAsOf:(CGFloat)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isCacheable;
-(BOOL)isDisputed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStandAloneBrand;
-(BOOL)meetsManifestVersioningForServiceVersion:(id)arg0 ;
-(BOOL)phoneNumberOptsOutOfAds:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)shouldCacheByIDForRequest:(id)arg0 ;
-(NSUInteger)brandMUID;
-(NSUInteger)hash;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg0 ;
-(id)_entityName;
-(id)bestName;
-(id)businessURL;
-(id)cacheKey;
-(id)calculateMissingComponentTypes:(id)arg0 ;
-(id)compactDebugDescription;
-(id)componentAtIndex:(NSUInteger)arg0 ;
-(id)componentOfType:(int)arg0 options:(NSUInteger)arg1 ;
-(id)copyWithStrippedOptionalData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutETAComponents;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityComponent;
-(id)geoMapItem;
-(id)geoMapItemWithDetourInfo:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)pdPlaceCacheKeyForRequest:(id)arg0 ;
-(id)phoneNumbers;
-(id)referenceFrameAsString:(int)arg0 ;
-(id)secondaryName;
-(id)secondarySpokenName;
-(id)spokenNameForLocale:(id)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)successfulComponentWithValuesOfType:(int)arg0 ;
-(int)StringAsReferenceFrame:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)placeDisplayType;
-(unsigned int)minTTL;
-(void)_removeETAComponents;
-(void)addComponent:(id)arg0 ;
-(void)clearComponents;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)enumerateComponentOfType:(int)arg0 enumerationOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateComponentValuesOfType:(int)arg0 enumerationOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateComponentsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateValidComponentValuesOfType:(int)arg0 usingBlock:(id)arg1 ;
-(void)enumerateValidComponentWithValuesOfType:(int)arg0 usingBlock:(id)arg1 ;
-(void)enumerateValidComponentsWithValuesUsingBlock:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setFirstSeenTimestamp:(CGFloat)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif