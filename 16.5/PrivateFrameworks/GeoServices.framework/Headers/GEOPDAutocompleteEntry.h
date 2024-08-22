// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDAUTOCOMPLETEENTRY_H
#define GEOPDAUTOCOMPLETEENTRY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOPDAutocompleteEntryAddress.h"
#import "GEOPDAutocompleteEntryBrandProfile.h"
#import "GEOPDAutocompleteEntryBusiness.h"
#import "GEOPDAutocompleteEntryCategory.h"
#import "GEOPDAutocompleteEntryClientResolved.h"
#import "GEOPDAutocompleteEntryCollection.h"
#import "GEOPDAutocompleteEntryDirectionIntent.h"
#import "GEOPDAutocompleteEntryHighlightLine.h"
#import "GEOPDAutocompleteEntryOfflineArea.h"
#import "GEOPDParsecRankingFeatures.h"
#import "GEOPDAutocompleteEntryPublisher.h"
#import "GEOPDAutocompleteEntryQuery.h"
#import "GEOPDRetainedSearchMetadata.h"
#import "GEOPDServerResultScoreMetadata.h"

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntryAddress *_address;
    GEOPDAutocompleteEntryBrandProfile *_brandProfile;
    GEOPDAutocompleteEntryBusiness *_business;
    GEOPDAutocompleteEntryCategory *_category;
    GEOPDAutocompleteEntryClientResolved *_clientResolved;
    GEOPDAutocompleteEntryCollection *_collection;
    GEOPDAutocompleteEntryDirectionIntent *_directionIntent;
    GEOPDAutocompleteEntryHighlightLine *_highlightExtra;
    GEOPDAutocompleteEntryHighlightLine *_highlightMain;
    GEOPDAutocompleteEntryOfflineArea *_offlineArea;
    GEOPDParsecRankingFeatures *_parsecRankingFeatures;
    GEOPDAutocompleteEntryPublisher *_publisher;
    NSString *_queryAcceleratorCompletionString;
    GEOPDAutocompleteEntryQuery *_query;
    GEOPDRetainedSearchMetadata *_retainSearch;
    GEOPDServerResultScoreMetadata *_serverResultScoreMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _autocompleteResultCellType;
    int _sortPriority;
    int _type;
    BOOL _enableQueryAcceleratorAffordance;
    ? _flags;
}


@property (retain, nonatomic) GEOPDAutocompleteEntryAddress *address;
@property (nonatomic) int autocompleteResultCellType;
@property (retain, nonatomic) GEOPDAutocompleteEntryBrandProfile *brandProfile;
@property (retain, nonatomic) GEOPDAutocompleteEntryBusiness *business;
@property (retain, nonatomic) GEOPDAutocompleteEntryCategory *category;
@property (retain, nonatomic) GEOPDAutocompleteEntryClientResolved *clientResolved;
@property (retain, nonatomic) GEOPDAutocompleteEntryCollection *collection;
@property (retain, nonatomic) GEOPDAutocompleteEntryDirectionIntent *directionIntent;
@property (nonatomic) BOOL enableQueryAcceleratorAffordance;
@property (readonly, nonatomic) BOOL hasAddress;
@property (nonatomic) BOOL hasAutocompleteResultCellType;
@property (readonly, nonatomic) BOOL hasBrandProfile;
@property (readonly, nonatomic) BOOL hasBusiness;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasClientResolved;
@property (readonly, nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) BOOL hasDirectionIntent;
@property (nonatomic) BOOL hasEnableQueryAcceleratorAffordance;
@property (readonly, nonatomic) BOOL hasHighlightExtra;
@property (readonly, nonatomic) BOOL hasHighlightMain;
@property (readonly, nonatomic) BOOL hasOfflineArea;
@property (readonly, nonatomic) BOOL hasParsecRankingFeatures;
@property (readonly, nonatomic) BOOL hasPublisher;
@property (readonly, nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) BOOL hasQueryAcceleratorCompletionString;
@property (readonly, nonatomic) BOOL hasRetainSearch;
@property (readonly, nonatomic) BOOL hasServerResultScoreMetadata;
@property (nonatomic) BOOL hasSortPriority;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightExtra;
@property (retain, nonatomic) GEOPDAutocompleteEntryHighlightLine *highlightMain;
@property (retain, nonatomic) GEOPDAutocompleteEntryOfflineArea *offlineArea;
@property (retain, nonatomic) GEOPDParsecRankingFeatures *parsecRankingFeatures;
@property (retain, nonatomic) GEOPDAutocompleteEntryPublisher *publisher;
@property (retain, nonatomic) GEOPDAutocompleteEntryQuery *query;
@property (retain, nonatomic) NSString *queryAcceleratorCompletionString;
@property (retain, nonatomic) GEOPDRetainedSearchMetadata *retainSearch;
@property (retain, nonatomic) GEOPDServerResultScoreMetadata *serverResultScoreMetadata;
@property (nonatomic) int sortPriority;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autocompleteResultCellTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsAutocompleteResultCellType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif