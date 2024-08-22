// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSHAREDNAVETAINFO_H
#define GEOSHAREDNAVETAINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOSharedNavETAInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _etaTimestamp;
    CGFloat _latitude;
    CGFloat _longitude;
    CGFloat _remainingDistance;
    CGFloat _remainingTime;
    unsigned int _waypointIndex;
    ? _flags;
}


@property (nonatomic) CGFloat etaTimestamp;
@property (nonatomic) BOOL hasEtaTimestamp;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasRemainingDistance;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) BOOL hasWaypointIndex;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) CGFloat remainingDistance;
@property (nonatomic) CGFloat remainingTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int waypointIndex;


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