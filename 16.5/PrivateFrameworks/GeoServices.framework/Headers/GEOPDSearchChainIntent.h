// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHCHAININTENT_H
#define GEOPDSEARCHCHAININTENT_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDSearchTokenSet.h"

@interface GEOPDSearchChainIntent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _brandMuids;
    NSUInteger _brandMuid;
    NSMutableArray *_brandRelationshipInfos;
    NSMutableArray *_categoryIds;
    NSString *_chainId;
    NSMutableArray *_featureMaps;
    NSString *_geminiBrand;
    NSMutableArray *_prefCategoryIds;
    NSMutableArray *_relatedBrands;
    GEOPDSearchTokenSet *_tokenSet;
    NSString *_trigger;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isChainInSameCountry;
    BOOL _isLocalChain;
    BOOL _isFromBrandProfile;
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