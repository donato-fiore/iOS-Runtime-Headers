// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHQUERYSYNONYMMETADATA_H
#define GEOPDSEARCHQUERYSYNONYMMETADATA_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDSearchQuerySynonymMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_countryCode;
    NSMutableArray *_featureMaps;
    NSMutableArray *_geoHashes;
    NSUInteger _identifier;
    NSString *_key;
    NSString *_language;
    NSString *_originalQueryDisplayString;
    NSMutableArray *_refinementQueries;
    NSString *_synonymQueryDisplayString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _confidence;
    int _originalProvider;
    int _rewriteProvider;
    BOOL _hardRewrite;
    BOOL _isOrgQueryPrefixOfRefinement;
    BOOL _isWeakLexicalMatch;
    BOOL _useGeoHashes;
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
-(void)writeTo:(id)arg0 ;


@end


#endif