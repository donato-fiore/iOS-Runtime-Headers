// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHSPELLERREQUEST_H
#define GEOPDSEARCHSPELLERREQUEST_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOPDSearchKeyValuePairList.h"
#import "GEOPDSearchLanguageContext.h"
#import "GEOPDSearchLocationContext.h"

@interface GEOPDSearchSpellerRequest : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDSearchKeyValuePairList *_abConfigParams;
    GEOPDSearchLanguageContext *_languageContext;
    GEOPDSearchLocationContext *_locationContext;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestFlags;
    unsigned int _maxSuggestions;
    int _queryType;
    BOOL _performCompletion;
    BOOL _useCache;
    ? _flags;
}


@property (retain, nonatomic) GEOPDSearchKeyValuePairList *abConfigParams;
@property (readonly, nonatomic) BOOL hasAbConfigParams;
@property (readonly, nonatomic) BOOL hasLanguageContext;
@property (readonly, nonatomic) BOOL hasLocationContext;
@property (nonatomic) BOOL hasMaxSuggestions;
@property (nonatomic) BOOL hasPerformCompletion;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL hasQueryType;
@property (nonatomic) BOOL hasRequestFlags;
@property (nonatomic) BOOL hasUseCache;
@property (retain, nonatomic) GEOPDSearchLanguageContext *languageContext;
@property (retain, nonatomic) GEOPDSearchLocationContext *locationContext;
@property (nonatomic) unsigned int maxSuggestions;
@property (nonatomic) BOOL performCompletion;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) int queryType;
@property (nonatomic) int requestFlags;
@property (nonatomic) BOOL useCache;


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
-(id)queryTypeAsString:(int)arg0 ;
-(id)requestFlagsAsString:(int)arg0 ;
-(int)StringAsQueryType:(id)arg0 ;
-(int)StringAsRequestFlags:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif