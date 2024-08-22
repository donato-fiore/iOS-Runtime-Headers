// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCHARGERPLUG_H
#define GEOCHARGERPLUG_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOChargerPlug : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _maximumPower;
    int _type;
    ? _flags;
}


@property (nonatomic) BOOL hasMaximumPower;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int maximumPower;
@property (nonatomic) int type;
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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif