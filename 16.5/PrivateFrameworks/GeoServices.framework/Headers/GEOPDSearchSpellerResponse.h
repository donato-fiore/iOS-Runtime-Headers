// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHSPELLERRESPONSE_H
#define GEOPDSEARCHSPELLERRESPONSE_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDSearchSpellerResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_debugResponse;
    NSUInteger _decileId;
    CGFloat _latencyMs;
    CGFloat _misspellScore;
    NSMutableArray *_spellSuggestions;
    NSMutableArray *_tokenCandidates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _modelNumberMajor;
    unsigned int _modelNumberMinor;
    int _rankerModelType;
    int _resultStatus;
    BOOL _isFromDLCacheModel;
    BOOL _isFromDLRuntimeModel;
    ? _flags;
}


@property (retain, nonatomic) NSString *debugResponse;
@property (nonatomic) NSUInteger decileId;
@property (readonly, nonatomic) BOOL hasDebugResponse;
@property (nonatomic) BOOL hasDecileId;
@property (nonatomic) BOOL hasIsFromDLCacheModel;
@property (nonatomic) BOOL hasIsFromDLRuntimeModel;
@property (nonatomic) BOOL hasLatencyMs;
@property (nonatomic) BOOL hasMisspellScore;
@property (nonatomic) BOOL hasModelNumberMajor;
@property (nonatomic) BOOL hasModelNumberMinor;
@property (nonatomic) BOOL hasRankerModelType;
@property (nonatomic) BOOL hasResultStatus;
@property (nonatomic) BOOL isFromDLCacheModel;
@property (nonatomic) BOOL isFromDLRuntimeModel;
@property (nonatomic) CGFloat latencyMs;
@property (nonatomic) CGFloat misspellScore;
@property (nonatomic) unsigned int modelNumberMajor;
@property (nonatomic) unsigned int modelNumberMinor;
@property (nonatomic) int rankerModelType;
@property (nonatomic) int resultStatus;
@property (retain, nonatomic) NSMutableArray *spellSuggestions;
@property (retain, nonatomic) NSMutableArray *tokenCandidates;


+(BOOL)isValid:(id)arg0 ;
+(Class)spellSuggestionType;
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
-(id)rankerModelTypeAsString:(int)arg0 ;
-(id)resultStatusAsString:(int)arg0 ;
-(id)spellSuggestionAtIndex:(NSUInteger)arg0 ;
-(id)tokenCandidatesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRankerModelType:(id)arg0 ;
-(int)StringAsResultStatus:(id)arg0 ;
-(void)addSpellSuggestion:(id)arg0 ;
-(void)addTokenCandidates:(id)arg0 ;
-(void)clearSpellSuggestions;
-(void)clearTokenCandidates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif