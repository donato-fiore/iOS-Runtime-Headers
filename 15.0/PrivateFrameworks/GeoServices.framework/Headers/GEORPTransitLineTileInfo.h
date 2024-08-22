// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPTRANSITLINETILEINFO_H
#define GEORPTRANSITLINETILEINFO_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEORPTransitLineTileInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSUInteger _transitLineMuid;
    NSString *_transitLineName;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (nonatomic) BOOL hasTransitLineMuid;
@property (readonly, nonatomic) BOOL hasTransitLineName;
@property (readonly, nonatomic) BOOL hasTransitSystemName;
@property (nonatomic) NSUInteger transitLineMuid;
@property (retain, nonatomic) NSString *transitLineName;
@property (retain, nonatomic) NSString *transitSystemName;


+(BOOL)isValid:(id)arg0 ;
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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif