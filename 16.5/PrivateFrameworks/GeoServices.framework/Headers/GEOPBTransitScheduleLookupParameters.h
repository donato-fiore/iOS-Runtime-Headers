// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPBTRANSITSCHEDULELOOKUPPARAMETERS_H
#define GEOPBTRANSITSCHEDULELOOKUPPARAMETERS_H

@class PBCodable, PBUnknownFields, NSData;
@protocol NSCopying;



@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _lineId;
    NSUInteger _referenceTripId;
    NSData *_routingParameters;
    NSUInteger _transitId;
    BOOL _includeAllDirectionNames;
    BOOL _includeAllHeadsigns;
    ? _flags;
}


@property (nonatomic) BOOL hasIncludeAllDirectionNames;
@property (nonatomic) BOOL hasIncludeAllHeadsigns;
@property (nonatomic) BOOL hasLineId;
@property (nonatomic) BOOL hasReferenceTripId;
@property (readonly, nonatomic) BOOL hasRoutingParameters;
@property (nonatomic) BOOL hasTransitId;
@property (nonatomic) BOOL includeAllDirectionNames;
@property (nonatomic) BOOL includeAllHeadsigns;
@property (nonatomic) NSUInteger lineId;
@property (nonatomic) NSUInteger referenceTripId;
@property (retain, nonatomic) NSData *routingParameters;
@property (nonatomic) NSUInteger transitId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif