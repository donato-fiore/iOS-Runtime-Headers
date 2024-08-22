// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHBRANDCOUNTINFO_H
#define GEOPDSEARCHBRANDCOUNTINFO_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDSearchBrandCountInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_brandKey;
    NSMutableArray *_brandRelationships;
    NSMutableArray *_countryOccurrences;
    NSString *_legacyBrandName;
    NSUInteger _muid;
    NSUInteger _parentMuid;
    NSUInteger _total;
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