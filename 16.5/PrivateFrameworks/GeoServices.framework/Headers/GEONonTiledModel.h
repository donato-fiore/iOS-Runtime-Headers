// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONONTILEDMODEL_H
#define GEONONTILEDMODEL_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEONonTiledInfo.h"

@interface GEONonTiledModel : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEONonTiledInfo *_info;
    NSMutableArray *_materialMaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasInfo;
@property (retain, nonatomic) GEONonTiledInfo *info;
@property (retain, nonatomic) NSMutableArray *materialMaps;


+(BOOL)isValid:(id)arg0 ;
+(Class)materialMapType;
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
-(id)materialMapAtIndex:(NSUInteger)arg0 ;
-(void)addMaterialMap:(id)arg0 ;
-(void)clearMaterialMaps;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif