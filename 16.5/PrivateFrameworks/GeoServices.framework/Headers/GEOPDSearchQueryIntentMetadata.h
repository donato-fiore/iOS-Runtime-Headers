// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHQUERYINTENTMETADATA_H
#define GEOPDSEARCHQUERYINTENTMETADATA_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOPDSearchACHintMetadata.h"
#import "GEOPDSearchQueryTokenImportanceMetadata.h"
#import "GEOPDSearchQueryCompletionMetadata.h"
#import "GEOPDSearchQueryDirectionsIntentMetadata.h"
#import "GEOPDSearchQueryDymMetadata.h"
#import "GEOPDSearchQueryFuzzyMatchV2Metadata.h"
#import "GEOPDSearchQueryGeoMetadata.h"
#import "GEOPDSearchQueryGeoNormalizerMetadata.h"
#import "GEOPDSearchQueryGeoTagMetadata.h"
#import "GEOPDSearchQueryInterpretationMetadata.h"
#import "GEOPDSearchQueryNormalizerMetadata.h"
#import "GEOPDSearchQueryPoiMetadata.h"
#import "GEOPDSearchQuerySpellCorrectionMetadata.h"
#import "GEOPDSearchQuerySynonymMetadata.h"
#import "GEOPDSearchQueryTagMetadata.h"
#import "GEOPDSearchQueryTokenizerMetadata.h"
#import "GEOPDSearchQueryTransliteratorMetadata.h"
#import "GEOPDSearchRichBrandMetadata.h"

@interface GEOPDSearchQueryIntentMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _intentSources;
    ? _rewrittenQueryTypes;
    GEOPDSearchACHintMetadata *_acHintMetadata;
    GEOPDSearchQueryTokenImportanceMetadata *_geoTokenImportanceMetadata;
    NSString *_originalQuery;
    NSMutableArray *_queryClassificationMetadatas;
    GEOPDSearchQueryCompletionMetadata *_queryCompletionMetadata;
    GEOPDSearchQueryDirectionsIntentMetadata *_queryDirectionsIntentMetadata;
    GEOPDSearchQueryDymMetadata *_queryDymMetadata;
    NSMutableArray *_queryEmbeddingMetadatas;
    GEOPDSearchQueryFuzzyMatchV2Metadata *_queryFuzzyMatchV2Metadata;
    GEOPDSearchQueryGeoMetadata *_queryGeoMetadata;
    GEOPDSearchQueryGeoNormalizerMetadata *_queryGeoNormalizerMetadata;
    GEOPDSearchQueryGeoTagMetadata *_queryGeoTagMetadata;
    CGFloat _queryIntentWeight;
    GEOPDSearchQueryInterpretationMetadata *_queryInterpretationMetadata;
    GEOPDSearchQueryNormalizerMetadata *_queryNormalizerMetadata;
    GEOPDSearchQueryPoiMetadata *_queryPoiMetadata;
    GEOPDSearchQuerySpellCorrectionMetadata *_querySpellCorrectionMetadata;
    GEOPDSearchQuerySynonymMetadata *_querySynonymMetadata;
    GEOPDSearchQueryTagMetadata *_queryTagMetadata;
    GEOPDSearchQueryTokenImportanceMetadata *_queryTokenImportanceMetadata;
    GEOPDSearchQueryTokenizerMetadata *_queryTokenizerMetadata;
    GEOPDSearchQueryTransliteratorMetadata *_queryTransliterMetadata;
    GEOPDSearchQueryTokenizerMetadata *_rawQueryTokenizerMetadata;
    NSString *_rewrittenQuery;
    GEOPDSearchRichBrandMetadata *_richBrandMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _rewrittenQueryIndex;
    BOOL _isFromDefinitiveQu;
    BOOL _isFromKnowledgeGraph;
    BOOL _isFromSearchQu;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif