// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLPRLICENSEPLATEREGION_H
#define GEOLPRLICENSEPLATEREGION_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOMapRegionE7.h"

@interface GEOLPRLicensePlateRegion : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_identifier;
    NSMutableArray *_licensePlateInfos;
    GEOMapRegionE7 *_mapRegion;
    NSMutableArray *_regions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *licensePlateInfos;
@property (retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property (retain, nonatomic) NSMutableArray *regions;


+(BOOL)isValid:(id)arg0 ;
+(Class)licensePlateInfoType;
+(Class)regionType;
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
-(id)licensePlateInfoAtIndex:(NSUInteger)arg0 ;
-(id)regionAtIndex:(NSUInteger)arg0 ;
-(void)addLicensePlateInfo:(id)arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)clearLicensePlateInfos;
-(void)clearRegions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif