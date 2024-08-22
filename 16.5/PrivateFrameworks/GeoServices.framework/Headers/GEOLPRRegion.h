// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLPRREGION_H
#define GEOLPRREGION_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOLPRRegionInfo.h"
#import "GEOLPRBoundingBoxE7.h"

@interface GEOLPRRegion : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_displayNames;
    GEOLPRRegionInfo *_info;
    GEOLPRBoundingBoxE7 *_regionBoundingBox;
    NSMutableArray *_subRegions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *displayNames;
@property (readonly, nonatomic) BOOL hasInfo;
@property (readonly, nonatomic) BOOL hasRegionBoundingBox;
@property (retain, nonatomic) GEOLPRRegionInfo *info;
@property (retain, nonatomic) GEOLPRBoundingBoxE7 *regionBoundingBox;
@property (retain, nonatomic) NSMutableArray *subRegions;


+(BOOL)isValid:(id)arg0 ;
+(Class)displayNameType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayNameAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)subRegionsAtIndex:(NSUInteger)arg0 ;
-(void)addDisplayName:(id)arg0 ;
-(void)addSubRegions:(id)arg0 ;
-(void)clearDisplayNames;
-(void)clearSubRegions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif