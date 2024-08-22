// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREGIONALRESOURCE_H
#define GEOREGIONALRESOURCE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEORegionalResource : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOTileSetRegion _tileRanges;
    NSUInteger _tileRangesCount;
    NSUInteger _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
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