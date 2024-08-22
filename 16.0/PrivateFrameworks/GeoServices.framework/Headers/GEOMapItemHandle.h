// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMHANDLE_H
#define GEOMAPITEMHANDLE_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOMapItemClientAttributes.h"
#import "GEOPDPlaceRefinementParameters.h"
#import "GEOMapItemInitialRequestData.h"

@interface GEOMapItemHandle : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOMapItemInitialRequestData *_placeRequestData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _handleType;
    ? _flags;
}


@property (retain, nonatomic) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic) int handleType;
@property (readonly, nonatomic) BOOL hasClientAttributes;
@property (nonatomic) BOOL hasHandleType;
@property (readonly, nonatomic) BOOL hasPlaceRefinementParameters;
@property (readonly, nonatomic) BOOL hasPlaceRequestData;
@property (retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (retain, nonatomic) GEOMapItemInitialRequestData *placeRequestData;


+(BOOL)isValid:(id)arg0 ;
+(id)handleDataForMapItem:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)handleTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsHandleType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif