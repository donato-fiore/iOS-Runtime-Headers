// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHCATEGORYINTENT_H
#define GEOPDSEARCHCATEGORYINTENT_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDSearchTokenSet.h"

@interface GEOPDSearchCategoryIntent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_canonicalNames;
    NSMutableArray *_categoryIds;
    NSMutableArray *_expandedCategoryIds;
    NSMutableArray *_featureMaps;
    NSMutableArray *_negativeCategorys;
    GEOPDSearchTokenSet *_tokenSet;
    NSString *_trigger;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
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