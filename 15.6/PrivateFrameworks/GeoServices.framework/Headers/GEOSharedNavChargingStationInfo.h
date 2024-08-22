// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSHAREDNAVCHARGINGSTATIONINFO_H
#define GEOSHAREDNAVCHARGINGSTATIONINFO_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOSharedNavChargingStationInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _chargingTime;
    NSUInteger _muid;
    NSString *_name;
    ? _flags;
}


@property (nonatomic) CGFloat chargingTime;
@property (nonatomic) BOOL hasChargingTime;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *name;
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