// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLANECHANGEINFO_H
#define GEOLANECHANGEINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOLaneChangeInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _endOffsetCm;
    unsigned int _numValidLanes;
    unsigned int _startOffsetCm;
    ? _flags;
}


@property (nonatomic) unsigned int endOffsetCm;
@property (nonatomic) BOOL hasEndOffsetCm;
@property (nonatomic) BOOL hasNumValidLanes;
@property (nonatomic) BOOL hasStartOffsetCm;
@property (nonatomic) unsigned int numValidLanes;
@property (nonatomic) unsigned int startOffsetCm;
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