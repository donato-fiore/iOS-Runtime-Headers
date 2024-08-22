// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREGIONALRESOURCEREGION_H
#define GEOREGIONALRESOURCEREGION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEORegionalResourceRegion : PBCodable <NSCopying>

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
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (retain, nonatomic) NSMutableArray *icons;
@property (readonly, nonatomic) *GEOTileSetRegion tileRanges;
@property (readonly, nonatomic) NSUInteger tileRangesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)attributionType;
+(Class)iconChecksumType;
+(Class)iconType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributionAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)iconAtIndex:(NSUInteger)arg0 ;
-(id)iconChecksumAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(struct GEOTileSetRegion )tileRangeAtIndex:(NSUInteger)arg0 ;
-(void)addAttribution:(id)arg0 ;
-(void)addIcon:(id)arg0 ;
-(void)addIconChecksum:(id)arg0 ;
-(void)addTileRange:(struct GEOTileSetRegion )arg0 ;
-(void)clearAttributions;
-(void)clearIconChecksums;
-(void)clearIcons;
-(void)clearTileRanges;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif