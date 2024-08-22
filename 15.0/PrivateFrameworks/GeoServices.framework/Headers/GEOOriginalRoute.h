// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOORIGINALROUTE_H
#define GEOORIGINALROUTE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData;
@protocol NSCopying;



@interface GEOOriginalRoute : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalDirectionsResponseID;
    NSData *_routeHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _originalRoutePurpose;
    unsigned int _routeIndex;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (nonatomic) BOOL hasRouteIndex;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (nonatomic) int originalRoutePurpose;
@property (retain, nonatomic) NSData *routeHandle;
@property (nonatomic) unsigned int routeIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)originalRoutePurposeAsString:(int)arg0 ;
-(int)StringAsOriginalRoutePurpose:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif