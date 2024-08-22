// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSHARDEDID_H
#define GEOPDSHARDEDID_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOPDShardedId : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _basemapId;
    GEOLatLng *_center;
    NSUInteger _muid;
    int _mapsResultType;
    int _resultProviderId;
    ? _flags;
}


@property (nonatomic) NSUInteger basemapId;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) BOOL hasBasemapId;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasMapsResultType;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) int mapsResultType;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapsResultTypeAsString:(int)arg0 ;
-(int)StringAsMapsResultType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif